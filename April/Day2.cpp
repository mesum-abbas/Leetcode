class Solution {
public:
    string dayOfTheWeek(int day, int month, int year) {
        int daysofmonth[]={0,31,28,31,30,31,30,31,31,30,31,30,31};
        string daysofweak[] = {"Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"};
        int sum = 4;
        for(int i=1971;i<year;i++){
            if(i%4==0)
            sum = sum + 366;
            else
            sum = sum + 365;
        }
        for(int i=1;i<month;i++){
            if(i==2&&(year%4==0))sum++;
            sum = sum + daysofmonth[i];
                    }
        sum = sum + day;
        return daysofweak[sum%7];
    }
};
