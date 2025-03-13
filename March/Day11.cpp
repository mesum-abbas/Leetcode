class Solution {
public:
    int reverse(int x) {
        long long result = 0;
        while( x!=0){
            int digit = x%10;
            if((result<INT_MIN/10)||(result>INT_MAX/10)){
                return 0;
            }
            result = result*10 + digit;
            x = x / 10;
        }
        return result;
        
    }
};




class Solution {
public:
    bool isPowerOfFour(int n) {
       if ( n < 1) return false;
        if ( n == 1) return true;
        int p = 1;
        for (int i = 1; p < INT_MAX/4; ++i){
            p = p*4;
            if ( p == n) return true;
        }
        return false;
    }
};
