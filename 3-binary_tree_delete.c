#include "binary_trees.h"

/**
 * binary_tree_delete - Supprime un arbre binaire entier
 * @tree: Pointeur vers la racine de l’arbre à supprimer
 *
 * Return: Rien
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;

	/* Supprimer les enfants gauche et droite récursivement */
	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);

	/* Libérer le nœud courant */
	free(tree);
}
