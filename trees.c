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


// creates a binaary search tree : 
// wich means that the left child is less than the parent and the right child is greater than the parent ,
//  if u want to read the read it , use inorder traversal
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



//-------------------- print the trees-----------------------------

// preorder traversal

// 1 - Traverse the root node
// 2 - Traverse the left sub-tree
// 3 - Traverse the right sub-tree
void	pre_order_print(t_node *node )
{
    if (!node)
        return ;
    printf("%d |", (int)node->content);
    pre_order_print(node->left);
    pre_order_print(node->right);
}

// post order traversal
// 1 - Traverse the left sub-tree
// 2 - Traverse the right sub-tree
// 3 - Traverse the root node
void    post_order_print(t_node *node )
{
    if (!node)
        return ;
    post_order_print(node->left);
    post_order_print(node->right);
    printf("%d |", (int)node->content);
}

// inorder traversal:
// 1 - Traverse the left sub-tree
// 2 - Traverse the root node
// 3 - Traverse the right sub-tree
void    inorder_print(t_node *node )
{
    if (!node)
        return ;
    inorder_print(node->left);
    printf("%d |", (int)node->content);
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


// int main ()
// {
//     t_node *root;
//     root = create_node(0);

//     int  i = 0;
//     while(i < 20)
//     {
//         insert_node(root, rand()%500);
//         i++;
//     }

//     pre_order_print(root);
//     printf("\n\n");
//     inorder_print(root);
//     printf("\n\n");
//     post_order_print(root);
// }