#include "binary_trees.h"

/**
 * array_to_avl - Builds an AVL tree from an array.
 * @array: A pointer to the first element of the array to be converted.
 * @size: The number of elements in @array.
 *
 * Return: A pointer to the root node of the created AVL, or NULL upon failure.
 */
avl_t *array_to_avl(int *array, size_t size)
{
	avl_t *tree = NULL;
	size_t i;

	if (array == NULL || size == 0)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		if (avl_insert(&tree, array[i]) == NULL)
		{
			/* Clean up in case of insertion failure */
			while (tree != NULL)
			{
				avl_t *tmp = tree;
				tree = avl_remove(tree, tmp->n);
				free(tmp);
			}
			return (NULL);
		}
	}

	return (tree);
}
