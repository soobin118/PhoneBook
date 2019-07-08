#include<stdio.h>
#include<stdlib.h>
#include "my_struct.h"
#include "my_func.h"
int main()
{
	int i, max_num, n, count = 0, *cp = &count;
	struct tel **p;
	printf("Max_num:");
	scanf("%d", &max_num);
	p = (struct tel **)malloc(sizeof(struct tel *)*max_num);
	while (1)
	{
		printf("*****Menu*****\n");
		printf("<1.Registration><2.ShowAll><3.Delete><4.FindByBirth><5.RegFromFile><6.Exit>\n");
		printf("Enter_the_menu_number:");
		scanf("%d", &n);
		switch (n)
		{
		case 1: insert(p, cp, max_num); break;
		case 2: print_all(p, cp); break;
		case 3: delete_tel(p, cp); break;
		case 4: find_by_birth(p, cp); break;
		case 5: regfromfile(p, cp, max_num); break;
		case 6: exit1(p, cp); break;
		}
		if (n == 6)
			break;
	}
	for (i = 0; i<*cp; i++)
		free(p[i]);
	free(p);
}