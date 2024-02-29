#include "binary_trees.h"

/**
 * binary_tree_rotate_left ---> The Function that  rotates left the binary tree.
 * @tree: The root node to the three
 * Return: Pointer node to the new node
 */
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *a;

	if (tree == NULL || tree->right == NULL)
	{
		return (NULL);
	}
	a = tree->right;
	tree->right = a->left;
	if (a->left != NULL)
	{
		a->left->parent = tree;
	}
	a->parent = tree->parent;
	if (tree->parent != NULL)
	{
		if (tree->parent->left == tree)
		{
			tree->parent->left = a;
		}
	}

	a->left = tree;
	tree->parent = a;
	return (a);
}
