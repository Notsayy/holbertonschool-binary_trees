#include "binary_trees.h"
#include <stdio.h>

/** 
 * binary_tree_node - function that creates a binary tree node
 * 
 * @new: papa & maman
 * @value: valeur
 * 
 * Return: the return
*/

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
binary_tree_t *new = (binary_tree_t *)malloc(sizeof(binary_tree_t));
    if (new == NULL)
        perror("Memory allocation failed");
        exit(1);

    new->parent = value;
    new->left = NULL;
    new->right = NULL;
    return (new);
}
