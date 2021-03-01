void zizagtraversal(struct Node* root) 
{ 
    if (!root) 
        return; 
  
    stack<struct Node*> currentlevel; 
    stack<struct Node*> nextlevel; 
   
    currentlevel.push(root); 
    
    bool lefttoright = true; 
    while (!currentlevel.empty()) { 
  
        
        struct Node* temp = currentlevel.top(); 
        currentlevel.pop(); 
  
        if (temp) { 
  
            cout << temp->data << " "; 
  
            if (lefttoright) { 
                if (temp->left) 
                    nextlevel.push(temp->left); 
                if (temp->right) 
                    nextlevel.push(temp->right); 
            } 
            else { 
                if (temp->right) 
                    nextlevel.push(temp->right); 
                if (temp->left) 
                    nextlevel.push(temp->left); 
            } 
        } 
  
        if (currentlevel.empty()) { 
            lefttoright = !lefttoright; 
            swap(currentlevel, nextlevel); 
        } 
    } 
} 