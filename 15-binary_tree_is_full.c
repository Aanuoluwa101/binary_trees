#include "binary_trees.h"

/**
 * binary_tree_is_full - chekcs if a binary tree is full
 * @tree: pointer to the root node of the tree to check
 *
 * Return: 1 if tree is full, 0 otherwise or if tree is NULL
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int count;

	count = 0;
	if ((tree->left == NULL) & (tree->right == NULL))
		return (0);
	if (tree->right == NULL)
		count++;
	else
		count = count + binary_tree_is_full(tree->right);
	if (tree->left == NULL)
		count++;
	else
		count = count + binary_tree_is_full(tree->left);

	if (count == 0)
		return (1);
	else
		return (0);
}
