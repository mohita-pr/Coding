// Max Level Sum in Binary Tree 

int maxLevelSum(Node* root) {
   
   if(root==NULL)
        return 0;
        
    queue<Node*> q;
    q.push(root);
    int res=0;
    int max=INT_MIN;
    while(!q.empty())
    {
        int n=q.size();
        res=0;
        for(int i=0;i<n;i++)
        {
            Node* temp=q.front();
            q.pop(); 
            
            res+=temp->data;
            
            if(temp->left)
                q.push(temp->left);
            
            if(temp->right)
                q.push(temp->right);
            
        }
        
        max=(max<res)?res:max;
       
        
    }
    return max;
   
}
