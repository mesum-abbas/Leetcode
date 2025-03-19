class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> ans = heights;
        int count = 0;
        sort(ans.begin(),ans.end());
        for(int i=0;i<ans.size();i++){
            if(ans[i]!=heights[i]){
                count ++;
            }
        }
        return count ;
    }
};




class Solution {
public:
    vector<int> transformArray(vector<int>& nums) {
        vector<int> res(nums.size());
        for (int i=0;i<nums.size();i++){
            if(nums[i]%2==0){
                res[i]=0;
            }
            else{
                res[i]=1;
            }
            
        }
        sort(res.begin(),res.end());
        return res;
    }
};
