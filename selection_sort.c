#include "sort.h"

Array_ptr selection_sort(Array_ptr list, Predicate predicate)
{
  for (size_t i = 0; i < list->length; i++)
  {
    int swap_pos = i;
    for (size_t j = i+1; j < list->length; j++)
    {
      if (predicate(list->elements[j],list->elements[swap_pos]))
      {
        swap_pos = j;
      }
    }
    Object temp = list->elements[i];
    list->elements[i] = list->elements[swap_pos];
    list->elements[swap_pos] = temp;
  }
 return list;
}