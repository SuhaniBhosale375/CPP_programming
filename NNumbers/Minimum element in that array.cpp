#include<iostream>
using namespace std;

class ArrayX
{
    public:
    int iSize;
    int *Arr;

    ArrayX(int i)
    {
        cout<<"Allocating the memory for resources"<<"\n";
        iSize = i;
        Arr = new int(iSize);
    }
    ~ArrayX()
    {
        cout<<"\n"<<"Deallocating the memory for resources";

        delete[]Arr;
    }
    void Accept()
    {
        for(int iCnt = 0; iCnt < iSize; iCnt++)
        {
            cin>>Arr[iCnt];
        }
    }
    void Display()
    {
        cout<<"Elements of array"<<"\n";
        for(int iCnt = 0; iCnt < iSize; iCnt++)
        {
            cout<<Arr[iCnt]<<"\n";
        }
    }
    int Minimum()
    {
        int iCnt = 0;
        int iMin = Arr[iCnt];

        for(iCnt = 0; iCnt < iSize; iCnt++)
        {
            if(Arr[iCnt] < iMin)
            {
                iMin = Arr[iCnt];
            }
        }
        return iMin;
    }


};

int main()
{
    int iLength = 0, iRet = 0;

    cout<<"Enter the number of elements :"<<"\n";
    cin>>iLength;

    ArrayX *obj = new ArrayX(iLength);

    obj->Accept();
    obj->Display();

    iRet = obj->Minimum();
    cout<<"Maximum element in the array is:"<<iRet<<"\n";

    return 0;
}