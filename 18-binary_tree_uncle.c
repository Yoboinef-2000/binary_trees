#include "binary_trees.h"

/**
 * binary_tree_uncle - this function fund the uncle of a node
 *
 * @node: this is a pointer to the node to find the uncle.
 *
 * Description: refer to the first commented out line
 *
 * Return: Returns a pointer to the uncle node.
 * But if node is NULL, return NULL.
 * If node has no uncle, return NULL.
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
	{
		return (NULL);
	}
	if (node->parent->parent->left == node->parent)
	{
		return (node->parent->parent->right);
	}
	else
	{
		return (node->parent->parent->left);
	}
}
