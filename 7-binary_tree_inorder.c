#include "binary_trees.h"


/**
  * binary_tree_inorder - Binary inorder
  *
  * @tree: is a pointer to the root node of the tree to traverse
  * @func: is a pointer to a function to call for each node.
  *
  * Return:  a pointer to the created node
  */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}