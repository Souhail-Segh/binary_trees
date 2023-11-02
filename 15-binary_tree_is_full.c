#include "binary_trees.h"

/**
 * binary_tree_is_full - Function that checks if a binary tree is full.
 * @tree: A pointer to the root node of the tree to check.
 * Return: 0 if tree is NULL.
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}
	return (tree_full_rec(tree));
}

/**
 * tree_full_rec - Function that checks if a binary tree is full recursively.
 * @tree: A pointer to the root node of the tree to check.
 * Return: 1 if the tree is not full, otherwise 0.
 */
int tree_full_rec(const binary_tree_t *tree)
{

	if (tree != NULL)
	{
		if ((tree->left == NULL && tree->right != NULL) ||
			(tree->left != NULL && tree->right == NULL))
		{
			return (0);
		}
		if (tree_full_rec(tree->left) == 0 || tree_full_rec(tree->right) == 0)
		{
			return (0);
		}
	}

	return (1);
}
