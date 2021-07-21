#include "binary_trees.h"
#include <stdio.h>
/**
 * binary_tree_node - function that creates a binary tree node
 * @value: value to insert
 * @parent: parent node to insert in
 * Return: a pointer to the new node, or NULL on failure
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *tmpNode;

	tmpNode = malloc(sizeof(binary_tree_t));
	if (tmpNode == NULL)
		return (NULL);

	tmpNode->n = value;
	tmpNode->left = NULL;
	tmpNode->right = NULL;
	tmpNode->parent = parent;

	return (tmpNode);
}
