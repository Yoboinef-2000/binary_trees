#include "binary_trees.h"

/**
 * binary_tree_rotate_left- this function performs a left-rotation
 * on a binary tree.
 *
 * @tree: this is a pointer to the root node of the tree to rotate.
 *
 * Description: refer to the first commented out line.
 *
 * Return: Returns a pointer to the new root node of the tree once rotated.
 */

binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *newRoot;

	if (tree == NULL || tree->right == NULL)
	{
		return (tree);
	}

	newRoot = tree->right;
	tree->right = newRoot->left;
	if (newRoot->left != NULL)
	{
		newRoot->left->parent = tree;
	}
	newRoot->left = tree;
	tree->parent = newRoot;
	return (newRoot);
}
