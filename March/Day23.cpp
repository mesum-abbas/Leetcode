class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> result;
        for(int i=0;i<=n;i++){
           int a =  __builtin_popcount(i);
            result.push_back(a);
            a = 0;
        }
        return result; 
    }
};







class Solution {
public:
    int hammingWeight(int n) {
        
        int a = __builtin_popcount(n);
            return a;
        
        
    }
};








class Solution {
public:
bool isPrime(int n) {
        return (n == 2 || n == 3 || n == 5 || n == 7 || n == 11 || n == 13 ||
                n == 17 || n == 19 || n == 23 || n == 29 || n == 31);
    }

public:
    int countPrimeSetBits(int left, int right) {
        int cnt = 0;
        for (int i = left; i <= right; i++)
            if (isPrime(__builtin_popcount(i)))
                cnt++;
        return cnt;
    }
};
