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

List_ptr selection_sort_linked_list(List_ptr list, Predicate predicate)
{
  Node_ptr p_walk = list->first;
  while (p_walk!= NULL)
  {
    Node_ptr p_walk_next = p_walk->next;
    Node_ptr node_to_swap = p_walk;
    while (p_walk_next!=NULL)
    {
      if (predicate(p_walk_next->element,node_to_swap->element))
      {
        node_to_swap = p_walk_next;
      }
      p_walk_next = p_walk_next->next;
    }
    swap_node(list,p_walk,node_to_swap);
    p_walk = node_to_swap->next;
  }
  return list;
}