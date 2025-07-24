class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
    unordered_map<int,int> map;
    sort(nums.begin(),nums.end());
    int ans = -1 , c = 0 ;
    for(auto j : nums){
        map[j] += 1;
    }    
    for (int i = 0 ; i < nums.size() ; i++  ){
        if(nums[i] % 2 ==0){
            if(map[nums[i]] > c){
                c = map[nums[i]];
                ans = nums[i];
            }
        }
    }
    return ans ;
    }

};
