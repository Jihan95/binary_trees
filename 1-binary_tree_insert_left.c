#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left-child of another node
 * @parent: a pointer to the node to insert the left-child in
 * @value: the value to store in the new node
 *
 * Return: a pointer to the created node, or NULL on failure or parent is NULL
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node, *temp;

	if (parent == NULL)
		return (NULL);
	node = (binary_tree_t *)malloc(sizeof(binary_tree_t));
	if (node == NULL)
		return (NULL);
	node->n = value;
	node->left = NULL;
	node->right = NULL;
	if (parent->left == NULL)
		parent->left = node;
	else
	{
		temp = parent->left;
		parent->left = node;
		node->left = temp;
		temp->parent = node;
	}
	node->parent = parent;
	return (node);
}
