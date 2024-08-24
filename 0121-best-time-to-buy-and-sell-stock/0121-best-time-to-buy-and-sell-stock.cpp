class Solution {
public:
    int maxProfit(vector<int>& prices) {
        // handling edge case
        if( prices.size() == 1 ) return 0;

        // using two pointer approach 
        int b=0, s=1; 
        int max_profit = prices[s] - prices[b];

        while( s < prices.size() ) {
            if( prices[s] < prices[b] ) { 
                b = s;
                if( s+1 < prices.size() ) max_profit = max( max_profit, prices[s+1] - prices[b] ); 
            }
            else  
                max_profit = max( max_profit, prices[s] - prices[b] );
            s++; 
        }

        return max( 0, max_profit);
    }
};