#include "binary_trees.h"

/**
 * binary_tree_is_leaf - check if has no children
 * @node: ptr to root of tree
 * Return: 0 if false, else 1
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->left == NULL && node->right == NULL)
		return (1);

	else
		return (0);
}
