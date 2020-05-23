#ifndef __SORT_H_
#define __SORT_H_

#include <stdio.h>
#include <stdlib.h>

typedef void * Object;

#include "linked_list.h"

typedef struct
{
  Object * elements;
  int length;
} Array;
typedef Array * Array_ptr;

typedef enum {
  False,
  True
} Bool;

typedef Bool(*Predicate)(Object,Object);

Array_ptr selection_sort(Array_ptr,Predicate);
Array_ptr bubble_sort(Array_ptr, Predicate);
Array_ptr insertion_sort(Array_ptr, Predicate);

List_ptr selection_sort_linked_list(List_ptr, Predicate);
List_ptr bubble_sort_linked_list(List_ptr, Predicate);
#endif