int minValue(Node* root)
{
    if(root==NULL)
        return 0;
    while(root->left!=NULL)
    root=root->left;
    
    return root->data;
}
