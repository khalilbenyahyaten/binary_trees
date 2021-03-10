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
if (parent == NULL)
return (NULL);
node = binary_tree_node(parent, value);
if (node == NULL)
return (NULL);
node->right = parent->right;
if (node->right != NULL)
node->right->parent = node;
parent->right = node;
return (node);
}