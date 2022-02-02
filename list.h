#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#ifndef LIST_H
#define LIST_H

/** DESCRIPTION:
 *	This header file <list.h> implements python-like lists and   
 *	it's functions. 
 *	IMPORTANT: Only as long as the datatype is heterogenous. 
 *	The data is stored in an array.
 *
 *
 *
 *
 *
 *
 *
 */

typedef struct{
	int size;
	int length;
	int *data;
} INT_list;

void initializeIntList(INT_list* list, int max_size);
void appendInt(INT_list* list, int element);
void printIntList(INT_list* list);

#endif



