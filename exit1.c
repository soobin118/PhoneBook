#include<stdio.h>
#include<stdlib.h>
#include "my_struct.h"
#include "my_func.h"
void exit1(struct tel *p[], int *cp)
{
	FILE *fp;
	int i;
	fp = fopen("PHONE_BOOK.txt", "w");
	if (fp == NULL)
	{
		printf("Couldn't open file!\n");
		return -1;
	}
	for (i = 0; i < *cp; i++)
	{
		fprintf(fp, "%s %s %s\n", p[i]->name, p[i]->tel_no, p[i]->birth);
	}
	fclose(fp);
}