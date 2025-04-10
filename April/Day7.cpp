class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        if (nums.empty()) return false;

        int k = 0;
        for (int i = 0; i < nums.size(); ++i) {
            if (nums[i] != val) {
               nums[k] = nums[i];
                k++;
            }
        }
        return k;
    }
};





class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n,1);

        //prefix
        for(int i=1;i<n;i++){
            ans[i] = ans[i-1]*nums[i-1];
        }
        //suffix
        int suffix =1;
        for(int i=n-2;i>=0;i--){
            suffix*=nums[i+1];
            ans[i]*=suffix;
        }
        return ans;
    }
};
