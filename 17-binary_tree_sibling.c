#include "binary_trees.h"

/**
 * binary_tree_sibling - this function finds the sibling of a node.
 *
 * @node: this is a pointer to the node to find the sibling.
 *
 * Description: refer to the first commented out line
 *
 * Return: Returns a pointer to the sibling node.
 * But if node is NULL or the parent is NULL, return NULL.
 * If node has no sibling, return NULL.
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
	{
		return (NULL);
	}
	if (node == node->parent->left)
	{
		return (node->parent->right);
	}
	else
	{
		return (node->parent->left);
	}
}
