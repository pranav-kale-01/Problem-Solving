class Solution {
public: 
    bool isPalindrome(int x) {
        // converting string to int 
        string s = to_string(x);
        int n=s.size();  

        for( int i=0; i<(n/2); i++ ) {
            int n1= s[i] - 48; 
            int n2= s[(n-1)-i] - 48;
            
            if( n1 != n2 ) return false;
        }
        return true;
    }
};