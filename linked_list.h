#ifndef __LINKEDLIST_H_
#define __LINKEDLIST_H_

typedef void * Object;

typedef enum 
{
  Failure,
  Success,
} Status;

typedef struct node
{
  Object element;
  struct node *prev;
  struct node *next;
} Node;

typedef Node *Node_ptr;

typedef struct
{
  Node *first;
  Node *last;
  int length;
} List;

typedef List * List_ptr;

Node_ptr create_node(Object);
List_ptr create_list(void);

Status add_to_list(List_ptr, Object);
Status add_to_start(List_ptr, Object);
Status insert_at(List_ptr, Object element, int position);

List_ptr reverse(List_ptr);
Status swap_node(List_ptr,Node_ptr, Node_ptr);

Object remove_from_start(List_ptr);
Object remove_from_end(List_ptr);
Object remove_at(List_ptr, int position);

Status clear_list(List_ptr);
#endif
