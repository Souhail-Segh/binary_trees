#include "binary_trees.h"

/**
 * binary_tree_rotate_left - rotate tree to left
 * @tree: a binary tree
 * Return: pointer to the new tree
 */
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *new_root;

	if (tree == NULL || tree->right == NULL)
		return (tree);

	new_root = tree->right;
	new_root->parent->parent = new_root;
	new_root->parent->right = new_root->left;
	new_root->left = tree;
	new_root->parent = NULL;

	return (new_root);
}
