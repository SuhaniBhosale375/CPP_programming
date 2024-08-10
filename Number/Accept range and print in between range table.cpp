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

        void Table()
        {
            int iRow = 0;
            int iCol = 0;

            cout<<"****************************************************************************"<<"\n";

            for(iRow = 1; iRow <= 10;iRow++)
            {
                for(iCol = iNo1; iCol <= iNo2; iCol++)
                {
                    cout<<iRow * iCol<<"\t";
                }
                cout<<"\n\n";
            }

            cout<<"*****************************************************************************"<<"\n";
        }
};

int main()
{
    int iValue1 = 0,iValue2 = 0;

    cout<<"Enter First number :"<<"\n";
    cin>>iValue1;

    cout<<"Enter Second number :"<<"\n";
    cin>>iValue2
    ;
    Number Obj(iValue1,iValue2);

    Obj.Table();

    return 0;
}