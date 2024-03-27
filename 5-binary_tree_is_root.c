#include "binary_trees.h"

/**
 * binary_tree_is_root - this function checks if a given
 * node is a root.
 *
 * @node: this is a pointer to the node to check
 *
 * Description: refer to the first commented out line
 * (+)
 *
 * Return: returns 1 if node is a root, otherwise 0.
 * If node is NULL, return 0.
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
	{
		return (0);
	}
	if (node->parent == NULL)
	{
		return (1);
	}
	return (0);
}
