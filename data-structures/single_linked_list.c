#include<stdio.h>
#include<malloc.h>
// global definition
struct node_t
{
  int var;
  struct node_t *next;
};

struct node_t *head =NULL;
//head = (struct node_t *)malloc(sizeof(struct node_t *));

struct node_t * create_list(int );

struct node_t * append_list(int);
struct node_t * delete_list(int);
struct node_t * insert_list(int);
void print_list(void);
int main ()
{
	// create a linked list
	//struct node_t * head_node = NULL;
	struct node_t * curr_node = NULL;

	head = create_list(8);
	print_list();
	//printf("head node var= %d\n",head->var);
	printf("length of the list= %d\n",length_list());
	// append a list
	curr_node = append_list(10);
	print_list();
	//printf("variable appended = %d\n",curr_node->var);
	printf("variable appended = %d\n",head->next->var);
	printf("length of the list= %d\n",length_list());

	// insert a list
	//curr_node = insert_list(9);
	print_list();

	printf("length of the list= %d\n",length_list());

	// delete a list



	return 1;
}

/* Function to print list */
void print_list(void)
{
	int c =0;
	struct node_t *ptr = NULL;
	ptr = head;
	while(NULL != ptr)
	{
		c++;
		printf("elemnt %d of list = %d\n",c,ptr->var);
		ptr = ptr->next;
	}

}
/* Function to create a linked list */
struct node_t * create_list(int vari)
{
  struct node_t *ptr = NULL;
  head = ptr;
  ptr = (struct node_t *) malloc(sizeof(struct node_t *));
  ptr ->var = vari;
  ptr->next = NULL;


return ptr;
}

/* Function  to return the length of the linked list*/

int length_list(void)
{
	int length = 0;
	struct node_t *ptr = NULL;
	ptr = head;


	while(NULL != ptr)
	{
		ptr = ptr->next;
		length ++;
	}

	return length;
}
/* Function to append a list*/
// Assumption: its adding at the end of the list
struct node_t *  append_list(int data)
{
	struct node_t *ptr = NULL;

	ptr = head;

	while (NULL != ptr)
	{
		ptr = ptr->next;
	}

head->next = (struct node_t *) malloc(sizeof(struct node_t *));
ptr = head->next;
  //ptr = (struct node_t *) malloc(sizeof(struct node_t *));
  ptr->var = data;
  ptr->next = NULL;
return ptr;
}

/*Function to insert into a list */
struct node_t * insert_list(int data)
{
	struct node_t *ptr ,*temp= NULL;

	ptr = head;
	while(NULL != ptr)
	{
		if (data > (ptr->var))
		{
			ptr= ptr->next;
		}
		else
		{
			temp = (struct node_t *)malloc(sizeof(struct node_t *));
			temp = ptr;
			ptr->var = data;
			ptr->next = temp;
			break;


		}


	}
return ptr;
}
