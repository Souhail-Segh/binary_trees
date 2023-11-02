#include "binary_trees.h"

/**
 * past_binary_tree_leaves - count how many leaves in a tree
 * @tree: the tree
 * Return: the number of leaves
 */
size_t past_binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->right == NULL && tree->left == NULL)
		return (1);

	return (past_binary_tree_leaves(tree->left) +
			past_binary_tree_leaves(tree->right));
}

/**
 * past_binary_tree_nodes - Counts the nodes that have at least 1 child.
 * @tree: A pointer to the root node of the tree.
 * Return: 0 if tree is NULL.
 */
size_t past_binary_tree_nodes(const binary_tree_t *tree)
{
	int counter = 0;

	if (tree == NULL)
		return (0);

	if (tree->left || tree->right)
		counter++;

	counter += past_binary_tree_nodes(tree->left);
	counter += past_binary_tree_nodes(tree->right);

	return (counter);
}
/**
 * past_binary_tree_height - Function that measures the height.
 * @tree: A pointer to the root node of the tree to measure the height.
 * Return: 0 if tree is NULL.
 */
size_t past_binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t left = 0, right = 0;

		if (tree->left)
		{
			left = 1 + past_binary_tree_height(tree->left);
		}
		if (tree->right)
		{
			right = 1 + past_binary_tree_height(tree->right);
		}
		return ((left > right) ? left : right);
	}
	return (0);
}

/**
 * binary_tree_is_perfect - is a tree perfect
 * @tree: a tree
 * Return: 1 if succed, 0 otherwise
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t num, height, h;

	if (tree == NULL)
		return (0);

	num = past_binary_tree_nodes(tree) + past_binary_tree_leaves(tree);
	height = past_binary_tree_height(tree);
	h = 1;
	while (height > 0)
	{
		h = 2 * h;
		height--;
	}
	h = 2 * h - 1;
	if (num == h)
		return (1);
	return (0);
}
