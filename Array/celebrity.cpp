class Solution 
{
    public:
    //Function to find if there is a celebrity in the party or not.
    int celebrity(vector<vector<int> >& M, int n) 
    {
        int i = 0, j=n-1;
        
        while(i<j){
            
            if(M[i][j])
                i++;
            else
                j--;
        }
  
        for(int c=0;c<n ;c++){

            if( c!=i && (M[c][i]==0 || M[i][c]==1) ){
                return -1;
            }
                
        }
        
        return i;
    }
};
