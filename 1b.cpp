// C++ program to convert given
// number of days in terms of
// Years, Weeks and Days
#include <bits/stdc++.h>
using namespace std;
 
#define DAYS_IN_WEEK 7
 
// Function to find year,
// week, days
void find(int number_of_days)
{
    int year, week, days;
     
    // Assume that years is
    // of 365 days
    year = number_of_days / 365;
    week = (number_of_days % 365) /
            DAYS_IN_WEEK;
    days = (number_of_days % 365) %
            DAYS_IN_WEEK;
             
    cout << "years = " << year;
    cout << "\nweeks = " << week;
    cout << "\ndays =  " << days;   
}
 
// Driver Code
int main()
{
    int number_of_days = 23;
    find(number_of_days);
    return 0;
}
 

