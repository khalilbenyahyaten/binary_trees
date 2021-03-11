#include "binary_trees.h"
/**
 * binary_tree_size - size of a binary tree
 *
 *@tree: tree
 *
 *Return: size
 *
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
size_t i = 0;
if (tree == NULL)
return (0);
i++;
i += binary_tree_size(tree->left);
i += binary_tree_size(tree->right);
return (i);
}
