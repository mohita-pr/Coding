static int c=0;

int st(Node* root, int x,int c)
{
    if(root==NULL) return 0;
    int o = root->data;
    root->data = st(root->left,x,c) + st(root->right,x,c);
    if(root->data+o == x) c++;
    return (o+root->data);
}
int countSubtreesWithSumX(Node* root, int X)
{
    c=0;
	st(root,X,c);
	return c;
}
