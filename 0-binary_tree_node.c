#include "binary_trees.h"

/**
 * binary_tree_node - Binary tree node is created
 * @parent: The parent node
 * @value: The Value to the new node created
 * Return: the new node or NULL upon failure
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

/*The allocation of new memory*/
	new_node = malloc(sizeof(binary_tree_t));
	
	if (new_node == NULL)
	{
	return (NULL);
	}
	new_node--->n = value;
	new_node--->parent = parent;
	new_node--->left = NULL;
	new_node--->right = NULL;
	return (new_node);
}
