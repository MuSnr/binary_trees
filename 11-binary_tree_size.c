#include "binary_trees.h"
/**
 * binary_tree_size ---> the function that return the size of a tree
 * @tree: tree to use
 * Return: the size of the tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}
	return (1 + binary_tree_size(tree->right) + binary_tree_size(tree->left));
}
