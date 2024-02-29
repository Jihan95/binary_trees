#include "binary_trees.h"

/**
 * binary_tree_is_perfect -  checks if a binary tree is perfect
 * @tree: a pointer to the root node of the tree to check
 *
 * Return: 1 in case of perfect, 0 otherwise
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t h_l, h_r;
	int flag_l, flag_r;

	if (tree == NULL)
		return (0);
	h_l = binary_tree_height(tree->left);
	h_r = binary_tree_height(tree->right);
	if (h_l == h_r)
	{
		if (tree->left == NULL && tree->right == NULL)
		return (1); }
	if (tree->left == NULL || tree->right == NULL || h_l != h_r)
		return (0);
	flag_l = binary_tree_is_perfect(tree->left);
	flag_r = binary_tree_is_perfect(tree->right);
	return (flag_l && flag_r);
}

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: a pointer to the root node of the tree to measure the height.
 *
 * Return: the height of the tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_h, right_h;

	if (tree == NULL)
		return (0);
	if (tree->left)
		left_h = binary_tree_height(tree->left) + 1;
	else
		left_h = 0;
	if (tree->right)
		right_h = binary_tree_height(tree->right) + 1;
	else
		right_h = 0;
	if (left_h > right_h)
		return (left_h);
	return (right_h);
}
