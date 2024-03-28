#include "binary_trees.h"

/**
 * binary_tree_nodes- this function counts the nodes with atleast
 * 1 child in a binary tree.
 *
 * @tree: this is a pointer to the root node of the tree to count
 * the number of nodes.
 *
 * Description: refer to the first commented out line.
 * (+)
 * A NULL pointer is not a node.
 *
 * Return: Returns the number of nodes.
 * But if tree is NULL, it must return 0.
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t leftNodes, rightNodes;

	if (tree == NULL)
	{
		return (0);
	}

	leftNodes = binary_tree_nodes(tree->left);
	rightNodes = binary_tree_nodes(tree->right);

	if (tree->left != NULL || tree->right != NULL)
	{
		return (1 + leftNodes + rightNodes);
	}
	else
	{
		return (leftNodes + rightNodes);
	}
}
