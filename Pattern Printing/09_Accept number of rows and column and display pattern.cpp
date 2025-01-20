#include<iostream>
using namespace std;

/*
    Row     6
    Coloum  6

    $   $   $   $   $   $
    $   *   *   *   *   $
    $   *   *   *   *   $
    $   *   *   *   *   $
    $   $   $   $   $   $ 

   
    
*/
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
                cout<<"*"<<"\t";
            }
            cout<<"\n";
        }
};

int main()
{
    int iValue = 0;

    cout<<"Enter any value "<<"\n";
    cin>>iValue;

    Pattern obj(iValue);

    obj.Display();

    return 0;
}
