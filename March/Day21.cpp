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




class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int count = 0;
        int n = mat.size();
        for(int i=0;i<n;i++){
            count+=mat[i][i];
            if(i!=n-i-1){
                     count+=mat[i][n-i-1];
                }
                }
        return count;
    }
};
