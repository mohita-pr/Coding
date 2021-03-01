int toSumTreeU(Node *root)
{
    // Your code here
    if(root==NULL)
        return 0;
        
    int old=root->data;
    root->data=toSumTreeU(root->left)+ toSumTreeU(root->right);
    return old+root->data;
    
}
