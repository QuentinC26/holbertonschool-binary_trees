#include "binary_trees.h"

/**
 * binary_tree_height - Mesure la hauteur d’un arbre binaire
 * @tree: pointeur vers le nœud racine de l’arbre
 * Return: Hauteur de l’arbre ou 0 si arbre est NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_h = 0, right_h = 0;

	if (!tree)
		return (0);

	if (tree->left)
		left_h = 1 + binary_tree_height(tree->left);
	if (tree->right)
		right_h = 1 + binary_tree_height(tree->right);

	return (left_h > right_h ? left_h : right_h);
}
