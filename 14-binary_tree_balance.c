#include "binary_trees.h"

/**
 * binary_tree_balance - function that measures the
 * balance factor of a binary tree
 * @tree: pointer to the root node of the tree to
 * measure the balance factor
 * Return: If tree is NULL, return 0
 */

 int binary_tree_balance(const binary_tree_t *tree)
{
	int lHeight;
	int rHeight;

	if (tree == NULL)
		return (0);
	
	lHeight = binary_tree_balance(tree->left) + 1;
	rHeight = binary_tree_balance(tree->right) + 1;

	return (abs(rHeight - lHeight));
	/*
	if (abs(rHeight - lHeight) > 0 && binary_tree_balance(tree->left)
			&& binary_tree_balance(tree->right))
		return (abs(rHeight - lHeight));
	*/
	return (0);

}
