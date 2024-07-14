class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        if( nums.size() <= 1 ) return; 
        int l = 0; 
        int r = 1;
        int n = nums.size(); 

        while( r < n && l < n-1 ) {
            if( nums[l] == 0 && nums[r]==0 ) { 
                r++; 
            }
            else if( nums[l]==0 ) {
                // swapping element at l with element at r 
                swap( nums[l], nums[r] );
                if( r-1 == l ) r++;  
                l++;                    
            }
            else { 
                l++; 
                r++; 
            }

            
            cout << l << " " << r << endl;
        } 
    }
};