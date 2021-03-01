void util(Node* root,map<int,int>& m,int d)
{
    if(root==NULL)
        return;
    m[d]+=root->data;
    util(root->left,m,d-1);
    util(root->right,m,d+1);
}

vector <int> verticalSum(Node *root) {
    // add code here.
    
    vector<int> res;
    if(root==NULL)
        return res;
        
    map<int,int>m;
    util(root,m,0);
    for(auto i=m.begin();i!=m.end();i++)
        res.push_back(i->second);
    return res;
}