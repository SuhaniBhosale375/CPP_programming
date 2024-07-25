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
    void DisplayFactors()
    {
        int iCnt = 0;

        for(iCnt = 1;iCnt <= iValue;iCnt++)
        {
            if((iValue % iCnt) == 0)
            {
                cout<<iCnt<<"\t";
            }
        }
        
    }

};

int main()
{
    int  iNo = 0;

    cout<<"Enter  any number :\n";
    cin>>iNo;

    Number obj(iNo);

    obj.DisplayFactors();

    return 0;
}