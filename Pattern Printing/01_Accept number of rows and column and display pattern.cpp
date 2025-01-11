#include<iostream>
using namespace std;

//  4
//  1   *   2   *   3   *   4   *  


class Pattern
{
    public:
        int iNo;

        Pattern()
        {
            iNo = 0;
        }
        Pattern(int i)
        {
            iNo = i;
        }

        void Display()
        {
            int iCnt = 0;

            if(iNo < 0)           // Updater
            {
                iNo = -iNo;
            }
            for(iCnt = 1; iCnt <= iNo; iCnt++)
            {
                cout<<iCnt<<"\t*\t";
            }
        }
};

int main()
{
    int iValue = 0;

    cout<<"Enter number "<<"\n";
    cin>>iValue;

    Pattern obj(iValue);

    obj.Display();

    return 0;
}