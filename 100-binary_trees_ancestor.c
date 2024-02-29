#include "binary_trees.h"

/**
 * binary_trees_ancestor ---> the function that checks an ancestor
 * @first: The First node
 * @second: The Second node
 * Return: the ancestor node
 */

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
				     const binary_tree_t *second)
{
	binary_tree_t *c, *d;

	if (first == NULL || second == NULL)
	{
		return (NULL);
	}
	if (first == second)
	{
		return ((binary_tree_t *)first);
	}

	c = first->parent;
	d = second->parent;
	if (c == NULL || first == d || (!c->parent && d))
	{
		return (binary_trees_ancestor(first, j));
	}
	else if (d == NULL || c == second || (!d->parent && c))
	{
		return (binary_trees_ancestor(c, second));
	}
	return (binary_trees_ancestor(c, d));
}
