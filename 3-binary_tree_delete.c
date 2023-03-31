#include "binary_trees.h"

/**
 * binary_tree_is_leaf - checks if a node is a leaf
 *@node: pointer to the node to check
 *
 * Return: 1 if node is a leaf, 0 if otherwis or node is NULL
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	else if ((node->right == NULL) & (node->left == NULL))
		return (1);
	else
		return (0);
}

/**
 * binary_tree_delete - deletes an entire binary tree
 * @tree: a pointer to the root node of the tree to delete
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;
	if (binary_tree_is_leaf(tree->left))
		free(tree->left);
	else
		binary_tree_delete(tree->left);

	if (binary_tree_is_leaf(tree->right))
		free(tree->right);
	else
		binary_tree_delete(tree->right);
	free(tree);
}
