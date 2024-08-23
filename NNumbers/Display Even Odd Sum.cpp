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

    int SumEvenOdd()
    {
        int E_Cnt = 0,O_Cnt = 0,E_Sum = 0,O_Sum = 0;
        
        for(int iCnt = 0; iCnt < iSize; iCnt++)
        {
            if(Arr[iCnt] % 2 == 0)
            {
                E_Sum = E_Sum + Arr[iCnt];
            }
            else 
            {
                O_Sum = O_Sum + Arr[iCnt];
            }
        }

        cout<<"Sum of even elements is :"<<E_Sum<<"\n";
        cout<<"Sum of odd elements is :"<<O_Sum<<"\n";

    }
};

int main()
{
    int iLength = 0;

    cout<<"Enter the number of array elemnts :"<<"\n";
    cin>>iLength;

    Maths *obj = new Maths(iLength);

    obj->Accept();
    obj->Display();

    obj->SumEvenOdd();

    delete obj;

    return 0;

}