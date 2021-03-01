//https://www.geeksforgeeks.org/sum-numbers-formed-root-leaf-paths/

long long util(Node *root, int val){
    
    if(root==NULL)
    return 0;
    
    val= val*10 + root->data;
    if(root->left==NULL && root->right==NULL)
    return val;
    
    return util(root->left,val)+util(root->right,val);
    
}


long long treePathsSum(Node *root)
{
    return util(root,0);
}
