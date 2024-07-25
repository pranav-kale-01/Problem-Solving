class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // using a hashmap for storing the elements 
        unordered_map<int, int> mp; 

        for( int i=0; i<nums.size(); i++ ) 
            mp[nums[i]] = i; 

        for( int i=0; i<nums.size(); i++ )  
            if( mp[ target - nums[i]] != NULL && i!=mp[ target - nums[i]] ) 
                return {i, mp[ target - nums[i]]}; 

        return {};
    }
};