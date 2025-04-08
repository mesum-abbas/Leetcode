class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int l = 0 , r = n-1;
        int maxwater = 0;   
        while(l<r){
            int wid = r-l;
            int ht = min(height[l],height[r]);
            int currentwater = wid * ht;
            maxwater =max(maxwater,currentwater);

            height[l]<height[r] ? l++ : r--;    

        }
        return maxwater;

    }
};
