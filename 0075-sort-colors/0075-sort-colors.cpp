class Solution {
public:
    void sortColors(vector<int>& nums) {
        int z=0, o=0; 

        for( int num : nums ) {
            if( num == 0 ) z++; 
            if( num == 1 ) o++; 
        }

        for( int i=0; i<nums.size(); i++ ) {
            if( i < z ) nums[i] = 0; 
            else if( i < z+o ) nums[i] = 1; 
            else nums[i] = 2;
        }
    }
};