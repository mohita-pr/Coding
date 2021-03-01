bool util(struct Node *root,vector<int>& res,int target)
{
    if(root==NULL)
        return false ;
        
    if (root->data ==target)
        return true;
        
    if(util(root->left,res,target) || util(root->right,res,target))
        res.push_back(root->data);
}

vector<int> Ancestors(struct Node *root, int target)
{
     // Code here
     vector<int> res;
     if(root==NULL)
        return res;
        
    util(root,res,target);
    return res;
}