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
    int Factorial()
    {
        int iCnt = 0,iFact = 1;
        for(iCnt = 1; iCnt <= iValue;iCnt++)
        {
            iFact = iFact * iCnt;
        }
        return iFact;
    }

};

int main()
{
    int  iNo = 0,iRet = 0;

    cout<<"Enter  any number :\n";
    cin>>iNo;

    Number obj(iNo);

    iRet = obj.Factorial();

    cout<<"Factorial of given number is:"<<iRet<<"\n";
    
    return 0;
}