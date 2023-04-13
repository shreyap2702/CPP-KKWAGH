#include<iostream>
using namespace std;

int area(int,int);
int perimeter(int,int);
int main()
{
 int length , breadth,a,p;
 
 cout<<"Enter length:"<<endl;
 cin>>length;
 
 cout<<"Enter breadth:"<<endl;
 cin>>breadth;
 
 a=area(length , breadth);
 
 cout<<"Area of rectangle:"<<a<<endl;
 
 p=perimeter(length , breadth);
 
 cout<<"Perimeter of rectangle:"<<p<<endl;
 
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
 
 
