#include<iostream>
using namespace std;

class Maths
{
    public: 

        int iNo1,iNo2;
        
        Maths(int a,int b)
        {
            iNo1 = a;
            iNo2 = b;
        }

        int Divide()
        {
            int iAns = 0;
            if(iNo2 == 0)
            {
                return -1;
            }
            
            iAns = iNo1/iNo2;

            return iAns;

        }
};

int  main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    int iRet = 0;

    cout<<"Enter First number :"<<"\n";
    cin>>iValue1;

    cout<<"Enter Sec number :"<<"\n";
    cin>>iValue2;

    Maths obj(iValue1,iValue2);

    iRet = obj.Divide();

    cout<<"Division is :"<<iRet<<"\n";

    return 0;
}
