#include<iostream>
using namespace std;

typedef int BOOL;
#define TRUE 1
#define FALSE 0

class Number
{
    public:
        int iNo;

        Number(int A)
        {
            iNo = A;
        }

        int SumFactors(int iNo)
        {

            int iCnt = 0;
            int iSum = 0;

            for(iCnt = 1; iCnt <= (iNo/2); iCnt++)
            {
                if((iNo % iCnt) == 0)
                {
                    iSum = iSum + iCnt;
                }
            }

            return iSum;
        }

        BOOL CheckPerfect()
        {
            int iAns = 0;

            iAns = SumFactors(iNo);

            if(iAns == iNo)
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
    int iValue = 0;
    BOOL bRet = false;

    cout<<"Enter any number :"<<"\n";
    cin>>iValue;

    Number Obj(iValue);

    bRet = Obj.CheckPerfect();

    if(bRet == TRUE)
    {
        cout<<"Number if perfect";
    }
    else
    {
        cout<<"It is not a perfect number";
    }

    return 0;
}