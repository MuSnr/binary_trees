#include "binary_trees.h"

/**
 * binary_tree_height - This Function measures the height of a binary tree
 * @tree: tree to use
 * Return: the height of the binary tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t c = 0;
	size_t d = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		if (tree)
		{
			c = tree->left ? 1 + binary_tree_height(tree->left) : 0;
			d = tree->right ? 1 + binary_tree_height(tree->right) : 0;
		}
		return ((c > d) ? c : d);
	}
}
