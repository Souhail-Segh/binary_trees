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

/**
 * binary_tree_leaves - count how many leaves in a tree
 * @tree: the tree
 * Return: the number of leaves
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (binary_tree_is_leaf(tree) == 1)
		return (1);

	return (binary_tree_leaves(tree->left)
		+ binary_tree_leaves(tree->right));
}
