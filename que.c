#include "binary_trees.h"

typedef struct queue_node
{
	binary_tree_t *tree_node;
	struct node *next;
}node;

node *new_node(binary_tree_t *tree_node)
{
	node *new_node;

	node = malloc(sizeof(node));
	if (node == NULL)
		exit(EXIT_FAILURE);
	node->tree_node = tree_node;
	node->next = NULL;
	return node;
}

int is_empty(node *front)
{
	if (front == NULL)
		return 1;
	else
		return 0;
}

void enque(node *node)
{
	if (is_empty())
	{
		front = node;
		rear = node;
	}
	else
	{
		rear->next = node;
		rear = node;
	}
}

void deque(node *front)
{
	node *temp;

	temp = front;
	front = front->next;
	free(temp);
}

binary_tree_t *Front(node *front)
{
	return front->tree_node;
}







