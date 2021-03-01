void store(Node* root,vector<int>& ele)
{
    if(root==NULL)
        return;
        
    
    store(root->left,ele);
    ele.push_back(root->data);
    store(root->right,ele);
}
vector <int> printCommon(Node *root1, Node *root2)
{
     //Your code here
     vector<int> t1;
     vector<int> t2;
     vector<int> res;
     
     store(root1,t1);
     store(root2,t2);
     
     int i=0,j=0;
     
     while(i<t1.size() && j<t2.size())
     {
         if(t1[i]==t2[j])
            res.push_back(t1[i]);
            
        if(t1[i]<t2[j])
        i++;
        
        else
        j++;
     }
        
    return res;
}
