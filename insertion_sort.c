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

List_ptr insertion_sort_linked_list(List_ptr list, Predicate predicate)
{
  Node_ptr p_walk = list->first;
  while (p_walk!=NULL)
  {
    Node_ptr prev = p_walk->prev;
    Bool has_swap = False;
    while (p_walk->prev!=NULL)
    {
      if (predicate(p_walk->element,p_walk->prev->element))
      {
        has_swap = True;
        swap_node(list,p_walk,p_walk->prev);
      } else break;
    }
    if (has_swap)
    {
      p_walk = prev;
    }
    p_walk= p_walk->next;
  }
  return list;
}