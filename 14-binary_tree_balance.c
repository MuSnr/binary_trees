#include "binary_trees.h"

/**
 * binary_tree_balance ---> It Measures the balance factor of a binary tree
 * @tree: tree to go use
 * Return: balanced factor of the binary tree
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int right_height = 0;
	int left_height = 0;

	if (tree == NULL)
	{
		return (0);
	}

	right_height = height(tree->left);
	left_height = height(tree->right);

	return (right_height - left_height);
}

/**
 * height --->It Measures the height of a binary tree
 * @tree: Pointer to the root node of the tree to measure the height
 * Return: The height of the tree, or 0 if the tree is NULL
 */

int height(const binary_tree_t *tree)
{
	int left_h = 0;
	int right_h = 0;

	if (tree == NULL)
	{
		return (0);
	}

	left_h = height(tree->left) + 1;
	right_h = height(tree->right) + 1;

	if (left_h > right_h)
	{
		return (left_h);
	}
	return (right_h);
}
