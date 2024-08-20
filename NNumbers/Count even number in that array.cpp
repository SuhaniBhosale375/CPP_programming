#include<iostream>
using namespace std;

class Array
{
    public:

        int iSize;
        int *Arr;

        Array(int i)
        {
            cout<<"Allocating the memory for resources"<<"\n";
            iSize = i;
            Arr = new int (iSize);
        }
        ~Array()
        {
            cout<<"Dellocating the memory of resources"<<"\n";
            delete[]Arr;
        }

        void Accept()
        {
            cout<<"Enter the array elements "<<"\n";
            
            for(int iCnt = 0; iCnt < iSize;iCnt++)
            {
                cin>>Arr[iCnt];
            }
            cout<<"\n";
            
        }
        void Display()
        {
            cout<<"elements of array are "<<"\n";
            for(int iCnt = 0; iCnt < iSize;iCnt++)
            {
                cout<<Arr[iCnt];
                cout<<"\t";
            }
            cout<<"\n";
        }
};

class Maths : public Array
{
    public:

    Maths (int i) : Array(i)
    {}

    int CountEven()
    {
        int E_Cnt = 0;
        
        for(int iCnt = 0; iCnt < iSize; iCnt++)
        {
            if(Arr[iCnt] % 2 == 0)
            {
                E_Cnt++;
            }
        }

        return E_Cnt;

    }
};

int main()
{
    int iLength = 0;
    int iRet = 0;

    cout<<"Enter the number of array elemnts :"<<"\n";
    cin>>iLength;

    Maths *obj = new Maths(iLength);

    obj->Accept();
    obj->Display();

    iRet = obj->CountEven();

    cout<<"Count of even elements are :"<<iRet<<"\n";

    delete obj;

    return 0;

}