#include "binary_trees.h"

/**
 * binary_tree_rotate_right - rotate tree to right
 * @tree: a binary tree
 * Return: pointer to the new tree
 */
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *new_root;

	if (tree == NULL || tree->left == NULL)
		return (tree);

	new_root = tree->left;
	new_root->parent->parent = new_root;
	new_root->parent->left = new_root->right;
	new_root->right = tree;
	new_root->parent = NULL;

	return (new_root);
}
