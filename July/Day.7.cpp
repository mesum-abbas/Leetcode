class Solution {
public:
    bool searchMatrix(vector<vector<int>>& mat, int tar) {
        int n = mat.size();
        int m = mat[0].size();
        for(int i = 0 ; i < n ; i++ ){
            for(int j = 0 ; j < m ; j++){
                if(mat[i][j]==tar){
                    return true;
                }
            }
        }
        return false ;
    }
};
