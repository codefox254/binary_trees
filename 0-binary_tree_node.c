#include "binary_trees.h"

/**
 * binary_tree_node - Creates a new node for a binary tree.
 * @parent: A pointer to the parent node of the new node.
 * @value: The value to be stored in the new node.
 *
 * This function creates a new binary tree node with the given value and
 * parent node. If successful, it returns a pointer to the newly created node;
 * otherwise, it returns NULL.
 * Return: If successful, a pointer to the newly created node.
 *         Otherwise, NULL.
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);

	new->n = value;
	new->parent = parent;
	new->left = NULL;
	new->right = NULL;

	return (new);
}
