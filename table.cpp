#include<iostream>
using namespace std;

int main()
{
 int num,multiply;
 
 cout<<"Enter Number:"<<endl;
 cin>>num;
 
 cout<<"Multipilcation table:"<<endl;
 
 for(int i=0; i<=10; i++)
 {
   multiply=num*i;
   cout<<" "<<num<<"* "<<i<<" ="<<multiply<<endl;
    
 }
 
 return 0;
 
}  