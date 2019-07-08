#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "my_struct.h"
#include "my_func.h"
void insert(struct tel *p[], int *cp, int max_num)
{
	int i;
	char input[101];
	struct tel temp, *t = &temp;
	if (*cp == max_num)
	{
		printf("OVERFLOW\n");
		return;
	}
	p[*cp] = (struct tel *)malloc(sizeof(struct tel));
	printf("Name:");
	scanf("%s", input);
	p[*cp]->name = (char *)malloc(sizeof(char)*(strlen(input) + 1));
	strcpy(p[*cp]->name, input);
	printf("Phone_number:");
	scanf("%s", input);
	p[*cp]->tel_no = (char *)malloc(sizeof(char)*(strlen(input) + 1));
	strcpy(p[*cp]->tel_no, input);
	printf("Birth:");
	scanf("%s", input);
	p[*cp]->birth = (char *)malloc(sizeof(char)*(strlen(input) + 1));
	strcpy(p[*cp]->birth, input);
	for (i = *cp; i>0; i--)
	{
		if (strcmp(p[i - 1]->name, p[i]->name)>0)
		{
			t = p[i];
			p[i] = p[i - 1];
			p[i - 1] = t;
		}
	}
	(*cp)++;
	printf("<<%d>>\n", *cp);
	return;
}