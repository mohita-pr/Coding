bool util(struct Node* root1,struct Node* root2)
{
    if(root1==NULL && root2==NULL)
        return true;
        
    if(!root1||!root2)
        return false;
    
    if(root1->data == root2->data && util(root1->left,root2->right) && util(root1->right,root2->left))
        return true;
    return false;
}
bool isSymmetric(struct Node* root)
{
	// Code here
	if(root==NULL)
	    return true;
	
	return util(root,root);
}