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
binary_tree_t *node;

if (!parent)
return (NULL);
node = malloc(sizeof(binary_tree_t));
if (!node)
return (NULL);
node->left = parent->left;
if (parent->left)
parent->left->parent = node;
node->parent = parent;
node->left = node;
node->right = NULL;
node->n = value;
return (node);
}
