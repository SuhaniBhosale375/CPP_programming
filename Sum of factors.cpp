#include<ioStream>
using namespace std;

class Number
{
    public:
    int iValue;

    Number(int i)
    {
        iValue = i;
    }
    int FactorsSum()
    {
        int iCnt = 0,iSum = 0;

        for(iCnt = 1;iCnt <= iValue;iCnt++)
        {
            if((iValue % iCnt) == 0)
            {
                iSum = iSum + iCnt;
            }
        }
        return iSum;
        
    }

};

int main()
{ 
    int  iNo = 0,iRet = 0;

    cout<<"Enter  any number :\n";
    cin>>iNo;

    Number obj(iNo);

    iRet = obj.FactorsSum();

    cout<<"Summation of factors is :"<<iRet<<"\n";

    return 0;
}