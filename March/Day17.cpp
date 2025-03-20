class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        for(int i=0;i<n;i++){
            nums1[m+i]=nums2[i];
       }   
       sort(nums1.begin(),nums1.end());
       for(int i=0;i<m+n;i++){
        cout<<nums1[i];
       }
    }
    
};



class Solution {
public:
    bool checkPerfectNumber(int num) {
        int res;
        if(num==0){
            return false;
        }
    for(int i=1;i<=num;i++){
        if(num%i==0){
            res+=i;
            }
        }
        res = res - num;
        if(num==res){
            return true;
        }
        else{
            return false;
        }
    }
};



class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> res;
        int dig;
        for(int i=left;i<=right;i++)
         if(isSelfDividing(i)) res.push_back(i);
         return res;
         }
         bool isSelfDividing(int num) {
        for (int n = num; n > 0; n /= 10)
            if (n % 10 == 0 || num % (n % 10) != 0) return false;
        return true;
    }
         

        
    
};
