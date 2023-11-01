#include "binary_trees.h"

/**
 * binary_tree_postorder - traverse tree nodes in post-order
 * @tree: the binary tree
 * @func: a function that tooks the value of nodes
 * Return: NULL
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
