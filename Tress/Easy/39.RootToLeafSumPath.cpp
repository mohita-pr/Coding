bool hasPathSum(Node *Node, int sum) {

     if (Node == NULL) 
    { 
        return (sum == 0); 
    } 
     
    else
    { 
        bool ans = 0; 
     
        int subSum = sum - Node->data; 
     
        /* If we reach a leaf node and sum becomes 0 then return true*/
        if ( subSum == 0 && Node->left == NULL && Node->right == NULL ) 
        return 1; 
         
        /* otherwise check both subtrees */
        if(Node->left) 
            ans = ans || hasPathSum(Node->left, subSum); 
        if(Node->right) 
            ans = ans || hasPathSum(Node->right, subSum); 
     
        return ans; 
    } 
    
    
}