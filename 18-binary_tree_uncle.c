#include "binary_trees.h"

/**
 * binary_tree_uncle - finds the uncle of a node
 * @node: a pointer to the node to find the uncle
 *
 * Return: a pointer to the uncle node
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *grand = node->parent->parent;

	if (node == NULL || node->parent == NULL)
		return (NULL);
	if (grand)
	{
		if (node->parent == grand->left)
			return (grand->right);
		if (node->parent == grand->right)
			return (grand->left);
	}
	return (NULL);
}
