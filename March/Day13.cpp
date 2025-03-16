class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int n=nums.size(),esum=0,dsum=0;
        for(int i=0;i<n;i++){
            esum+=nums[i];
            int num=nums[i];
            while(num>0){
                dsum+=(num%10);
                num/=10;
            }
        }
        return esum-dsum;
    }
};
