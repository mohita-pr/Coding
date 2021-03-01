//Remove Half Nodes 

Node *RemoveHalfNodes(Node *root)
{
   if(root==NULL)
        return NULL;
        
    root->left=RemoveHalfNodes(root->left);
    root->right=RemoveHalfNodes(root->right);
    
    if(root->left==NULL && root->right == NULL)
        return root;
    
    if(root->left==NULL)
    {
        Node* new_root = root->right;
        free(root);
        return new_root;
    }
        
    if(root->right==NULL)
    {
        Node* new_root = root->left;
        free(root);
        return new_root;
    }
      
        
    return root;
    
}