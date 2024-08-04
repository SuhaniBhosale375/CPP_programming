#include<iostream>
using namespace std;

class Number
{
    public:

        int iNo1,iNo2;

        Number(int A,int B)
        {
            iNo1 = A;
            iNo2 = B;
        }

        int Maximum()
        {
            int iMax = 0;

            if(iNo1 < iNo2)
            {
                iMax = iNo2;
            }
            else
            {
                iMax = iNo1;
            }

            return iMax;
        }
};

int main()
{

    int iValue1 = 0;
    int iValue2 = 0;
    int iRet = 0;

    cout<<"Enter First number :"<<"\n";
    cin>>iValue1;

    cout<<"Enter Sec number :"<<"\n";
    cin>>iValue2;

    Number obj(iValue1,iValue2);

    iRet = obj.Maximum();

    cout<<"Maximum number is :"<<iRet<<"\n";

    return 0;
}