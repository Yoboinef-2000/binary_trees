#include "binary_trees.h"

/**
 * binary_tree_size - this function that measures the size of a binary
 * tree.
 *
 * @tree: this is a pointer to the root node of the tree to measure
 * the size
 *
 * Description: refer to the first commented out line
 *
 * Return: returns the size of the tree or
 * it returns 0 is tree is NULL
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t leftsize, rightsize;

	if (tree == NULL)
	{
		return (0);
	}
	leftsize = binary_tree_size(tree->left);
	rightsize = binary_tree_size(tree->right);
	return (leftsize + rightsize + 1);
}
