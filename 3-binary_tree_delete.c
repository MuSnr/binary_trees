#include "binary_trees.h"
/**
 * binary_tree_delete - frees an entire tree in recursion to free the node
 * if the node left and right are NULL
 * @tree: tree to free
 * Return: NULL
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
	{
	return;
	}
	else
	{
	if (tree != NULL)
	{
	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);
	}
	free(tree);
	}

}
