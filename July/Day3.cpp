class Solution {
public:
    int singleNonDuplicate(vector<int>& num) {
        int n = num.size();
         if( n==1 ){return num[0];}
         int st = 0 , end = n-1;
        while (st <= end){
           int mid = st + (end - st)/2;
           if(mid ==0 &&  num[0]!=num[1]){return num[mid];}
           if(mid == n-1 &&  num[0]!=num[1]){return num[mid];}
            if(num[mid]!=num[mid-1]&&num[mid]!=num[mid+1]){
                return num[mid];
            }
            if(mid % 2 == 0 ){
                if(num[mid]==num[mid-1]){
                end = mid - 1;}
                else {
                    st = mid + 1;
                }
            }
                else{
                if(num[mid]==num[mid-1]){
                st = mid + 1;
                }
                else {
                    end = mid - 1;
                }
                }
            
            
        }
        return -1;
        }
    
};
