#include "binary_trees.h"

/**
 * binary_tree_height - this function measure the height of a binary tree.
 *
 * @tree: this is a pointer to the root node of the tree to measure
 * the height;
 *
 * Description: refer to the first commented out line
 *
 * Return: returns the height of the tree or
 * it returns 0 is tree is NULL
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t treeHeight;

	if (tree == NULL)
	{
		return (0);
	}
	treeHeight = 0;

	while (tree->left || tree->right)
	{
		if (tree->left != NULL)
		{
			tree = tree->left;
		}
		else
		{
			tree = tree->right;
		}
		treeHeight += 1;
	}
	return (treeHeight);
}
