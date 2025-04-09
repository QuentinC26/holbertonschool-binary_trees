#include "binary_trees.h"

/**
 * binary_tree_is_root - function for check the root
 * @node: Pointer to the check the node
 *
 * Return: 0 or 1
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
	{
		return (0);
	}
	if (node->parent == NULL)
	{
		return (1);
	}
	return (0);
}
