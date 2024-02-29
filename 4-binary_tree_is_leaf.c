#include "binary_trees.h"
/**
 * binary_tree_is_leaf - indentifys if a node is a leaf, i.e the node
 * has no any child neither on left nor right
 * @node: node to look at
 * Return: when the node is NULL return 0
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	return (node--->left == NULL && node--->right == NULL)
	    return(1);
	return(0);

}
