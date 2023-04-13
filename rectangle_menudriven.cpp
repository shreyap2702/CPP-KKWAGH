#include<iostream>
using namespace std;

int area(int,int);
int perimeter(int,int);
int main()
{
 int length , breadth,a,p,ch,ch1;
  do
 {
 
 cout<<"Enter length:"<<endl;
 cin>>length;
 
 cout<<"Enter breadth:"<<endl;
 cin>>breadth;
 
 a=area(length , breadth);
 p=perimeter(length , breadth);
 

  cout<<"Enter your choice:\n1.Area\n2.Perimeter\n3.Default"<<endl;
  cin>>ch;
  
  switch (ch)
  {
    case 1: cout<<"Area of rectangle:"<<a<<endl;
            break;
            
    case 2: cout<<"Perimeter of rectanlge:"<<p<<endl;
            break;
            
    case 3: default:
            cout<<"Wrong choice";
   }
   
   cout<<"Do you want to continue?\n1.Yes\n2.No"<<endl;
   cin>>ch1;
   
  }
  
  while(ch1==1) ;                    
 return 0;
}

int area( int length , int breadth)
{
 int area;
  area=length*breadth;
  return area;
   
} 

int perimeter( int length , int breadth)
{
 int perimeter;
 perimeter=2*length+2*breadth;
 return perimeter;
}  
