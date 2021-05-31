int isSibling(struct Node *root, struct Node *a, struct Node *b) 
{ 
    // Base case 
    if (root==NULL)  return 0; 
  
    return ((root->left==a && root->right==b)|| 
            (root->left==b && root->right==a)|| 
            isSibling(root->left, a, b)|| 
            isSibling(root->right, a, b)); 
} 
  
// Recursive function to find level of Node 'ptr' in a binary tree 
int level(struct Node *root, struct Node *ptr, int lev) 
{ 
    // base cases 
    if (root == NULL) return 0; 
    if (root == ptr)  return lev; 
  
    // Return level if Node is present in left subtree 
    int l = level(root->left, ptr, lev+1); 
    if (l != 0)  return l; 
  
    // Else search in right subtree 
    return level(root->right, ptr, lev+1); 
} 
  
  
// Returns 1 if a and b are cousins, otherwise 0 
int isCousin(struct Node *root, struct Node *a, struct Node *b) 
{ 
     
    if ((level(root,a,1) == level(root,b,1)) && !(isSibling(root,a,b))) 
        return 1; 
    else return 0; 
} 