#include<iostream>
using namespace std;

class table_1{
    private: int num_1;
             int multiple;

    public: int getdata()
            {
                cout<<"Enter Number to write Multiplication table: ";
                cin>>num_1;
                return 0;
            }

            int putdata()
            {
                for(int i=0 ; i<=10 ; i++)
                {
                    multiple=num_1*i;
                    cout<<"  "<<num_1<<"*  "<<i<<" = "<<multiple<<endl;
                }

            return 0;
            }
};

int main()
{
    table_1 obj;
    obj.getdata();
    obj.putdata();
    return 0;
}