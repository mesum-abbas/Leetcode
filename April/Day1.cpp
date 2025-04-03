class Solution {
public:
    int splitNum(int num) {
        vector<int> digit;
        while(num!=0){
            digit.push_back(num%10);
            num/=10;
            
        }
        sort(digit.begin(),digit.end());
        int n = digit.size(); 
        int num1=0;
        int num2=0;
        for(int i=0;i<n;i++){
                if(i%2==0){
                    num1 = (num1*10) + digit[i];
                }
                else{
                    num2 = (num2 * 10) + digit[i];
                }
        }
        return num2+num1;
    }
};
