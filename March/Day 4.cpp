class Solution {
public:
    int arrangeCoins(int n) {
        int count = 0 ;
        for(int i=1;i<=n;i++){
            if((n-i)<0) break;
            count++;
            n=n-i;
        }
        return count;
    }
};



// 2nd program 

class Solution {
public:
    int firstBadVersion(int n) {
        long int low = 1;
        long int high = n ;
        long int mid;
        long int result = mid;
        while (low<=high){
            mid = (low+high)/2;
            if(isBadVersion(mid)){
                result = mid;
                high = mid -1;}
                else
                low = mid +1;
        }
        return result;
    }
    
};
