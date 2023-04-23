#include<iostream>
using namespace std;

class number_swap{
    private: 
             int a ;
             int b ;
             int temp;

    public: 
            int getdata()
            {
                cout<<"Enter two Numbers to be swapped:";
                cin>>a>>b;
                return 0;
            }

            int putdata()
            {
                temp=a;
                a=b;
                b=temp;

                cout<<"The numbers after swapping:"<<a<<b;
                return 0;
            }
};

int main()
{
  number_swap obj;
  obj.getdata();
  obj.putdata();
  return 0;
}
