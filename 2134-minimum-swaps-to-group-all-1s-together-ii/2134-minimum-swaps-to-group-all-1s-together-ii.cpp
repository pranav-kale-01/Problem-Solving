class Solution {
public:
    int minSwaps(vector<int>& nums) {
        int num_ones=0; 
        // first counting the number of 1s in the array    
        for( int num : nums ) 
            if( num == 1 ) num_ones++; 

        // defining a sliding window
        int start=0; 
        int end = nums.size() < num_ones ? nums.size() : num_ones; 

        // calculating the initial sum of the sliding window 
        int sum=0;
        int min_swaps=INT_MAX;
        for( int i=start; i<end; i++ )
            sum+=nums[i]; 

        while( start < nums.size() ) {
            // checking if sum == num_ones
            if( sum == num_ones ) 
                return 0; 
            else {
                int swaps_required = num_ones - sum; 
                min_swaps = min_swaps < swaps_required ? min_swaps : swaps_required;
            }

            // cout << "start -  " << start << ", end - " << end << ": " << sum << endl ; 

            // moving the sliding window 
            sum -= nums[start]; 
            sum += nums[end%nums.size()];

            start++; 
            end++; 
        }

        return min_swaps;
    }
};