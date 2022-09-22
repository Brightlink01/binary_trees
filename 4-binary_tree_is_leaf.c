#include<stdlib.h>
#include "binary_trees.h"
/**
 *binary_tree_is_leaf - function to checks the node
 *@node: is a pointer to the node to check
 *Return: Return 1 of the node is leaf else 0
 *
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
if (node == Null || node->left == Null || node->right == Null)
return (1);
return (0);
}
