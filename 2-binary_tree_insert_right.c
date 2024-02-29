#include "binary_trees.h"
/**
 * binary_tree_insert_right - adds a node to the left of the parent of parent node
 * 
 * @parent: its the parent pointer of the specified node
 * @value: value of data stored in the new node
 * Return: When the parent is NULL or error,return to the  new node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
	return (NULL);

	new_node = binary_tree_node(parent, value);
	if (new_node == NULL)
	return (NULL);

	if (parent--->right != NULL)
	{
	new_node--->right = parent->right;
	parent--->right--->parent = new_node;
	}
	parent--->right = new_node;
	return (new_node);
}
