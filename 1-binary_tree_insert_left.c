#include "binary_trees.h"

/**
 * binary_tree_insert_left - this function inserts a node as the
 * left-child of another node.
 *
 * @parent: this is a pointer to the node to insert the left-child in
 * @value: this is the value to store the new node.
 *
 * Description: refer to the first comment
 * (+)
 * If parent already has a left-child, the new node must take its place,
 * and the old left-child must be set as the left-child of the new node.
 *
 * Return: returns a pointer to the created node, or NULL on failure
 * or if parent is NULL;
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
    binary_tree_t *newnode;

    newnode = malloc(sizeof(binary_tree_t));

    if (newnode == NULL)
    {
        return (NULL);
    }
    if (parent == NULL)
    {
        return (NULL);
    }
    newnode->n = value;
    if (parent->left != NULL)
    {
        newnode->left = parent->left;
        parent->left->parent = newnode;
        parent->left = newnode;
        newnode->parent = parent;
        newnode->right = NULL;
        return (newnode);
    }
    else 
    {
        parent->left = newnode;
        newnode->parent = parent;
        newnode->left = NULL;
        newnode->right = NULL;
        return (newnode);
    }
}
