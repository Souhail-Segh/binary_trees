#include "binary_trees.h"

/**
 * binary_tree_sibling - Function that finds the sibling of a node.
 * @node: A pointer to the node to find the sibling.
 * Return: NULL if node is NULL or parent is NULL.
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *temp;

	if (node == NULL || node->parent == NULL)
	{
		return (NULL);
	}

	temp = node->parent;

	if (temp->left->n == node->n)
	{
		return (temp->right);
	}
	else
	{
		return (temp->left);
	}
}
