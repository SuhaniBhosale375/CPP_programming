#include<iostream>
using namespace std;

class Array
{
    public:

        int iSize;
        int *Arr;
        int iValue;

        Array(int i,int j)
        {
            cout<<"Allocating the memory for resources"<<"\n";
            iSize = i;
            iValue = j;
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

    Maths (int i,int j) : Array(i,j)
    {}

    int Frequency()
    {
        int iFreq = 0;
        for(int iCnt = 0; iCnt < iSize; iCnt++)
        {
            if(Arr[iCnt] == iValue)
            {
                iFreq++;
            }
        }
        return iFreq;
    }
};

int main()
{
    int iLength = 0;
    int iRet = 0,iNo = 0;

    cout<<"Enter the number of array elemnts :"<<"\n";
    cin>>iLength;

    cout<<"Enter the element to find that frequency :"<<"\n";
    cin>>iNo;

    Maths *obj = new Maths(iLength,iNo);

    obj->Accept();
    obj->Display();

    iRet = obj->Frequency();

    cout<<"Frequecy of given number is :"<<iRet<<"\n";

    delete obj;

    return 0;

}