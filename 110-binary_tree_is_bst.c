#include "binary_trees.h"

/**
 * confirm_tree - Determines is a binary tree is a binary search tree
 * @tree: tree to check
 * @min: Highest int
 * @max: Lowest int
 * Return: 1 if true, 0 otherwise
 */

int confirm_tree(const binary_tree_t *tree, int min, int max)
{
    {
	if (tree == NULL)
	    return (1);

	if (tree->n <= min || tree->n >= max)
	    return (0);

	return ((confirm_tree(tree->left, min, tree->n)) && (confirm_tree(tree->right, tree->n, max)));
    }
}

/**
 * binary_tree_is_bst -  function that checks if binary tree is a valid Binary Search Tree
 * @tree: pointer to the root node of the tree to check
 * Return: 1 if tree is a valid BST, and 0 otherwise
 */

int binary_tree_is_bst(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}

	return (confirm_tree(tree, INT_MIN, INT_MAX));
}
