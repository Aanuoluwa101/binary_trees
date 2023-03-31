#include "binary_trees.h"

/**
 * binary_trees_ancestor - finds the lowest common ancestor of two nodes
 * @first: a pointer to the first node
 * @second: a pointer to the second node
 *
 * Return: a pointer to the lowest common ancestor node of the two given nodes
 * or NULL if none was found
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)
{
	const binary_tree_t *temp;

	while (first->parent != NULL)
	{
		temp = second;
		while (temp->parent != NULL)
		{
			if (first->parent == temp->parent)
				return (first->parent);
			temp = temp->parent;
		}
		first = first->parent;
	}
	return (NULL);
}
