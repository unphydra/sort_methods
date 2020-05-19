#include "sort.h"

Array_ptr insertion_sort(Array_ptr list, Predicate predicate)
{
  for (size_t i = 1; i < list->length; i++)
  {
    for (size_t j = i; j > 0 ; j--)
    {
      if (predicate(list->elements[j],list->elements[j-1]))
      {
        Object temp = list->elements[j];
        list->elements[j] = list->elements[j-1];
        list->elements[j-1] = temp;
      }
    }
  }
  return list;
}