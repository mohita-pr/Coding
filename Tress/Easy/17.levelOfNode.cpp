int getLevelUtil(struct Node *node, int target, int level) 
{ 
    if (node == NULL) 
        return 0; 
        
    if (node->data == target) 
        return level; 
  
    int l =getLevelUtil(node->left, target, level+1); 
    if(l!=0)
      return l;
        
    l= getLevelUtil(node->right, target, level+1); 
    return l;
    
} 
  
/* Returns level of given data value */
int getLevel(struct Node *node, int target)
{ 
    return getLevelUtil(node,target,1); 
} 