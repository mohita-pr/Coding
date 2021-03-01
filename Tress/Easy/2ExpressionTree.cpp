// Given a full binary expression tree consisting of basic binary operators (+ , – ,*, /) and some integers, Your task is to evaluate the expression tree.

// Example 1:

// Input: 
//               +
//            /     \
//           *       -
//         /  \    /   \
//        5    4  100  20 

// Output: 100

// Explanation:
// ((5 * 4) + (100 - 20)) = 100

int toInt(String s)
{
    int num=0;
    for(int i=0;i<s.length();i++)
        num=num*10+(s[i]-48);
    return num;
}


int evalTree(node* root) {
    
    if(root==NULL)
        return 0;
    
    if (root->left==NULL && root->right==NULL)
        return toInt(root->data);
    int left = evalTree(root->left);
    int right = evalTree(root->right);
    
    if(root->data == "+")
        return left+right;
    if(root->data == "-")
        return left-right;
    if(root->data == "*")
        return left*right;
    return left/right;
    
}