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
 * binary_tree_nodes -  counts the nodes with at least 1 child in a binary tree
 * @tree: a pointer to the root node of the tree to count the number of nodes
 *
 * Return: number of nodes in tree with at least one child
 * or 0 if tree is NULL
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t right;
	size_t left;

	right = 0;
	left = 0;
	if (tree == NULL)
		return (0);

	if (!binary_tree_is_leaf(tree->right))
		right = binary_tree_nodes(tree->right);
	else
		right = 0;
	if (!binary_tree_is_leaf(tree->left))
		left = binary_tree_nodes(tree->left);
	else
		left  = 0;

	if (!binary_tree_is_leaf(tree))
		return (right + left + 1);
	else
		return (right + left);
}

