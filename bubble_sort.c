#include "sort.h"

Array_ptr bubble_sort(Array_ptr list, Predicate predicate)
{
  while(True)
  {
    Bool has_swap = False;
    for (size_t j = 0; j < list->length-1; j++)
    {
      if (predicate(list->elements[j+1],list->elements[j]))
      {
        has_swap = True;
        Object temp = list->elements[j];
        list->elements[j] = list->elements[j+1];
        list->elements[j+1] = temp;
      }
    }
    if (has_swap==False)
    {
      return list;
    }
  }
}