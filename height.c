#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the node of the tree to measure the height
 *
 * Returns: the height of the tree or 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_right;
	size_t height_left;

	if (tree == NULL)
		return -1;

	height_right = binary_tree_height(tree->right);
	height_left = binary_tree_height(tree->left);
	if (height_right > height_left)
		return height_right;
	else
		return height_left;
}
