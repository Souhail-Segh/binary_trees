#include "binary_trees.h"

/**
 * binary_tree_depth - calculate the depth of a node
 * @tree: the node for which we calculate the node depth
 * Return: the depth of the node
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->parent == NULL)
		return (0);

	return (binary_tree_depth(tree->parent) + 1);
}
