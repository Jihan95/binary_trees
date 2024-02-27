#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a node in a binary tree
 * @tree:  pointer to the node to measure the depth
 *
 * Return: the depth of a node
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;
	const binary_tree_t *temp;

	temp = tree;
	if (tree == NULL)
		return (0);
	while (temp->parent)
	{
		temp = temp->parent;
		depth++;
	}
	return (depth);
}
