#include "binary_trees.h"

/**
 * binary_tree_is_root - The function checks whetehr a node is a root
 * @node: The node to check
 * Return: Return 0 if it is a root,1 if it is a root
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL || node->parent != NULL)
		return (0);
	return (1);
}
