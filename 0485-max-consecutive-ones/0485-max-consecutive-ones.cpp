class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count=0;
        int highest_count=0; 
        if( nums[0] == 1 ) count++; 

        for( int i=1; i<nums.size(); i++ ) {
            if( nums[i] == 0 ) {
                highest_count = max( count, highest_count );
                count=0; 
            }
            else if( nums[i] == 1 && nums[i-1] == 1 ) count++;
            else count=1;
        } 
        return max( count, highest_count );
    }
};