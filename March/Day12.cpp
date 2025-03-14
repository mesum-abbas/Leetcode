class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> result;
        for(int i=1;i<=n;i++){
            if(i%3==0 && i%5==0){
                result.push_back("FizzBuzz");
                
            }
            else if(i%3==0){
                result.push_back("Fizz");
            }
            else if(i%5==0){
                result.push_back("Buzz");
            }
            else {
                result.push_back(to_string(i));
            }
        }
        return result;
        
    }
};







class Solution {
public:
    bool isUgly(int n) {
        if(n!=0){
            int prime[3]={2,3,5};
            for(int i=0;i<3;++i){
                while(n%prime[i]==0){n/=prime[i];}
            }
        }
        return n==1;
    }
};





class Solution {
public:
    bool canWinNim(int n) {
        
    if(n%4==0){
        return false;
    }
    else return true;
    }
};
