class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int n = accounts.size();
         int large = 0 ;
        for(int i=0;i<n;i++){
            int sum =0;
            for(int j=0;j<accounts[i].size();j++){
                sum += accounts[i][j]; 
              }
            large = max(large,sum);
          }
        return large;
    }
};
