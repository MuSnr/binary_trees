#include "binary_trees.h"
/**
 * binary_tree_leaves ---> the function that returns the number of leaves in a tree
 * @tree: tree to use
 * Return: No. of leaves
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}

	if (tree->right == NULL && tree->left == NULL)
	{
		return (1);
	}

	return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}
