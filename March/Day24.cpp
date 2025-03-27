class Solution {
public:
    bool hasAlternatingBits(int n) {
        int t = n^(n>>1);
        return ( (t+1LL)&t ) == 0;
    }
};
