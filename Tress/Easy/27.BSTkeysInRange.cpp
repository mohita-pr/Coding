void Print(node *root, int k1, int k2)  
{  
    if ( NULL == root )  
        return;  

    if ( k1 < root->data )  
        Print(root->left, k1, k2);  

    if ( k1 <= root->data && k2 >= root->data )  
        cout<<root->data<<" ";  
      
    if ( k2 > root->data )  
        Print(root->right, k1, k2);  
}  