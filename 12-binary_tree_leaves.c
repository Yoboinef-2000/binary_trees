#include "binary_trees.h"

/**
 * binary_tree_leaves- this function counts the leaves in a
 * binary tree.
 *
 * @tree: this is a pointer to the root node of the tree to count
 * the number of leaves.
 *
 * Description: refer to the first commented out line.
 * (+)
 * A NULL pointer is not a leaf.
 *
 * Return: Returns the number of leaves.
 * But if tree is NULL, it must return 0.
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leftLeaves, rightLeaves;

	if (tree == NULL)
	{
		return (0);
	}

	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}

	leftLeaves = binary_tree_leaves(tree->left);
	rightLeaves = binary_tree_leaves(tree->right);

	return (leftLeaves + rightLeaves);
}
