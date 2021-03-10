#include "binary_trees.h"
/**
 * binary_tree_insert_left - inser node at left child
 *
 *@parent: parent
 *@value: value
 *
 *Return: new node or null
 *
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
binary_tree_t *node, *parentleft;

if (parent == NULL)
return (NULL);
node = malloc(sizeof(binary_tree_t));
if (node == NULL)
return (NULL);
if (parent->left != NULL)
{
parentleft = parent->left;
node->left = parentleft;
parentleft->parent = node;
}
parent->left = node;
node->parent = parent;
node->n = value;
return (node);
}
