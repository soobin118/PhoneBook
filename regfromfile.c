#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "my_struct.h"
#include "my_func.h"
void regfromfile(struct tel *p[], int *cp, int max_num)
{
	FILE *fp;
	int i;
	char n[101], tel[101], b[101];
	struct tel temp, *t = &temp;
	fp = fopen("PHONE_BOOK.txt", "r");
	if (fp == NULL)
	{
		printf("Couldn't open file!\n");
		return -1;
	}

	while (fscanf(fp, "%s %s %s", n, tel, b) != EOF)
	{
		if (*cp == max_num)
		{
			printf("OVERFLOW\n");
			break;
		}
		p[*cp] = (struct tel *)malloc(sizeof(struct tel));
		p[*cp]->name = (char *)malloc(strlen(n) + 1);
		strcpy(p[*cp]->name, n);
		p[*cp]->tel_no = (char *)malloc(strlen(tel) + 1);
		strcpy(p[*cp]->tel_no, tel);
		p[*cp]->birth = (char *)malloc(strlen(b) + 1);
		strcpy(p[*cp]->birth, b);
		for (i = *cp; i > 0; i--)
		{
			if (strcmp(p[i - 1]->name, p[i]->name)>0)
			{
				t = p[i - 1];
				p[i - 1] = p[i];
				p[i] = t;
			}
		}
		(*cp)++;
	}
	fclose(fp);
}