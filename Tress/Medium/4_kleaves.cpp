static int kLeaves(Node ptr,int k)  
{  
    // Base Conditions : No leaves  
    if (ptr == null)  
        return 0;  
  
    // if node is leaf  
    if (ptr.left == null && ptr.right == null)  
        return 1;  
  
    // total leaves in subtree rooted with this  
    // node  
    int total = kLeaves(ptr.left, k) + kLeaves(ptr.right, k);  
  
    // Print this node if total is k  
    if (k == total)  
        System.out.print(ptr.data + " ");  
  
    return total;  
}  