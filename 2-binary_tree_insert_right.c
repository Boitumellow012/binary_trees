#include "binary_trees.h"

/**
  * binary_tree_t *binary_tree_insert_right - Binary Tree
  *
  * @parent: pointer to the node to insert the right-child in
  * @value: the value to store in the new node
  * 
  * Return: return a pointer to the created node.
  *
  * Description: If parent already has a right-child, 
  *              the new node takes its place and the old right-child is set as
  *              the right-child of the new node.
  */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
		return (NULL);

	new_node = binary_tree_node(parent, value);

	if (new_node == NULL)
		return (NULL);

	new_node->right = parent->right;

	if (new_node->right != NULL)
		new_node->right->parent = new_node;

	parent->right = new_node;
	return (new_node);
}
