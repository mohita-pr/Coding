int areMirror(Node* a, Node* b) {
   
   if(a==NULL && b==NULL)
        return 1;
        
    if(!a || !b)
        return 0; 
        
    if(a->data==b->data && areMirror(a->left,b->right) && areMirror(a->right,b->left))
    return 1;
    
    return 0;
   
}
