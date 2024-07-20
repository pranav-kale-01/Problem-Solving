class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size(); 
        int total = (n * (n+1))/2;
        int nums_sum = 0; 

        for( int i=0; i<n; i++ ) { 
            nums_sum+=nums[i]; 
        }

        // now subtracting the nums_sums from sum and we will get the 
        // missing number. If the sum is equal then the missing number is 0
        if( nums_sum == total ) return 0; 
        else return total - nums_sum;
    }
};