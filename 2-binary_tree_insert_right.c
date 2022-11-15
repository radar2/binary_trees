#include "binary_trees.h"

/**
 * binary_tree_insert_right -  function that inserts a node as the right-c
 * @parent: a pointer to the node to insert the right-child in
 * @value: the value to store in the new node
 * Return: return a pointer to the created node, or NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	if (parent == NULL)
		return (NULL);

	node = malloc(sizeof(binary_tree_t));

	if (node == NULL)
		return (NULL);

	node->n = value;

	if (parent->right != NULL)
		parent->right->parent = node;

	node->right = parent->right;
	node->left = NULL;
	parent->right = node;

	return (node);
}
