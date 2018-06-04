// ConsoleApplication3.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using namespace std;
class CDate
{
private:
 int year;
 int month;
 int day;
public:
 void setvalue(int y, int m, int d)
 {
  year = y;
  month = m;
  day = d;
 }
 void operation()
 {
  if (year % 4 == 0 || year % 100 != 0 && year % 400 == 0)
  {
   day++;
   int a[12] = { 31,29,31,30,31,30,31,31,30,31,30,31 };
   if (day > a[month - 1])
   {
    day = day - a[month - 1];
    month++;
    if (month > 12)
    {
     month = month - 12;
     year++;
    }
   }
  }
  else
  {
   day++;
   int a[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
   if (day > a[month - 1])
   {
    day = day - a[month - 1];
    month++;
    if (month > 12)
    {
     month = month - 12;
     year++;
    }
   }
  }
 }
 void display()
 {
  cout << year << "." << month << "." << day << endl;
 }
 int limit(int m,int d)
 {
  int b, c;
  b = m;
  c = d;
  if (year % 4 == 0 || year % 100 != 0 && year % 400 == 0)
  {
   int a[12] = { 31,29,31,30,31,30,31,31,30,31,30,31 };
   if (b <= 12)
   {
    if (c >= a[b-1])
    {
     cout << "日期无效" << endl;
     return 1;
    }
   }
   else 
   {
    cout << "日期无效" << endl;
    return 1;
   }
   //return 1;
  }
  else
  {
   int i[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
   if (b <= 12)
   {
    if (c >= i[b - 1])
    {
     cout << "日期无效" << endl;
     return 1;
    }
   }
   else
   {
    cout << "日期无效" << endl;
    return 1;
   }
   //return 1;
  }
 }
};
int main()
{
 CDate od;
 int a, b, c;
 cin >> a >> b >> c;
 int m;
 m=od.limit(b, c);
 if (m == 1) 
 {
  return 0;
 }
 od.setvalue(a, b, c);
 od.operation();
 od.display();
 return 0;
}