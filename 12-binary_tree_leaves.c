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
 * binary_tree_leaves - counts the leaves in a binary tree
 * @tree: pointer to the root node of the tree to count the number of leaves
 *
 * Return: number of leaves in tree or 0 if tree is NULL
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t right;
	size_t left;

	left = 0;
	right = 0;
	if (tree == NULL)
		return (0);

	if (binary_tree_is_leaf(tree->right))
		right = 1;
	else
		right = binary_tree_leaves(tree->right);

	if (binary_tree_is_leaf(tree->left))
		left = 1;
	else
		left = binary_tree_leaves(tree->left);

	if (binary_tree_is_leaf(tree))
		return (right + left + 1);
	else
		return (right + left);
}

