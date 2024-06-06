#include "binary_trees.h"

/**
 * binary_tree_sibling - function that finds if a node is sibling
 * @node: node to checks
 * Return: The sibling nodes
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
	{
		return (NULL);
	}
	if (node->parent->left == node)
		return (node->parent->right);
	return (node->parent->left);
}
