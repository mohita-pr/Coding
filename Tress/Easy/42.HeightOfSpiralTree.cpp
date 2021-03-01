bool isLeaf(Node* node) 
{ 
    return node->left && node->left->right == node 
           && node->right && node->right->left == node; 
} 

int maxDepth(Node* node) 
{ 
    // if node is NULL, return 0 
    if (node == NULL) 
        return 0; 
  
    // if node is a leaf node, return 1 
    if (isLeaf(node)) 
        return 1; 

    return 1 
           + max(maxDepth(node->left), 
                 maxDepth(node->right)); 
} 