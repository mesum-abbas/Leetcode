class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int tar) {
         int n = nums.size()-1;
        vector <pair<int,int>> newarr;          // making pair with index
        for(int i=0 ; i <= n ; i++){
            newarr.push_back({nums[i],i});
        }
        sort(newarr.begin(),newarr.end());    // sorting 
       
        vector<int> arr;
        int st = 0  , end = newarr.size()-1;     // logic and returning index
        while (st < end){
            int sum = newarr[st].first + newarr[end].first ;
            if(sum == tar){
                return {newarr[st].second , newarr[end].second};
            }
            else if(sum < tar){
                st++;
            }
            else{
                end--;
            }
        }
       return {};
    }
};
