#include<iostream>
using namespace std;

class employee
{
  private:
         char name[20];
         int id,salary;
  
  public:
         int getdata()
         {
          cout<<"Enter employee name: "<<endl;
          cin>>name;
          
          cout<<"Enter employee id: "<<endl;
          cin>>id;
          
          cout<<"Enter salary of employee: "<<endl;
          cin>>salary;
          
          return 0;
         }
         
         int show()
         {
          cout<<"Employee name is: "<<name<<endl;
          cout<<"Employee id is: "<<id<<endl;
          cout<<"Employee salary is: "<<salary<<endl;
          return 0;
         }
         
};

int main()
{
  employee obj[3];
  
  for(int i=0;i<=2;i++)
   {
    obj[i].getdata();
    
   }
   
  for(int i=0;i<=2;i++)
  {
   obj[i].show();
  return 0;
 } 