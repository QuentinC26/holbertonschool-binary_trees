#include "binary_trees.h"

/**
 * maximum - function that compare two integers
 * @return_left: the integer who will take the left side
 * @return_right: the integer who will take the right side
 * Return: return_left or return_right
 */

int maximum(int return_left, int return_right)
{
	if (return_left >= return_right)
	{
		return (return_left);
	}
	else
	{
	return (return_right);
	}
}

/**
 * height - function that count the height of binary tree
 * @tree: the binary tree
 * Return: height tree->left ou height tree->right
 */

int height(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}
	return (maximum(height(tree->left), height(tree->right)) + 1);
}

/**
 * binary_tree_height - function that count the height of binary tree
 * @tree: the binary tree
 * Return: height of the tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}
	return (height(tree));
}

/**
 * binary_tree_is_perfect - function that check the perfect binary tree
 * @tree: the binary tree
 * Return: perfect 1 or 0
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}
	if (height(tree->left) == height(tree->right))
	{
		return (1);
	}
	return (0);
}
