#include<iostream>
using namespace std;
int main(){
int a;
cout<<"enter the number for seconds:";
cin>>a;
int hours=a/3600;
int minutes=(a%3600)/60;
int seconds=a%60;
cout<<hours;
cout<<":";
cout<<minutes;
cout<<":";
cout<<seconds;
return 0;
}