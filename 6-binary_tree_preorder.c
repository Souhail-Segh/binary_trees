#include "binary_trees.h"

/**
 * binary_tree_preorder - traverse tree nodes in pre-order
 * @tree: the binary tree
 * @func: a function that tooks the value of nodes
 * Return: NULL
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
