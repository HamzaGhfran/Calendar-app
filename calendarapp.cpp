#include <iostream>
#include <windows.h>
#include <conio.h>
#include<string>
using namespace std;
//This function shall give us the first day of the year,by ready-made formula.
int DAY(int YEAR)
{
return (YEAR * 365 + ((YEAR - 1) / 4) - ((YEAR - 1) / 100) + ((YEAR - 1) / 400)) % 7;
}
int main()
{

system("color 0B");
cout << "\n\n\n\n    ";
for (int i = 1; i <= 70; i++)
{
Sleep(60);
cout << "*";
}
cout << "\n     ";
for (int i = 1; i <= 68; i++)
{
Sleep(60);
cout << "*";
}
cout << "\n      ";
for (int i = 1; i <= 66; i++)
{
Sleep(60);
cout << "*";
}
cout << "\n       ";
for (int i = 1; i <= 64; i++)
{
Sleep(60);
cout << "*";
}
Sleep(50);
cout << "\n       *\t\t\t\t\t\t\t    *";
Sleep(50);
cout << "\n        *                   CALENDER OF THE YEAR                 *";
Sleep(50);
cout << "\n         *                                                      *";
Sleep(50);
cout << "\n         *\t\t\t\t\t\t\t  *";
Sleep(50);
cout << "\n        *                        Version 1.1                     *";
Sleep(50);
cout << "\n       *                                                          *";
cout << "\n       ";
for (int i = 1; i <= 64; i++)
{
Sleep(60);
cout << "*";
}
cout << "\n      ";
for (int i = 1; i <= 66; i++)
{
Sleep(60);
cout << "*";
}
cout << "\n     ";
for (int i = 1; i <= 68; i++)
{
Sleep(60);
cout << "*";
}
cout << "\n    ";
for (int i = 1; i <= 70; i++)
{
Sleep(60);
cout << "*";
}
system("cls");
cout << "\n\n   Calender of Year's         Introduction of Developers         Version 1.1";
cout << "\n   ________________________";
cout << "\n\n     Names       :           MOHISN HUSSAIN,ABDULLAH IQBAL,HAMZA ";
cout << "\n   ________________________";
cout << "\n\n     Roll No.   :                          (031),(002),(020)";
cout << "\n   ________________________";
cout << "\n\n     Class      :                                   BSCS ";
cout << "\n   ________________________";
cout << "\n\n     Section    :                                   1A";
cout << "\n   ________________________";
cout << "\n\n     Instructor :                            Miss Zupash Awais";
cout << "\n   ________________________";
cout << "\n\n     Institute  :                      BAHRIA UNIVERSITY,Lahore";
cout << "\n   ________________________" << endl;
int DAYS_IN_month[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
string MONTHS[12] = { "JANUARY","FEBRUARY","MARCH","APRIL","MAY","JUNE","JULY","AUGUST","SEPTEMBER","OCTOBER","NOVEMBER","DECEMBER" };
int YEAR;
int First_DAY;
cout << "Enter the Year : ";
cin >> YEAR;
//For tackling leap year,we applied this condition.
if (YEAR % 4 == 0)
{
DAYS_IN_month[1] = 29;
}
//In order to get the first day of the year we are calling this function.
First_DAY = DAY(YEAR);
cout << "------------------------------" << endl;
for (int j = 0; j <= 11; j++)
{
cout << "\n\n\t\t" << MONTHS[j] << "- " << YEAR << endl << endl;
cout << "------------------------------" << endl;
cout << "\nS M T W T F S \n" << endl;
//Forexample in january, its first day in 2020 was wednesday, inorder to empty the first SUN MON TUE etc we will start the loop from 0
//to the value of first day of the year which is provided by int DAY(); function.
//this loop is used to print the required spaces.
for (int k = 0; k < First_DAY; k++)
{
cout << "  ";
}

int WEEK = First_DAY;

for (int day = 1; day <= DAYS_IN_month[j]; day++)
{
if (WEEK > 6)
{
//if (day <= 10)
// cout << " ";
//else
// cout << " ";
cout << "\n" << day;
day > 9 ? cout << " " : cout << " ";
WEEK = 1;
}
else
{
cout << day;
day > 9 ? cout << " " : cout << " ";
WEEK++;
}
}
First_DAY = WEEK;
}
cout << endl;
cout << "------------------------------" << endl;

system("pause");
return 0;
exit(0);
}