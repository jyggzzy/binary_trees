#include <stdlib.h>
#include "binary_trees.h"
/**
  * binary_tree_sibling - finds the sibling of a node
  * @node: ponter to the node to find the sibling
  * Return: pointer to the sibling node
  * if node is NULL, or the parent is NULL, return NULL
  * if node has no sibling, return NULL
  */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);
	if (node == node->parent->left)
		return (node->parent->right);
	return (node->parent->left);
}
