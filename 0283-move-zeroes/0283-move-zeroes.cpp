class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        if( nums.size() <= 1 ) return; 
        int l = 0; 

        for( int r=0; r<nums.size(); r++ ) {
            if( nums[r] != 0 ) {
                // swapping element at l with element at r 
                swap( nums[l], nums[r] );
                l++;                    
            }
        } 
    }
};