class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        int n = num.size()-1;
        vector <int> res;
        while(n>=0||k>0){
                if(n>=0){
                    k+=num[n];
                    n--;
                }
             res.push_back(k%10);
            k/=10;
        }
        reverse(res.begin(),res.end());
        return res;
    }
};
