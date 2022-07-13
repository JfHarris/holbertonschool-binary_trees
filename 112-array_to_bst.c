#include "binary_trees.h"

/**
 * array_to_bst - builds a Binary Search Tree from an array
 * @array: pointer to the 1st element of array to be converted
 * @size: number of element in the array
 * Return: pointer to root node of the created BST, or NULL on failure
 */

bst_t *array_to_bst(int *array, size_t size)
