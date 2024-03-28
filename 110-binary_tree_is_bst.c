#include "binary_trees.h"
#include "limits.h"

/**
 * is_bst_helper - Verifies if a binary tree is a valid binary search tree.
 * @tree: A pointer to the root node of the tree to validate.
 * @lo: The value of the smallest visited node thus far.
 * @hi: The value of the largest visited node thus far.
 *
 * Return: 1 if the tree is a valid BST, 0 otherwise.
 */
int is_bst_helper(const binary_tree_t *tree, int lo, int hi)
{
	if (tree != NULL)
	{
		if (tree->n < lo || tree->n > hi)
			return (0);
		return (is_bst_helper(tree->left, lo, tree->n - 1) &&
			is_bst_helper(tree->right, tree->n + 1, hi));
	}
	return (1);
}

/**
 * binary_tree_is_bst - Determines if a binary tree is a valid binary search tree.
 * @tree: A pointer to the root node of the tree to examine.
 *
 * Return: 1 if the tree is a valid BST, 0 otherwise.
 */
int binary_tree_is_bst(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (is_bst_helper(tree, INT_MIN, INT_MAX));
}
