#include "binary_trees.h"

/**
 * binary_tree_node - this function creates a binary tree node.
 *
 * @parent: this is a pointer to the parent node of the node to create.
 * @value: this is the value to put in the new node.
 *
 * Description: refer to the first comment
 * (+)
 * When created a node does not have any child
 *
 * Return: returns a pointer to the new node, or NULL on failure.
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode;

	newnode = malloc(sizeof(binary_tree_t));
	if (newnode == NULL)
	{
		return (NULL);
	}

	if (parent == NULL)
	{
		newnode->parent = NULL;
		newnode->n = value;
		newnode->left = NULL;
		newnode->right = NULL;
		return (newnode);
	}
	else
	{
		newnode->parent = parent;
		newnode->n = value;
		newnode->left = NULL;
		newnode->right = NULL;
		return (newnode);
	}
}

