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
