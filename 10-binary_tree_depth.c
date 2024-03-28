#include "binary_trees.h"

/**
 * binary_tree_depth - this function creates a binary tree node.
 *
 * @tree: this is a pointer to the node of the tree to measure
 * the depth
 *
 * Description: refer to the first commented out line
 *
 * Return: returns the height of the tree or
 * it returns 0 is tree is NULL
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t treeDepth;

	if (tree == NULL)
	{
		return (0);
	}
	treeDepth = 0;
	while (tree->parent)
	{
		treeDepth += 1;
		tree = tree->parent;
	}
	return (treeDepth);
}
