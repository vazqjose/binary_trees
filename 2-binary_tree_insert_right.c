#include "binary_trees.h"
/**
 * binary_tree_insert_right - inserts a node as the right-child of
 * another node
 * @parent: parent node to insert at
 * @value: value to insert
 * Return: a pointer to the created node, or NULL on failure or
 * if parent is NULL
 **/

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *tmpNode;
	binary_tree_t *newNode;

	if (parent == NULL)
		return (NULL);

	newNode = malloc(sizeof(binary_tree_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = value;
	newNode->left = NULL;
	newNode->right = NULL;
	newNode->parent = parent;

	if (parent->right == NULL)
		parent->right = newNode;
	else
	{
		tmpNode = parent->right;
		parent->right = newNode;
		newNode->right = tmpNode;
		tmpNode->parent = newNode;
	}

	return (newNode);
}
