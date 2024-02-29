#include "binary_trees.h"
/**
 * binary_tree_height --> This Function measures the height of a binary tree
 * @tree: tree to use
 * Return: Height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height;
	size_t right_height;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		if (tree)
		{
		
		right_height = tree->right ? 1 + binary_tree_height(tree->right) : 0;
		left_height = tree->left ? 1 + binary_tree_height(tree->left) : 0;
		
		}
		return ((left_height > right_height) ? left_height : right_height);

	}
}
/**
 * binary_tree_depth --> The depth of specified node from root
 * @tree: The node to check the depth
 * Return: 0 is it is the root or number of depth
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree && tree->parent)
	{
		return (1 + binary_tree_depth(tree->parent));
	}
	else
	{
		return (0);
	}
}
/**
 * linked_node --> this function makes a linked list from depth level and node
 * @head: The pointer to head of linked list
 * @tree: Storing node
 * @level: The depth of node to store
 * Return: nothing
 */
void linked_node(link_t **head, const binary_tree_t *tree, size_t level)
{
	link_t *new, *aux;

	new = malloc(sizeof(link_t));
	if (new == NULL)
	{
		return;
	}
	new->n = level;
	new->node = tree;
	if (*head == NULL)
	{
		new->next = NULL;
		*head = new;
	}
	else
	{
		aux = *head;
		while (aux->next != NULL)
		{
			aux = aux->next;
		}
		new->next = NULL;
		aux->next = new;
	}
}
/**
 * recursion ---> This goes through the complete tree and each stores each node
 * in linked_node function
 * @head: The pointer to head of linked list
 * @tree: checked node
 * Return: Nothing by default it affects the pointer
 */
void recursion(link_t **head, const binary_tree_t *tree)
{
	size_t level = 0;

	if (tree != NULL)
	{
		linked_node(head, tree, level);
		level = binary_tree_depth(tree);
		recursion(head, tree->left);
		recursion(head, tree->right);
	}
}
/**
 * binary_tree_levelorder ---> This prints the nodes element in a lever-order
 * @tree: root 
 * @func: function to be used
 * Return: Nothing
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	link_t *head, *aux;
	size_t height = 0, count = 0;

	if (!tree || !func)
	{
		return;
	}
	else
	{
		height = binary_tree_height(tree);
		head = NULL;
		recursion(&head, tree);
		while (count <= height)
		{
			aux = head;
			while (aux != NULL)
			{
				if (count == aux->n)
				{
					func(aux->node->n);
				}
				aux = aux->next;
			}
			count++;
		}
		while (head != NULL)
		{
			aux = head;
			head = head->next;
			free(aux);
		}
	}
}
