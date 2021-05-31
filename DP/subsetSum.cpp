class Solution {
public:
    
    int ssum(vector<int>& nums, int sum,int n){
        
        if(n==0)
            return sum==0;
        if(sum == 0)
            return 1;
        
        if(nums[n-1]<=sum)
        return ssum(nums,sum-nums[n-1],n-1) + ssum(nums,sum,n-1);
        
        else
        return ssum(nums,sum,n-1);
        
        
    }
    
    
    int numSubseq(vector<int>& nums, int target) {
        return ssum(nums,target,nums.size());
    }
};