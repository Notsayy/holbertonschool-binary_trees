#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>

/** 
 * binary_tree_node - function that creates a binary tree node
 * 
 * @parent: pointer
 * @value: int
 * 
 * Return: new
*/

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
    binary_tree_t *new;
new = malloc(sizeof(binary_tree_t));
    if (new == NULL)
        return (NULL);

    if (parent == NULL) 
        return (NULL);

if (value < parent->n)
    {
        parent->right = binary_tree_insert_left(parent->right, value);
    }
return (new);
}
