#include <stdio.h>

#include "list.h"

int main()
{
	INT_list first_list;
	initializeIntList(&first_list, 8);
	for (int i = 1; i < 9; i++) {
		appendInt(&first_list, -i);
	}
	printIntList(&first_list);
	return 0;
}



