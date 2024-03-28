#include "binary_trees.h"

/**
 * binary_tree_rotate_right- this function performs a right-rotation
 * on a binary tree.
 *
 * @tree: this is a pointer to the root node of the tree to rotate.
 *
 * Description: refer to the first commented out line.
 *
 * Return: Returns a pointer to the new root node of the tree once rotated.
 */

binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *newRoot;

	if (tree == NULL || tree->left == NULL)
	{
		return (tree);
	}

	newRoot = tree->left;
	tree->left = newRoot->right;
	if (newRoot->right != NULL)
	{
		newRoot->right->parent = tree;
	}
	newRoot->right = tree;
	tree->parent = newRoot;
	return (newRoot);
}
