//PROJECT: Student Record Management System using C++
//PROJECT is created by 23AIML007,23AIML011,23ZIML025;
#include<iostream>
using namespace std;
string roll_no[30],name[30],Class[30],course[30],mobile_no[30],admission_year[30];
//arrays for storing students data.
int total=0; //to store all data
void enter()
{
int ch=0;
cout<<"How many students do u want to enter??"<<endl;
cin>>ch;
