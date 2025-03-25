class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        int sum=0;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i+=2){
            if(i<nums.size()){
            sum+=min(nums[i],nums[i+1]);
            }
        }
        return sum;
    }
};





class Solution {
public:
    int fib(int n) {
        if(n==0){
            return 0;
        }
        else if(n==1){
            return 1;
        }
        else {
            return fib(n-1)+fib(n-2);
        }
    }
};
