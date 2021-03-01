void store(Node* root,vector<int>& ele)
{
    if(root==NULL)
        return;
        
    ele.push_back(root->data);
    store(root->left,ele);
    store(root->right,ele);
}

void storeback(Node* root,vector<int> ele, int* i)
{
    if(root==NULL)
        return;
        
    storeback(root->left,ele,i);
    root->data=ele[*i];
    (*i)++;
    storeback(root->right,ele,i);
}

Node *binaryTreeToBST (Node *root)
{
    if(root==NULL)
        return NULL;
        
    vector<int> ele;
    store(root,ele);
    sort(ele.begin(), ele.end()); 
    int i=0;
    storeback(root,ele,&i);
    return root;
}