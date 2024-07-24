#include<iostream>
using namespace std;

class Arithematic
{
    public:
    int iValue1, iValue2,iAns;

    Arithematic()
    {
        iValue1 = 0;
        iValue2 = 0;
    }
    Arithematic(int A,int B)
    {
        iValue1 = A;
        iValue2 = B;
    }

    int Addition()
    {
        iAns = iValue1 + iValue2;
        return iAns;
    }

};

int main()
{
    int iNo1 = 0, iNo2 = 0,iRet = 0;

    cout<<"Enter First number :"<<"\n";
    cin>>iNo1;

    cout<<"Enter second number :"<<"\n";
    cin>>iNo2;

    Arithematic obj(iNo1,iNo2);

    iRet = obj.Addition();

    cout<<"Addition is :"<<iRet<<"\n";

    return 0;
}