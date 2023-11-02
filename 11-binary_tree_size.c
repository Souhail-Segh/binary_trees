#include "binary_trees.h"

/**
 * binary_tree_size - Function that measures the size of a binary tree.
 * @tree: A pointer to the root node to measure the size.
 * Return: 0 if tree is NULL.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{

	size_t counter = 0;

	if (tree)
	{
		counter++;
		counter += binary_tree_size(tree->left);
		counter += binary_tree_size(tree->right);
	}

	return (counter);
}
