#include<stdio.h>
#include<malloc.h>
// global definition
struct node_t
{
  int var;
  struct node_t *next;
};

struct node_t node;
struct node_t * create_list(int );
/*
node * append_list(int);
node * delete_list(int);
node * insert_list(int);
*/
int main ()
{
// create a linked list
struct node_t * head_node = NULL;

head_node = create_list(8);

printf(" head node var= %d\n",head_node->var);
// append a list

// delete a list

// insert a list


return 1;
}

/* Function to create a linked list */
struct node_t * create_list(int vari)
{
  struct node_t *ptr = NULL;
  ptr = (struct node_t *) malloc(sizeof(struct node_t *));
  ptr ->var = vari;
  ptr->next = NULL;


return ptr;
}
