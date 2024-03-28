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
		while (tree->left != NULL || tree->right != NULL)
		{
			if (tree->left != NULL)
			{
				tree = tree->left;
			}
			else
			{
				tree = tree->right;
			}
		}
		while (tree->parent != NULL)
		{
			parent = tree->parent;
			if (parent->left == tree)
			{
				parent->left = NULL;
			}
			else
			{
				parent->right = NULL;
			}
			free(tree);
			tree = parent;
		}
		free(tree);
	}
}
