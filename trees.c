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


// create a tree and return it
t_node *insert_node(t_node *root, int content)
{
    if (root == NULL)
        return (create_node(content));
    if (content < root->content)
        root->left = insert_node(root->left, content);
    else
        root->right = insert_node(root->right, content);
    return (root);
}

// search a node in an inoder traversal
t_node *find_node( t_node *root ,int value)
{
    if (root == NULL)
        return (NULL);
    if (root->content == value)
        return (root);
    if (value < root->content)
        return (find_node(root->left, value));
    else
        return (find_node(root->right, value));
}



// print the trees
void	pre_order_print(t_node *node )
{
    if (!node)
        return ;
    printf("%d\n", (int)node->content);
    pre_order_print(node->left);
    pre_order_print(node->right);
}

void    post_order_print(t_node *node )
{
    if (!node)
        return ;
    post_order_print(node->left);
    post_order_print(node->right);
    printf("%d\n", (int)node->content);
}

void    inorder_print(t_node *node )
{
    if (!node)
        return ;
    inorder_print(node->left);
    printf("%d\n", (int)node->content);
    inorder_print(node->right);
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

// reverse the nodes of a parent
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