int max(int a,int b)
{
    return (a>b)?a:b;
}
int diameterU(Node* node,int& res) {
    
   if(node==NULL)
    return 0;
    
    int l = diameterU(node->left,res);
    int r = diameterU(node->right,res);
    
    int ans= 1+l+r;
    res= max(res,ans);
    return max(l,r)+1;
}
int diameter(Node* node) {
    
    if(node==NULL)
    return 0;
    
    int res=INT_MIN;
    diameterU(node,res);
    return res;
}
