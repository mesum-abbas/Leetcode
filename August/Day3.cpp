class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int st = 0;
        int n = nums.size();
        int end = n-1;

        while (st <= end ){
            int mid = st + (end - st)/2;
            if (mid == 0) {
                if (n == 1 || nums[mid] > nums[mid + 1]) return mid;
                else st = mid + 1;
            } 
            else if (mid == n - 1) {
                if (nums[mid] > nums[mid - 1]) return mid;
                else end = mid - 1;
            } 
        
            else if(nums[mid-1]<nums[mid] && nums[mid+1]<nums[mid]){
                return mid ;
            }
            else if(nums[mid+1]<nums[mid]){
                end = mid  ;
            }
            else {
                st = mid +1;
            }

        }
        return st;
        
    }
};
