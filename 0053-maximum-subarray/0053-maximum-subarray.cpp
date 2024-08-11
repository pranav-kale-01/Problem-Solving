class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum=0, max_sum=nums[0]; 

        for( int num: nums ){ 
            sum += num; 

            if( max_sum < sum ) max_sum = sum; 
            sum=max(sum,0);
        }

        return max_sum;
    }
};