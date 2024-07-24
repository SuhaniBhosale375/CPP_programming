#include<iostream>
using namespace std;

typedef int Bool;
#define TRUE 1
#define FALSE 0

class Number
{
    public:
    int iValue;

    Number(int A)
    {
        iValue = A;
    }

    Bool CheckEvenOdd()
    {
       if(iValue % 2 == 0)
       {
            return TRUE;
       }
       else
       {
            return FALSE;
       }
    }

};

int main()
{
    int iNo = 0;
    Bool bRet = 0;

    cout<<"Enter any number :"<<"\n";
    cin>>iNo;

    Number obj(iNo);

    bRet = obj.CheckEvenOdd();

    if(bRet == TRUE)
    {
        cout<<"Number is even";
    }
    else
    {
        cout<<"Number is Odd";
    }

    return 0;
}