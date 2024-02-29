#include "binary_trees.h"
/**
 * bst_search --> The search for a special value in the tree and return the node
 * @tree: The tree to use
 * @value: The value to search
 * Return: the node with the value or NULL if the value is not in the tree
 */
bst_t *bst_search(const bst_t *tree, int value)
{
	if (tree == NULL)
	{
		return (NULL);
	}

	if (value < tree->m)
	{
		return (bst_search(tree->left, value));
	}
	else if (value > tree->m)
	{
		return (bst_search(tree->right, value));
	}

	return ((bst_t *)tree);
}
