
# Projet Arbres Binaires

## Description

Le projet "Arbres Binaires" vise à implémenter et à explorer les structures d'arbres binaires. Un arbre binaire est une structure de données où chaque nœud a au plus deux enfants, appelés "gauche" et "droit". Ce projet contient diverses fonctions pour manipuler et analyser des arbres binaires, y compris la mesure de la hauteur, la profondeur, la taille, l'équilibre et la vérification de certaines propriétés des arbres binaires.

## Goals

### Les objectifs du projet sont les suivants :

- Comprendre les structures d'arbres binaires.

- Implémenter diverses fonctions pour manipuler les arbres binaires, comme l’insertion, la suppression, la traversée, etc.

- Respecter les bonnes pratiques de codage en C et suivre le style de codage Betty.

- Manipuler les arbres de manière optimale, notamment pour les calculs de hauteur, de profondeur, de taille, etc.


## Tasks and Implementations

### 0. **Tâche 0 : Créer un nouveau nœud**
   - Implémente une fonction qui crée un nouveau nœud dans un arbre binaire.
   - Cette fonction doit allouer de la mémoire pour un nouveau nœud, définir sa valeur et ses pointeurs gauche et droit à `NULL`.
   - **Fichier :** `0-new_node.c`

### 1. **Tâche 1 : Insérer un nœud à gauche**
   - Implémente une fonction qui insère un nouveau nœud à gauche d'un nœud donné dans un arbre binaire.
   - **Fichier :** `1-insert_left.c`

### 2. **Tâche 2 : Insérer un nœud à droite**
   - Implémente une fonction qui insère un nouveau nœud à droite d'un nœud donné dans un arbre binaire.
   - **Fichier :** `2-insert_right.c`

### 3. **Tâche 3 : Supprimer un nœud**
   - Implémente une fonction qui supprime un nœud donné dans un arbre binaire.
   - **Fichier :** `3-delete.c`

### 4. **Tâche 4 : Vérifier si un nœud est une feuille**
   - Implémente une fonction qui vérifie si un nœud est une feuille (c'est-à-dire qu'il n'a pas de fils).
   - **Fichier :** `4-is_leaf.c`

### 5. **Tâche 5 : Vérifier si un nœud est la racine**
   - Implémente une fonction qui vérifie si un nœud donné est la racine de l'arbre binaire.
   - **Fichier :** `5-is_root.c`

### 6. **Tâche 6 : Traversée pré-ordre**
   - Implémente une fonction qui effectue une traversée pré-ordre de l'arbre binaire.
   - **Fichier :** `6-preorder.c`

### 7. **Tâche 7 : Traversée en-ordre**
   - Implémente une fonction qui effectue une traversée en-ordre de l'arbre binaire.
   - **Fichier :** `7-inorder.c`

### 8. **Tâche 8 : Traversée post-ordre**
   - Implémente une fonction qui effectue une traversée post-ordre de l'arbre binaire.
   - **Fichier :** `8-postorder.c`

### 9. **Tâche 9 : Calculer la hauteur**
   - Implémente une fonction qui calcule la hauteur d'un arbre binaire.
   - **Fichier :** `9-height.c`

### 10. **Tâche 10 : Calculer la profondeur**
   - Implémente une fonction qui calcule la profondeur d'un nœud dans l'arbre binaire.
   - **Fichier :** `10-depth.c`

### 11. **Tâche 11 : Calculer la taille**
   - Implémente une fonction qui calcule la taille de l'arbre binaire (le nombre de nœuds dans l'arbre).
   - **Fichier :** `11-size.c`

### 12. **Tâche 12 : Calculer le nombre de feuilles**
   - Implémente une fonction qui calcule le nombre de feuilles dans l'arbre binaire.
   - **Fichier :** `12-leaves.c`

### 13. **Tâche 13 : Calculer le nombre de nœuds**
   - Implémente une fonction qui calcule le nombre total de nœuds dans l'arbre binaire.
   - **Fichier :** `13-nodes.c`

### 14. **Tâche 14 : Calculer le facteur d'équilibre**
   - Implémente une fonction qui calcule le facteur d'équilibre d'un nœud dans un arbre binaire.
   - **Fichier :** `14-balance_factor.c`

### 15. **Tâche 15 : Vérifier si l'arbre est plein**
   - Implémente une fonction qui vérifie si l'arbre binaire est plein. Un arbre binaire est plein si chaque niveau est complètement rempli, à l'exception éventuellement du dernier niveau.
   - **Fichier :** `15-is_full.c`

### 16. **Tâche 16 : Vérifier si l'arbre est parfait**
   - Implémente une fonction qui vérifie si l'arbre binaire est parfait. Un arbre binaire est parfait si tous les nœuds internes ont exactement deux enfants et toutes les feuilles sont au même niveau.
   - **Fichier :** `16-is_perfect.c`

### 17. **Tâche 17 : Trouver le frère**
   - Implémente une fonction qui trouve le frère d'un nœud donné dans un arbre binaire.
   - Le frère d'un nœud est son autre enfant, c'est-à-dire, l'autre enfant du parent du nœud donné.
   - **Fichier :** `17-sibling.c`

### 18. **Tâche 18 : Trouver l'oncle**
   - Implémente une fonction qui trouve l'oncle d'un nœud donné dans un arbre binaire.
   - L'oncle d'un nœud est le frère du parent du nœud.
   - **Fichier :** `18-uncle.c`

## Technologies Used

- **Langage de Programmation :** C
- **IDE / Outils :** 
  - Visual Studio Code / Vim / Emacs (ou tout autre éditeur de texte)
  - GCC (GNU Compiler Collection) pour la compilation du code C
  - Makefile pour la gestion de la compilation et de la construction du projet
  - Trello pour l'organisation des tâches
- **Contrôle de Version :** Git (pour la gestion du code source et des versions)
- **Système d'Exploitation :** Linux (ou tout système d'exploitation compatible avec GCC)

## Conclusion
Ces implémentations couvrent un large éventail de fonctions de manipulation d'arbres binaires. Chaque fichier contient une implémentation spécifique et complète d'une tâche donnée, contribuant à une meilleure gestion et exploration des arbres binaires dans nos projets.


## Features

Les fonctionnalités du projet incluent la manipulation des arbres binaires à travers des fonctions diverses. Chaque tâche est conçue pour résoudre un aspect particulier de l'arbre binaire, depuis la création de nœuds jusqu'à la vérification de propriétés complexes comme l'équilibre et la perfection de l'arbre.

## Installation

Clonez ce dépôt dans votre environnement local :

```bash
git clone https://github.com/QuentinC26/holbertonschool-binary_trees.git
```
- Naviguez ensuite dans le dossier du projet :
```bash
cd holbertonschool-binary_trees
```
- Compilation :

Pour compiler le projet, vous devez utiliser gcc avec les fichiers source appropriés. Par exemple, pour compiler et exécuter une des fonctions, vous pouvez utiliser la commande suivante :
```bash
gcc -Wall -Wextra -Werror -pedantic -std=gnu89 binary_tree_print.c <nom_du_fichier_source>.c <nom_du_fichier_main>.c -o <nom_du_programme>
```
- Exécutez ensuite le programme compilé :
```bash
./<nom_du_programme>
```


## Usage/Examples

### Exemple : Mesurer la hauteur de l'arbre
Voici un exemple de code pour mesurer la hauteur d'un arbre binaire :

```javascript
#include "binary_trees.h"

int main(void)
{
    binary_tree_t *root;
    size_t height;

    root = binary_tree_node(NULL, 98);
    root->left = binary_tree_node(root, 12);
    root->right = binary_tree_node(root, 402);
    binary_tree_insert_right(root->left, 54);
    binary_tree_insert_right(root, 128);
    binary_tree_print(root);

    height = binary_tree_height(root);
    printf("Height from %d: %lu\n", root->n, height);

    return (0);
}

```
### Exemple de sortie


```javascript
  .-------(098)--.
(012)--.       (128)--.
     (054)          (402)
Height from 98: 2

```

 ## Authors

- [@EmmanuelMOUMBOUILOU](https://github.com/QuentinC26/holbertonschool-binary_trees)
- QUENTIN C26
- Vyckash Djepang


## 🔗 Links
 ### Trello :
- https://trello.com/b/qewUXIA6/organisation-du-projet

