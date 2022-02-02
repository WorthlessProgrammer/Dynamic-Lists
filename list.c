#include <stdio.h>

#include "list.h"

#define INT_MAX_CAP 1024

void initializeIntList(INT_list* list, int max_size)
{
	list->size = max_size;
	list->length = 0;
	if (max_size <= INT_MAX_CAP){
		list->data = malloc(sizeof(int) * max_size);	
	} else{
		fprintf(stderr, "ERROR: Memory overflow, could not allocate > %d\n", INT_MAX_CAP);
	}
}

void appendInt(INT_list* list, int element)
{
	if (list->length < list->size) {
		list->data[list->length] = element;
		list->length++;
	} else {
		fprintf(stderr, "ERROR: list overflow, can't append more than %d elements\n", list -> size);
	}
		
}

void printIntList(INT_list* list)
{
	if (list->size > 0){
		printf("[%d", list->data[0]);
		for (int i = 1; i < list->length; i++)
		{
			printf(", %d", list->data[i]);
		}
		printf("]\n");

	} else if (list->size == 0) {
		printf("[ ]\n");
	} else{
		fprintf(stderr,"ERROR: Uninitialized List");
	}
}
