#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts the nodes that have at least 1 child.
 * @tree: A pointer to the root node of the tree.
 * Return: 0 if tree is NULL.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	int counter = 0;

	if (tree == NULL)
		return (0);

	if (tree->left || tree->right)
		counter++;
	counter += binary_tree_nodes(tree->left);
	counter += binary_tree_nodes(tree->right);

	return (counter);
}
