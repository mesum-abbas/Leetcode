class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& mat) {
        int m = mat.size() , n = mat[0].size();
        int srow = 0 , scol = 0 , erow = m-1, ecol = n-1;
        vector <int> res;
        while(srow <= erow && scol <= ecol){
        //top
        for(int i=scol;i<=ecol;i++){
            res.push_back(mat[srow][i]);
        }
        //right
        for(int i=srow+1;i<=erow;i++){
            res.push_back(mat[i][ecol]);
        }
        //bot
        for(int i=ecol-1;i>=scol;i--){
            if(srow == erow){
                break;
            }
            res.push_back(mat[erow][i]);
        }
        //left
        for(int i=erow-1;i>=srow+1;i--){
            if(scol == ecol){
                break;
            }
            res.push_back(mat[i][scol]);
        }
        srow++; scol++; erow--; ecol--;

        }
        return res;
    }
};
