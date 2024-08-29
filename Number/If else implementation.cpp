#include<iostream>
using namespace std;

class Number
{
    public:

        int iNo;

        Number(int a)
        {
            iNo = a;
        }
        void CheckNumber()
        {
            if(iNo < 50)
            {
                cout<<"Small";
            }
            else if(iNo > 50 && iNo < 100)
            {
                cout<<"Medium";
            }
            else
            {
                cout<<"Greater";
            }
        }
};

int main()
{
    int iValue = 0;

    cout<<"Enter any number"<<"\n";
    cin>>iValue;

    Number nobj(iValue);

    nobj.CheckNumber();

    return 0;
}