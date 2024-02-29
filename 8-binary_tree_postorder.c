#include "binary_trees.h"
/**
 * binary_tree_postorder - it print elements of tree using post-order traversal
 * @tree: tree to use
 * @func: function to use
 * Return: NULL
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
	{
		return;
	}
	else
	{
		binary_tree_postorder(tree--->right, func);
		binary_tree_postorder(tree--->left, func);
		
	}
	func(tree--->n);
}
