class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        unordered_map<int,int> mp;
        for(int i=0;i<heights.size();i++){
            mp[heights[i]]=i;
        }
        sort(heights.begin(),heights.end(),greater<int>());
        vector <string> res;
        for(int i=0;i<names.size();i++){
            res.push_back(names[mp[heights[i]]]);
        }
        return res;

    }
};





class Solution {
public:
    bool divideArray(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i+=2){
            if(nums[i]!=nums[i+1]){
                return false;
            }
        }
        return true;
    }
            

};
