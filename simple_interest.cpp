#include<iostream>
using namespace std;

int main()
{
 int amount,time_period,rate,simple_interest;
 
 cout<<"Enter Amount:"<<endl;
 cin>>amount;
 
 cout<<"Enter Time Period:"<<endl;
 cin>>time_period;
 
 cout<<"Enter rate:"<<endl;
 cin>>rate;
 
 simple_interest=(amount*time_period*rate)/100;
 
 cout<<"Simple Interest is:"<<simple_interest;
 
 return 0;
 
} 
 
