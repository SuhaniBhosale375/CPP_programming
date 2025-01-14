#include<iostream>
using namespace std;


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
            for(int i = 1; i <= iRow; i++)
            {    
                for(int j = 1; j <= iCol; j++)
                {
                    if((i == 1) ||  (j == (iCol/2 +1)) || ((i == iCol )&& (j <= (iCol/2)) && j > 1 ) || ((i == iCol - 1 || i == iCol - 2) &&(j == 1)  ))
                    {
                            cout<<"*"<<"\t";
                    }
                    else
                    {
                            cout<<" \t";
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

    cout<<"Enter coloumn number "<<"\n";
    cin>>iValue2;

    Pattern obj(iValue1,iValue2);

    obj.Display();

    return 0;
}
