#include<iostream>
using namespace std;

/*
    Row     6
    Coloum  6

    $   *   *   *   *   $
    $   *   *   *   *   $
    $   *   *   *   *   $
    $   *   *   *   *   $
    $   *   *   *   *   $ 

   
    
*//

class Pattern
{
    public:
        int iRow;
        int iCol;

        Pattern()
        {
            iRow = 0;
            iCol = 0;
        }
        Pattern(int a,int b)
        {
            iRow = a;
            iCol = b;
        }

        void Display()
        {
            int i = 0, j = 0;

            for(i = 1; i <= iRow; i++)
            {    
                for(j = 1; j <= iCol; j++)
                {
                if(j == 1 || j == iCol)
                {
                       cout<<"$"<<"\t";
                }
                else
                {
                        cout<<"*"<<"\t";
                }
                }
                cout<<"\n"; 
            }    
        }
};

int main()
{
    int iValue1 = 0,iValue2 = 0;

    cout<<"Enter Row number "<<"\n";
    cin>>iValue1;

    cout<<"Enter Row number "<<"\n";
    cin>>iValue2;

    Pattern obj(iValue1,iValue2);

    obj.Display();

    return 0;
}
