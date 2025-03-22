class Solution {
public:
    int dayOfYear(string date) {
        int year = stoi(date.substr(0,4));
        int month = stoi(date.substr(5,2));
        int days = stoi(date.substr(8,2));

        int totaldays = 0;
        int days_month[] = {0,31,28,31,30,31,30,31,31,30,31,30,31};

        if((year%100!=0&&year%4==0)||year%400==0){
            days_month[2]=29;
        }
        for(int i=1;i<month;i++){
            totaldays += days_month[i];
            }
            return (totaldays + days);

    }
};






class Solution {
public:
    string maximumOddBinaryNumber(string s) {
       
        int ones = count(s.begin(), s.end(), '1');
        int zeros = s.length() - ones;
        
        return string(ones - 1, '1') + string(zeros, '0') + "1";
    }
};


