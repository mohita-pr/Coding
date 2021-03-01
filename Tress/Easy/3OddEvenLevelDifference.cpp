//Given a Binary Tree. Find the difference between the sum of node values at even levels and the sum of node values at the odd levels.

int getLevelDiff(Node *root)
{
   if(root==NULL)
        return 0;
        
    queue<Node*> q;
    q.push(root);
    bool even=false;
    int res=0;
    while(!q.empty())
    {
        int n=q.size();
        for(int i=0;i<n;i++)
        {
            Node* temp=q.front();
            q.pop(); 
            if(even==true)
                res-=temp->data;
            else
                res+=temp->data;
            
            if(temp->left)
                q.push(temp->left);
            
            if(temp->right)
                q.push(temp->right);
            
        }
        
        even=!even;
       
        
    }
    
    return res;
}

