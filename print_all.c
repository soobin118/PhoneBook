#include<stdio.h>
#include "my_struct.h"
#include "my_func.h"
void print_all(struct tel *p[], int *cp)
{
	int i;
	for (i = 0; i<*cp; i++)
	{
		printf("%s %s %s\n", p[i]->name, p[i]->tel_no, p[i]->birth);
	}
}