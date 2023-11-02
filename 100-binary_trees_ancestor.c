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

/**
 * binary_trees_ancestor - givees the lowest common ancestor of two nodes
 * @first: first node
 * @second: second node
 * Return: the lowest ancestor of two nodes
 */

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
				     const binary_tree_t *second)
{
	size_t heigher;
	binary_tree_t *new_node;

	new_node = malloc(sizeof(binary_tree_t));

	if (first == NULL || second == NULL)
		return (NULL);

	heigher = binary_tree_depth(first);

	if (heigher > binary_tree_depth(second))
		heigher = binary_tree_depth(second);

	while (binary_tree_depth(first) > heigher)
		first = first->parent;

	while (binary_tree_depth(second) > heigher)
		second = second->parent;

	while (first)
	{
		if (first == second)
		{
			new_node = first->left;
			return (new_node->parent);
		}
		first = first->parent;
		second = second->parent;
	}
	return (NULL);
}
