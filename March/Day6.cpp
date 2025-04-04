class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> result;
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        int i=0;
        int j=0;
        while(i<nums1.size() && nums2.size()){
            if (i >= nums1.size() || j >= nums2.size())  
            break;
            if(nums1.at(i) == nums2.at(j)){
                result.push_back(nums1[i]);
                i++;
                j++;
            }
            else if(nums1[i]<nums2[j]){
                i++;
            }
            else{
                j++;
            }
        }
        return result;
    }
};




// 2nd program 

class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> result;
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        int i=0;
        int j=0;
        while(i<nums1.size() && nums2.size()){
            if (i >= nums1.size() || j >= nums2.size())  
            break;
            if(nums1.at(i) == nums2.at(j)){
                result.push_back(nums1[i]);
                i++;
                j++;
            }
            else if(nums1[i]<nums2[j]){
                i++;
            }
            else{
                j++;
            }
        }
        return result;
    }
};


