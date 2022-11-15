#include "binary_trees.h"

/**
 * binary_tree_insert_left - a function that inserts a node as the left-child
 * @parent: a pointer to the node to insert the left-child in
 * @value: the value to store in the new node
 * Return: return a pointer to the created node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *temp;

	temp = malloc(siezof(binary_tree_t));
	if (temp == NULL)
		return (NULL);

	if (parent == NULL)
		return (NULL);

	temp = binary_tree_node(parent, value);

	if (parent->left != NULL)
	{
		parent->left->parent = temp;
		temp->left = parent->left;
	}

	parent->left = temp;

	return (temp);
}
