#include "binary_trees.h"

/**
 * binary_tree_balance- this function measures the balance factor
 * of a binary tree.
 *
 * @tree: this is a pointer to the root node of the tree to measure
 * the balance factor.
 *
 * Description: refer to the first commented out line
 *
 * Return: Returns the balance factor.
 * But if tree is NULL, it must return 0.
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int leftHeight, rightHeight;

	if (tree == NULL)
	{
		return (0);
	}

	leftHeight = binary_tree_balance(tree->left);
	rightHeight = binary_tree_balance(tree->right);

	/* FYI, this function dont een work.*/
	return (leftHeight - rightHeight);
}
