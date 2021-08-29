#include<bits/stdc++.h>
 
using namespace std;
 
class Time
{
    int seconds;
    int hh,mm,ss;
    public:
    getTime(void);
    convertIntoSeconds(void);
    displayTime(void);
};
 
Time::getTime(void)
{
    cout << "Enter time:" << endl;
    cout << "Hours?   ";
	cin >> hh;
    cout << "Minutes? ";
	cin >> mm;
    cout << "Seconds? ";
	cin >> ss;
}
 
Time::convertIntoSeconds(void)
{
    seconds = hh*3600 + mm*60 + ss;
}
 
Time::displayTime(void)
{
    cout << "The time is = " << setw(2) << setfill('0') << hh << ":"<< setw(2) << setfill('0') << mm << ":"<< setw(2) << setfill('0') << ss << endl;
    cout << "Time in total seconds: " << seconds;
}
 
int main()
{
    Time T; //creating objects
     
    T.getTime();
    T.convertIntoSeconds();
    T.displayTime();
     
    return 0;
}

