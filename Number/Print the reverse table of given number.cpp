#include<iostream>
using namespace std;

class Number
{
    public:
        int iNo;

        Number(int A)
        {
            iNo = A;
        }

        void Table()
        {
            int iCnt = 0;

            cout<<"*******************************"<<"\n";

            for(iCnt = 10; iCnt >= 1; iCnt--)
            {
                cout<<iNo*iCnt<<"\n\n";
            }
            cout<<"*******************************"<<"\n";
        }
};

int main()
{
    int iValue = 0;

    cout<<"Enter any number :"<<"\n";
    cin>>iValue;

    Number Obj(iValue);

    Obj.Table();

    return 0;
}