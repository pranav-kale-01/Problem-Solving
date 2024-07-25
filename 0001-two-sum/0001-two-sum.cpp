class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // using a hashmap for storing the elements 
        unordered_map<int, int> mp; 

        for( int i=0; i<nums.size(); i++ ) 
            mp[nums[i]] = i; 

        // now subtracting the target from each element and 
        // checking if the element is present in the map 
        // and does not have the same index as the current elemnt 
        // (since duplicates are not allowed)
        vector<int> res;

        for( int i=0; i<nums.size(); i++ ) { 
            if( mp[ target - nums[i]] != NULL && i!=mp[ target - nums[i]] ) {
                res.push_back( i ); 
                res.push_back( mp[target - nums[i] ] );
                break; 
            }
        }

        return res; 
    }
};