int getMaxWidth(Node* root)
{
   if(root==NULL)
        return 0;
        
    queue<Node*> q;
    q.push(root);
    int max=INT_MIN;
    int l=0;
    int res=0;
    while(!q.empty())
    {
        int n=q.size();
        if(n>max)
        {
            max=n;
            res=l;
        }
        for(int i=0;i<n;i++)
        {
            Node* temp=q.front();
            q.pop(); 
            
            if(temp->left)
                q.push(temp->left);
            
            if(temp->right)
                q.push(temp->right);
            
        }
        l++;
    }
    
    return max;
}