#include "binary_trees.h"

/**
 * binary_tree_is_leaf - check if a node is a leaf
 * @node: the node to check
 * Return: 1 if success, 0 otherwise
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node != NULL)
	{
		if (node->right == NULL && node->left == NULL)
			return (1);
	}
	return (0);
}
