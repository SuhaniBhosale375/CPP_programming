#include<iostream>
using namespace std;

/*
    Row     4
    Coloum  4

    1   *   *   *   
    *   2   *   *
    *   *   3   *
    *   *   *   4
   
*/
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

            if(iRow != iCol)  //  filter
            {
                printf("Row numbers and colum numbers are different\n");
                return;
            }
            for(i = 1; i <= iRow; i++)
            {    
                for(j = 1; j <= iCol; j++)
                {
                if(i <= j)
                {
                        printf("&\t");
                }
                else
                {
                        printf("*\t");
                }
                }
                printf("\n"); 
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