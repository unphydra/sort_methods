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

List_ptr bubble_sort_linked_list(List_ptr list, Predicate predicate)
{
  while (True)
  {
    Node_ptr p_walk = list->first;
    Bool has_swap = False;
    while (p_walk != NULL && p_walk->next != NULL)
    {
      if (predicate(p_walk->next->element,p_walk->element))
      {
        has_swap = True;
        swap_node(list,p_walk,p_walk->next);
      } else
      {
      p_walk = p_walk->next;
      }
    }
    if (has_swap==False)
    {
      return list;
    }
  }
}