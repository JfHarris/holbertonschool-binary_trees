#include "binary_trees.h"

/**
 * bst_insert - inserts a value in a Binary Search Tree
 * @tree: double pointer to root node of the BST to insert the value
 * @value: value to store in the node to be inserted
 * Return: pointer to the created node, or NULL on failure
 */

bst_t *bst_insert(bst_t **tree, int value)
{
	bst_t *existing;
    bst_t *created;

	if (tree != NULL)
	{
		existing = *tree;
		if (existing == NULL)
		{
			created = binary_tree_node(existing, value);
			if (created == NULL)
            {
				return (NULL);
            }
			return (*tree = created);
		}
		if (value < existing->n)
		{
			if (existing->left != NULL)
            {
				return (bst_insert(&existing->left, value));
            }
			created = binary_tree_node(existing, value);
			if (created == NULL)
            {
				return (NULL);
            }
			return (existing->left = created);
		}
		if (value > existing->n)
		{
			if (existing->right != NULL)
            {
				return (bst_insert(&existing->right, value));
            }
			created = binary_tree_node(existing, value);
			if (created == NULL)
            {
				return (NULL);
            }
			return (existing->right = created);
		}
	}
	return (NULL);
}
