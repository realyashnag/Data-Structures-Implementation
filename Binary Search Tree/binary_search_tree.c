node* get_node()
{
    node *temp;
    temp = (node*)malloc(sizeof(node));
    temp->data = NONE;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}

void initialize(binary_search_tree *t, int value)
{
    t->root = get_node();
    t->root->data = value;
}

void insert(binary_search_tree *t, int value)
{
    node *root = t->root;
    while (1)
    {
        if (value > root->data)
        {
            if (root->right != NULL)
            {
                root = root->right;
                continue;
            }
            else
            {
                node *temp;
                temp = get_node();
                temp->data = value;
                root->right = temp;
                break;
            }
        }
        if (value < root->data)
        {
            if (root->left != NULL)
            {
                root = root->left;
                continue;
            }
            else
            {
                node *temp;
                temp = get_node();
                temp->data = value;
                root->left = temp;
                break;
            }
        }
    }
}

/* Depth First Traversal */

void preorder_traversal(node* root)          //Pre-Order : Root -> Left -> Right
{
    if (root!= NULL)
    {
        printf("-%d-", root->data);
        preorder_traversal(root->left);
        preorder_traversal(root->right);
    }
}

void inorder_traversal(node* root)           //In-Order : Left -> Root -> Right
{
    if (root!= NULL)
    {
        inorder_traversal(root->left);
        printf("-%d-", root->data);
        inorder_traversal(root->right);
    }
}

void postorder_traversal(node* root)        //Post-Order : Left -> Right -> Root
{
    if (root!= NULL)
    {
        postorder_traversal(root->left);
        postorder_traversal(root->right);
        printf("-%d-", root->data);
    }
}

/* Breadth First Traversal */

void bfs_growing_traversal(node* root)    //Growing : Top -> Bottom
{
    
}

void bfs_decaying_traversal(node* rooot)    //Decaying : Bottom -> Top  
{

}


node* search(binary_search_tree *t, int value)
{
    node *root = t->root;
    while(1)
    {
        if (value == root->data)
        {
            return root;
        }

        else if (value < root->data)
        {
            if (root->left!=NULL)
            {
                root=root->left;
            }
            else
            {
                return NULL;
            }
        }
        else if (value > root->data)
        {
            if (root->right!=NULL)
            {
                root=root->right;
            }
            else
            {
                return NULL;
            }
        }
    }
}
