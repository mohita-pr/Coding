int minLeafSum(Node* root)
{
	if (!root) 
        return 0; 
  
    // if there is only one node 
    if (!root->left && !root->right) 
        return root->data; 
  
    // queue used for level order traversal 
    queue<Node*> q; 
    int sum = 0;  
    bool f = 0; 
  
    // push root node in the queue 'q' 
    q.push(root); 
  
    while (f == 0) { 
  
        // count number of nodes in the 
        // current level 
        int nc = q.size(); 
  
        // traverse the current level nodes 
        while (nc--) { 
  
            // get front element from 'q' 
            Node* top = q.front(); 
            q.pop(); 
  
            // if it is a leaf node 
            if (!top->left && !top->right) { 
  
                // accumulate data to 'sum' 
                sum += top->data; 
  
                // set flag 'f' to 1, to signify  
                // minimum level for leaf nodes  
                // has been encountered 
                f = 1; 
            } 
            else { 
  
                // if top's left and right child  
                // exists, then push them to 'q' 
                if (top->left) 
                    q.push(top->left); 
                if (top->right) 
                    q.push(top->right); 
            } 
        } 
    } 
  
    // required sum 
    return sum; 

}