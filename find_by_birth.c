#include<stdio.h>
#include "my_struct.h"
#include "my_func.h"
void find_by_birth(struct tel *p[], int *cp)
{
	int i, month;
	printf("Birth:");
	scanf("%d", &month);
	for (i = 0; i<*cp; i++)
	{
		if (month<10)
		{
			if (month + '0' == p[i]->birth[5])
				printf("%s %s %s\n", p[i]->name, p[i]->tel_no, p[i]->birth);
		}
		else
		{
			if ((month % 10) + '0' == p[i]->birth[5] && (month / 10) + '0' == p[i]->birth[4])
				printf("%s %s %s\n", p[i]->name, p[i]->tel_no, p[i]->birth);
		}
	}
}