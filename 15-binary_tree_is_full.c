#include "binary_trees.h"

/**
 * binary_tree_is_full - function that checks if a binary tree is full
 * @tree: pointer to the root node of the tree to check
 * Return: If tree is NULL, your function must return 0
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->right == NULL && tree->left == NULL)
		return (1);

	full = binary_tree_is_full(tree->right);
	
	if (full == 0)
		return (0);
	
	full = binary_tree_is_full(tree->left);
	
	if (full == 0)
		return (0);

	return (1);
}
