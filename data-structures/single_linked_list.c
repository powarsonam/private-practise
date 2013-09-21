#include<stdio.h>
// global definition
struct node_t
{
  int var;
  struct node_t *next;
}node;

node * create_list(int );
node * append_list(int);
node * delete_list(int);
node * insert_list(int);

int main ()
{
// create a linked list
node * head_node = NULL;

head_node = create_list(8);

// append a list

// delete a list

// insert a list


return 1;
}

/* Function to create a linked list */
node * create_list(int vari)
{
  node *ptr = NULL;
  ptr = (node *) malloc(sizeof(node *));
  ptr ->var = vari;
  ptr->next = NULL;


return ptr;
}
