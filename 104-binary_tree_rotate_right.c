#include "binary_trees.h"

/**
 * binary_tree_rotate_right --> The Function that  rotates right the binary tree.
 * @tree: The root node of the three
 * Return: Pointer node of the new node
 */
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *a;

	if (tree == NULL || tree->left == NULL)
	{
		return (tree);
	}
	a = tree->left;
	tree->left = a->right;
	if (a->right != NULL)
	{
		a->right->parent = tree;
	}
	a->parent = tree->parent;
	if (tree->parent != NULL)
	{
		if (tree->parent->left == tree)
		{
			tree->parent->left = a;
		}
		else
		{
			tree->parent->right = a;
		}
	}
	a->right = tree;
	tree->parent = a;
	return (a);
}
