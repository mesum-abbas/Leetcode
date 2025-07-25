class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int currSum = 0 , maxsum =INT_MIN;
        
        for(int val : nums){
        currSum += val ;
        maxsum = max(currSum , maxsum);

        if(currSum < 0){
            currSum = 0;
            }
        }
        return maxsum;
    }
};
