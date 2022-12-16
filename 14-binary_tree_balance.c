#include <stdlib.h>
#include "binary_trees.h"
/**
  * binary_tree_balance - measures the balance
  * factor of a binary tree
  * @tree: pointer to the root node of
  * the tree to measure the balance factor
  * Return: if tree is NULL, return 0
  */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left, right;

	if (tree == NULL)
		return (0);
	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);
	return (left - right);
}
/**
  * binary_tree_height - measures the height of a binary tree
  * @tree: pointer to the root node of the tree to traverse
  * Return: if tree is NULL return 0
  */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (tree == NULL || binary_tree_is_leaf(tree))
		return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);
	if (left_height >= right_height)
		return (left_height + 1);
	return (right_height + 1);
}
/**
  * binary_tree_is_leaf - checks if a node is a leaf
  * @node: pointer to the node to check
  * Return: 1 if node is a leaf, otherwise return 0
  * if node is NULL, return 0
  */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->right == NULL && node->left == NULL)
		return (1);
	return (0);
}
