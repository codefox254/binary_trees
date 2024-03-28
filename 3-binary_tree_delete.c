#include "binary_trees.h"

/**
 *  binary_tree_delete - Deletes an entire binary tree.
 * @tree: A pointer to the root node of the tree to delete.
 *
 * This function recursively deletes all nodes in the binary tree
 * starting from the given root node. Memory allocated for each node
 * is freed, and the tree is effectively destroyed.
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree != NULL)
	{
		binary_tree_delete(tree->left);
		binary_tree_delete(tree->right);
		free(tree);
	}
}
