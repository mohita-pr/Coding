void util(Node* root,int* max, int d,vector<int>& res)
{
    if(root==NULL)
        return;
    
    if(*max<d)    
        {
            res.push_back(root->data);
            *max=d;
        }
    util(root->right,max,d+1,res);
    util(root->left,max,d+1,res);
    
}

vector<int> rightView(Node *root)
{
   vector<int> res;
   if(root==NULL)
        return res;
    int max=0;
    util(root,&max,1,res);
 
    return res;
}
