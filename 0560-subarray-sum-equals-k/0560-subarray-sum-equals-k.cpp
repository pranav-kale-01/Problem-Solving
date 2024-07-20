class Solution {
public:
    int subarraySum(vector<int>& nums, int k) { 
        int sum=0, count=0; 
        unordered_map<int,int> hash;

        hash[sum] = 1; 

        for( int num : nums ) {
            sum += num; 
            count+=hash[sum-k];
            hash[sum]++;
        }

        return count;        
    }
};