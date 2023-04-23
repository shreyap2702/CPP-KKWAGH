#include<iostream>
using namespace std;

class operation_1{
    private: int num_1;
             int num_2;
             int ch;
             int sum;
             int diff;
             int product;
             int division;

    public: int getdata()
            {
                cout<<"Enter Two Numbers:";
                cin>>num_1>>num_2;
                return 0;

            }

            int putdata()
            {
                cout<<"Enter Choice of Operation\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division";
                cin>>ch;

                switch(ch)
                {
                    case 1: sum=num_1+num_2;
                            cout<<"Sum of two numbers: "<<sum;
                            break;

                    case 2: diff=num_1-num_2;
                            cout<<"Difference of two numbers:"<<diff;
                            break;

                    case 3: product=num_1*num_2;
                            cout<<"Product of two numbers: "<<product;
                            break;

                    case 4: division=num_1/num_2;
                            cout<<"Division of two numbers: "<<division;
                            break;

                    case 5: default:
                            cout<<"Wrong choice";
                            break;
                }

                return 0;
            }       
};

int main()
{
    operation_1 obj;
    obj.getdata();
    obj.putdata();
    return 0;
}
