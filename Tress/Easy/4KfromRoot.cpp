//K distance from root 

void util(struct Node *root, int k, int d, vector<int>& res)
{
    if(root==NULL)
    return;
    
    if(d==k)
    {
        res.push_back(root->data);
    }
    
    util(root->left,k,d+1,res);
    util(root->right,k,d+1,res);
    
}

vector<int> Kdistance(struct Node *root, int k)
{
  // Your code here
  vector<int> res;
  if(root==NULL)
    return res;
    
  util(root,k,0,res);
  return res;

  
}