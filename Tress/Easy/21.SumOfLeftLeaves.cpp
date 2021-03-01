bool isLeaf(Node *node) 
{ 
   if (node == NULL) 
       return false; 
   if (node->left == NULL && node->right == NULL) 
       return true; 
   return false; 
} 
  
int leftLeavesSum(Node *root) 
{ 
    int res = 0; 
  
    if (root != NULL) 
    { 
       if (isLeaf(root->left)) 
            res += root->left->key; 
       else 
            res += leftLeavesSum(root->left); 
       res += leftLeavesSum(root->right); 
    } 
    return res; 
} 


//method -2

void leftLeavesSumRec(Node *root, bool isleft, int *sum) 
{ 
    if (!root) return; 
  
    // Check whether this node is a leaf node and is left. 
    if (!root->left && !root->right && isleft) 
        *sum += root->key; 
  
    // Pass 1 for left and 0 for right 
    leftLeavesSumRec(root->left,  1, sum); 
    leftLeavesSumRec(root->right, 0, sum); 
} 
  
// A wrapper over above recursive function 
int leftLeavesSum(Node *root) 
{ 
    int sum = 0; //Initialize result 
  
    // use the above recursive function to evaluate sum 
    leftLeavesSumRec(root, 0, &sum); 
  
    return sum; 
} 