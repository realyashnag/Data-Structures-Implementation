#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *left;
    struct node *right;
}node;

typedef struct binary_search_tree
{
    struct node *root;
}binary_search_tree;

node* get_node()
void initialize(binary_search_tree *t, int value);
void insert(binary_search_tree *t, int value);
void preorder_traversal(node* root);
void inorder_traversal(node* root);
void postorder_traversal(node* root);
void bfs_growing_traversal(node* root);
void bfs_decaying_traversal(node* rooot);
node* search(binary_search_tree *t, int value);
