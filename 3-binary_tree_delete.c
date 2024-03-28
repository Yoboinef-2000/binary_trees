#include "binary_trees.h"

/**
 * binary_tree_delete - this function deletes an entire binary tree.
 *
 * @tree: this is a pointer to the root node of the tree to delete.
 *
 * Description: refer to the first comment
 * (+)
 * if tree is NULL, do nothing
 *
 * Return: nada
 */

void binary_tree_delete(binary_tree_t *tree)
{
	binary_tree_t *parent;

	if (tree != NULL)
	{
		return;
	}
	else
	{
		binary_tree_delete(tree->left);
		binary_tree_delete(tree->right);
		free(tree);
	}
}
