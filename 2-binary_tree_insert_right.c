#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts a node as the right child of another in a binary tree.
 * @parent: A pointer to the node to insert the right child into.
 * @value: The value to store in the new node.
 *
 * This function inserts a new node with the given value as the right child
 * of the specified parent node in a binary tree. If successful, it returns
 * a pointer to the newly created node; otherwise, it returns NULL.
 *
 * If the parent node already has a right child, the new node takes its place
 * and the old right child becomes the right child of the new node.
 *
 * Return: If successful, a pointer to the newly created node.
 *         Otherwise, NULL.
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);

	new = binary_tree_node(parent, value);
	if (new == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		new->right = parent->right;
		parent->right->parent = new;
	}
	parent->right = new;

	return (new);
}
