int max(int a, int b) 
{ 
    return (a >= b) ? a : b; 
} 
int height(Node *root)
{
    if(root==NULL)
        return 0;
        
    else return max(height(root->left),height(root->right))+1;
}
bool isBalanced(Node *root)
{
    if(root==NULL)
        return true;
    
    int lh,rh;
    
    lh=height(root->left);
    rh=height(root->right);
    
    
    if(abs(lh-rh)<=1 &&  isBalanced(root->left) && isBalanced(root->right))
        return true;
    return false;
}