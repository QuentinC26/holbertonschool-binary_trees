#include "binary_trees.h"

/**
 * binary_tree_depth - function that measures the depth of a node
 * @tree: the binary tree
 * Return: 1 (Error)
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t count = 0;

	if (tree == NULL)
	{
		return (0);
	}
	while (tree->parent)
	{
		count++;
		tree = tree->parent;
	}
	return (count);
}
