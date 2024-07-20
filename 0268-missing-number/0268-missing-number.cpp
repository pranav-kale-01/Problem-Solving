class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size(); 
        int total = (n * (n+1))/2;
        int nums_sum = 0; 

        for( int i=0; i<n; i++ )  
            nums_sum+=nums[i]; 

        // now subtracting the nums_sums from sum. 
        return total - nums_sum;
    }
};