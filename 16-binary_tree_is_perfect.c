#include "binary_trees.h"

/**
 * binary_tree_is_perfect - chekcs if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 *
 * Return: 1 if tree is perfect, 0 otherwise or if tree is NULL
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int count;

	count = 0;
	if ((tree == NULL) || (func == NULL))
		return (0);

	if (binary_tree_sibling(tree->left) == NULL)
		count++;

	if (tree->left != NULL)
		count = count + binary_tree_is_perfect(tree->left);
	if (tree->right != NULL)
		count = count + binary_tree_is_perfect(tree->right);
	if (count == 0)
		return (1);
	else
		return (0);
}
