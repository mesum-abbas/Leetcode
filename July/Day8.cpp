class Solution {
public:
    bool search(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        int st = 0 , end = n-1;
        while(st <= end){
            int mid = st + (end - st) / 2;
            if(nums[mid] == target ){
                return true;
            }
            
            if(target < nums[mid] ){
                end = mid - 1 ;
            }
            else {
                st = mid + 1 ;
            }
        } 
        return false;

        
    }
};
