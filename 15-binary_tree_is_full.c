#include "binary_trees.h"

/**
 * binary_tree_is_full - this function checks if a binary tree is full.
 *
 * @tree: this is a pointer to the root node of the tree to check.
 *
 * Description: refer to the first commented out line
 *
 * Return: Returns 1 if it is full.
 * But if tree is NULL, it must return 0.
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}
	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}
	if (tree->left != NULL && tree->right != NULL)
	{
		return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
	}
	else
	{
		return (0);
	}
}
