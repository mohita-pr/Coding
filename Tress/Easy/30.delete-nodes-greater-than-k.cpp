Node* deleteNode(Node* root, int key)
{
    
             if(root==NULL)
             return NULL;
             root->left=deleteNode(root->left,key);
             root->right=deleteNode(root->right,key);
             if(root->data>=key)
             {
                 return root->left;
             }
             return root;
             
}
