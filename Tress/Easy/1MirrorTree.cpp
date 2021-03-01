//Given a Binary Tree, convert it into its mirror.
//https://www.geeksforgeeks.org/write-an-efficient-c-function-to-convert-a-tree-into-its-mirror-tree/

void mirror(struct node* root)
{
    if(root==NULL)
        return;

    struct node* temp;
    mirror(root->left;
    mirror(root->right);
    temp=root->left;
    root->left=root->right;
    root->right=temp;
    
}