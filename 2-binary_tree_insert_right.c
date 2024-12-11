#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * binary_tree_insert_right - function that inserts a node as
 * the right-child of another node
 *
 * @parent: pointer
 * @value: int
 *
 * Return: new
*/

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;
new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);

	if (parent == NULL)
		return (binary_tree_node(parent, value));

	if (value > parent->n)
	{
		parent->right = binary_tree_insert_right(parent->right, value);
	}
return (new);
}
