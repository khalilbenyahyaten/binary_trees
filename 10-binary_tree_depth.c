#include "binary_trees.h"
/**
 * binary_tree_depth - depth of a binary tree
 *
 *@tree: tree
 *
 *Return: depth
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
size_t i;
if (tree == NULL)
return (0);
while (tree->parent)
{
i++;
tree = tree->parent;
}
return (i);
}
