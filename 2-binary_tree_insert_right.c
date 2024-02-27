#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the right-child of another node
 * @parent:  a pointer to the node to insert the right-child in
 * @value: the value to store in the new node
 *
 * Return: pointer to the created node, or NULL on failure or if parent is NULL
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
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
	if (parent->right == NULL)
		parent->right = node;
	else
	{
		temp = parent->right;
		parent->right = node;
		node->right = temp;
		temp->parent = node;
	}
	node->parent = parent;
	return (node);
}
