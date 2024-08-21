#include<iostream>
using namespace std;

class Maths
{
    public:

        int iSize;
        int *Arr;
        int iValue;

        Maths(int i,int j)
        {
            cout<<"Allocating the memory for resources"<<"\n";
            iSize = i;
            iValue = j;
            Arr = new int (iSize);
        }
        ~Maths()
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

        bool Occurence()
        {
            bool flag = false;

            for(int iCnt = 0; iCnt < iSize; iCnt++)
            {
                if(Arr[iCnt] == iValue)
                {
                   flag = true;
                   break;
                }
            }
            return flag;
        }
};

int main()
{
    int iLength = 0;
    bool bRet = false;
    int iNo = 0;

    cout<<"Enter the number of array elemnts :"<<"\n";
    cin>>iLength;

    cout<<"Enter the element to find that frequency :"<<"\n";
    cin>>iNo;

    Maths *obj = new Maths(iLength,iNo);

    obj->Accept();
    obj->Display();

    bRet = obj->Occurence();

    if(bRet == true)
    {
        cout<<"Given number is occured in the array "<<"\n";
    }
    else
    {
        cout<<"Given number is not occured"<<"\n";
    }

    delete obj;

    return 0;

}