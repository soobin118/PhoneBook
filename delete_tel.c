#include<stdio.h>
#include<string.h>
#include "my_struct.h"
#include "my_func.h"
void delete_tel(struct tel *p[], int *cp)
{
	char n[101];
	int i, k;
	if (*cp == 0)
	{
		printf("NO MEMBER\n");
		return;
	}
	printf("Name:");
	scanf("%s", n);
	for (i = 0; i<*cp; i++)
	{
		if (strcmp(n, p[i]->name) == 0)
			k = i;
	}
	for (i = k; i<*cp; i++)
	{
		p[i] = p[i + 1];
	}
	(*cp)--;
	return;
}
