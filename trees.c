#include "libft.h"

// create a node and return it
t_node	*create_node(int content)
{
    t_node	*node;

    node = (t_node *)malloc(sizeof(t_node));
    node->content = content;
    node->left = NULL;
    node->right = NULL;
    return (node);
}





// print the tree
void	print_tree(t_node *node)
{
    if (!node)
        return ;
    printf("%d\n", (int)node->content);
    print_tree(node->left);
    print_tree(node->right);
}

// free the tree
void	free_tree(t_node *node)
{
    if (!node)
        return ;
    free_tree(node->left);
    free_tree(node->right);
    free(node);
}

t_node *reverse(t_node *node)
{
    t_node *tmp;

    if (!node)
        return (NULL);
    tmp = node->left;
    node->left = node->right;
    node->right = tmp;
    reverse(node->left);
    reverse(node->right);
    return (node);
}