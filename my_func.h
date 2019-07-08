#ifndef MY_FUNC_H
#define MY_FUNC_H
void insert(struct tel *p[], int *cp, int max_num);
void delete_tel(struct tel *p[], int *cp);
void find_by_birth(struct tel *p[], int *cp);
void print_all(struct tel *p[], int *cp);
void exit1(struct tel *p[], int *cp);
void regfromfile(struct tel *p[], int *cp, int max_num);
#endif