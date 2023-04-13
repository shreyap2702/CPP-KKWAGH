#include<iostream>
using namespace std;

int main()
{
  int num1;
  
  cout<<"Enter the number:"<<endl;
  cin>>num1;
  
  if(num1>0)
  {
   cout<<"Number is positive"<<endl;
  }
  
   else if(num1<0)
  {
   cout<<"Number is negative"<<endl;
  }
  
  else
  {
   cout<<"Number is 0"<<endl;
  }
  
  return 0;
  
 }    