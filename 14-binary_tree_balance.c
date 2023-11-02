#include "binary_trees.h"

/**
 * binary_tree_balance - Function that measures the balance of a binary tree.
 * @tree: A pointer to the root node of the tree to measure the balance.
 * Return: 0 if tree is NULL.
 */
int binary_tree_balance(const binary_tree_t *tree)
{

	if (tree != NULL)
	{
		return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
	}

	return (0);
}

/**
 * binary_tree_height - Function that measures the height of binary tree.
 * @tree: A pointer to the root node of the tree to measure the height.
 * Return: 0 if tree is NULL.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{

	if (tree)
	{
		size_t left = 0, right = 0;

		if (tree->left)
		{
			left = 1 + binary_tree_height(tree->left);
		}
		else
		{
			left = 1;
		}
		if (tree->right)
		{
			right = 1 + binary_tree_height(tree->right);
		}
		else
		{
			right = 1;
		}

		return ((left > right) ? left : right);
	}

	return (0);
}
