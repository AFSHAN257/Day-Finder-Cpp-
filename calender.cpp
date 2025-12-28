#include <iostream>
using namespace std;

int main() 
{
    int day, month, year ;
    int final , total = 0;
    int yp, lday ;
    int weekday;
    string dayname;

    cout<< "\n\n\t\t\t\t\t\033[31mDAY FINDER\n\033[0m";
    cout << "\n\n\t\t\t\tEnter date (1-31): ";
    cin >> day;

    cout << "\n\t\t\t\tEnter month (1-12): ";
    cin >> month;

    cout << "\n\t\t\t\tEnter year: ";
    cin >> year;

     total = ( year - 1 ) * 365 ;
     
    
     lday = (year - 1) / 4;

    if ((year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)) && month > 2)
   {
    lday = lday + 1;
   }

     final = total + lday;

int jan = 31;
int feb = 28;  
int mar = 31;
int apr = 30;
int may = 31;
int jun = 30;
int jul = 31;
int aug = 31;
int sep = 30;
int oct = 31;
int nov = 30;
int dec = 31;

if (year % 4 == 0)
{
    feb = 29;
}
else
{
    feb = 28;
}

if (month == 1)
{
    final = final + 0;
}
else if (month == 2)
{
    final = final + jan;
}
else if (month == 3)
{
    final = final + jan + feb;
}
else if (month == 4)
{
    final = final + jan + feb + mar;
}
else if (month == 5)
{
    final = final + jan + feb + mar + apr;
}
else if (month == 6)
{
    final = final + jan + feb + mar + apr + may;
}
else if (month == 7)
{
    final = final+ jan + feb + mar + apr + may + jun;
}
else if (month == 8)
{
    final = final+ jan + feb + mar + apr + may + jun + jul;
}
else if (month == 9)
{
    final = final + jan + feb + mar + apr + may + jun + jul + aug;
}
else if (month == 10)
{
    final = final + jan + feb + mar + apr + may + jun + jul + aug + sep;
}
else if (month == 11)
{
    final = final + jan + feb + mar + apr + may + jun + jul + aug + sep + oct;
}
else if (month == 12)
{
    final = final + jan + feb + mar + apr + may + jun + jul + aug + sep + oct + nov;
}

    final = final + day;
    weekday = final % 7;

    if (weekday == 0)
{
    dayname = "Saturday";
}
else if (weekday == 1)
{
    dayname = "Sunday";
}
else if (weekday == 2)
{
    dayname = "Monday";
}
else if (weekday == 3)
{
    dayname = "Tuesday";
}
else if (weekday == 4)
{
    dayname = "Wednesday";
}
else if (weekday == 5)
{
    dayname = "Thursday";
}
else
{
    dayname = "Friday";
}

    cout <<"\n\t\t\t\t==============================\n" <<endl;
    cout << " \t\t\t\t\033[32mDay on this date is: " << dayname;
    cout<< "\n\n\t\t\t\t\033[0m==============================\n" <<endl;
 
    return 0;
}
