#include "binary_trees.h"
/**
 * array_to_bst ---> This turns an array to a BST tree
 * @array: The array that turns to BST tree
 * @size: The size of array
 * Return: BST tree from array
 */
bst_t *array_to_bst(int *array, size_t size)
{
	size_t a = 0;
	bst_t *root = NULL;

	if (array == NULL || size == 0)
	{
		return (NULL);
	}


	for (a = 0; a < size; a++)
	{
		bst_insert(&root, array[a]);
	}

	return (root);
}
