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
		return (tree->parent != NULL);

	leftDepth = binary_tree_height(tree->left) + 1;
	rightDepth = binary_tree_height(tree->right) + 1;

	if (leftDepth > rightDepth)
		return (leftDepth);
	else
		return (rightDepth);
}

/**
 * binary_tree_is_perfect - function that checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 * Return: If tree is NULL, your function must return 0
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int lHeight, rHeight;

	if (tree == NULL)
		return (0);

	lHeight = binary_tree_height(tree->left);
	rHeight = binary_tree_height(tree->right);

	if (lHeight == rHeight)
		return (1);
	else
		return (0);



}
