#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height
 * Return: If tree is NULL, your function must return 0
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	int leftDepth;
	int rightDepth;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (0);

	leftDepth = binary_tree_height(tree->left) + 1;
	rightDepth = binary_tree_height(tree->right) + 1;

	if (leftDepth > rightDepth)
		return (leftDepth);
	else
		return (rightDepth);
}
