//Minimum Depth of a Binary Tree

int minDepth(Node *root) {
    
    if(root==NULL)
        return 0;
        
    queue<Node*> q;
    q.push(root);
    int res=1;
    while(!q.empty())
    {
        int n=q.size();
        for(int i=0;i<n;i++)
        {
            Node* temp=q.front();
            q.pop(); 
            
            if(temp->left==NULL && temp->right==NULL)
                return res;
            
            if(temp->left)
                q.push(temp->left);
            
            if(temp->right)
                q.push(temp->right);
            
        }
        
        res++;
       
        
    }
   
}