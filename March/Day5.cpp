class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int negative = 0;
        int positive = 0;
        for(int i=0 ; i < nums.size() ; i++)  {
            if(nums[i] < 0)
            negative++;
            if(nums[i] > 0)
            positive++;
        }
        if(positive >  negative)
        return positive;
        else 
        return negative;

    return 0; 
    }
};
