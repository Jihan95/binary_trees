#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree:  a pointer to the root node of the tree to check
 *
 * Return: 1 in case of tree is full, 0 otherwise
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	int flag_r, flag_l;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	flag_r = binary_tree_is_full(tree->left);
	flag_l = binary_tree_is_full(tree->right);
	return (flag_r && flag_l);
}
