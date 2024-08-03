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

    void Even_Factors()
    {
        int iCnt = 0;

        for(iCnt = 1; iCnt < iValue; iCnt++)
        {
            if((iValue % iCnt) == 0)
            {
                if(iCnt % 2 == 0)
                {
                    cout<<iCnt<<"\n";
                }
            }
        }
    }

};

int main()
{
    int iNo = 0;

    cout<<"Enter any number :"<<"\n";
    cin>>iNo;

    Number obj(iNo);

   obj.Even_Factors();

    return 0;
}