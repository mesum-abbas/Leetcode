class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        int sum = 0;
        for(int i=0; i<n; i++){
            for(int j=i+1 ; j<n ; j++){
                int sum = nums[i]+nums[j];
                if(sum == target){
                  return {i+1,j+1};
                }
            }
        }
        return {};
    }
};








class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> seen; // value -> index

        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i];

            if (seen.count(complement)) {
                return {seen[complement], i};
            }

            seen[nums[i]] = i;
        }

        return {}; // if no valid pair
    }
};
