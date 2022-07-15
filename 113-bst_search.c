#include "binary_trees.h"

/**
 * bst_search - searches for a value in a Binary Search Tree
 * @tree: pointer to the root node of the BST to search
 * @value: value to search in the tree
 * Return: pointer to the node containing a value equal to value else NULL
 */

bst_t *bst_search(const bst_t *tree, int value)
{	
	if (value < tree->n)
	{
		return (bst_search(tree->left, value));
	}
	if (value > tree->n)
	{
		return (bst_search(tree->right, value));
	}
    if (tree == NULL || tree->n == value)
	{
		return ((bst_t *)tree);
	}
	return (NULL);
}
