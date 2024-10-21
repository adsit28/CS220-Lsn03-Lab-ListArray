#ifndef LISTADT_H
#define LISTADT_H
#define MAX 250

typedef struct ListADTArray_struct {
	int items[MAX];
	int size;
} ListADTArray;

ListADTArray createList();

int append(ListADTArray* L, int X);

int prepend(ListADTArray* L, int X);

int insertAfter(ListADTArray* L, int W, int X);

int removeItem(ListADTArray* L, int X);

int linearSearch(ListADTArray L, int X);

int binarySearch(ListADTArray L, int X);

int isEmpty(ListADTArray L);

int getLength(ListADTArray L);

void print(ListADTArray L);

void printReverse(ListADTArray L);

void sort(ListADTArray* L);

#endif // listADT_H