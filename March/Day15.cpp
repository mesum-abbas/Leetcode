class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size(); 
        int res = 0 ;
        for(int i=0;i<n-1;i++){
            if(nums[i]==nums[i+1]){
                 res = nums[i];
            }
        }
        return res;
    }
};







class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
         int n = nums.size();
        int dup = -1, mis = -1;

        for (int i = 0; i < n; i++) {
            if (nums[abs(nums[i]) - 1] < 0) {
                dup = abs(nums[i]); 
            } else {
                nums[abs(nums[i]) - 1] *= -1;
            }
        }

        for (int i = 0; i < n; i++) {
            if (nums[i] > 0) {
                mis = i + 1; 
                break;
            }
        }

        return {dup, mis};
    }
};
