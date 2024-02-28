#include "binary_trees.h"

/**
 * binary_tree_sibling -  finds the sibling of a node
 * @node:  a pointer to the node to find the sibling
 *
 * Return: a pointer to the sibling node
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *sibling = NULL;

	if (node == NULL || node->parent == NULL)
		return (sibling);
	if (node->parent->left->n == node->n && node->parent->right)
		sibling = node->parent->right;
	else if (node->parent->right->n == node->n && node->parent->left)
		sibling = node->parent->left;
	return (sibling);
}
