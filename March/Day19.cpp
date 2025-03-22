class Solution {
public:
    void rotate90(vector<vector<int>>& mat , int n){
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                swap(mat[i][j],mat[j][i]);
            }
        }
        for(auto &row : mat) {
            reverse(begin(row), end(row));
        }
    }
    bool checkequal(vector<vector<int>>& mat, vector<vector<int>>& target ,int n){
        for(int i=0;i<n;i++){
            if(mat[i]!=target[i])
            return false;
        }
            return true;
    }

    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        int n = mat.size();
        for(int i=0;i<4;i++){
            rotate90(mat,n);
            if(checkequal(mat,target,n))
                return true;
        }
        return false;
    }
};






class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                swap(matrix[i][j],matrix[j][i]);
            }
            reverse(matrix[i].begin(),matrix[i].end());
        }
        
    }
};







