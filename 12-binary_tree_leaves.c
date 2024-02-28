#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the leaves
 * @tree: a pointer to the root node of the tree to count the number of leaves
 *
 * Return: the number of the leaves
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t count = 0;

	if (tree == NULL)
		return (0);
	if (tree->left)
		count += binary_tree_leaves(tree->left);
	if (tree->right)
		count += binary_tree_leaves(tree->right);
	if (tree->left == NULL && tree->right == NULL)
		return (count + 1);
	else
		return (count);
}
