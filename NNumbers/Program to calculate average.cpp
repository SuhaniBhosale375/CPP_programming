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
            Arr = new int[iSize];
        }
        ~Array()
        {
            cout<<"Dellocating the memory of resources"<<"\n";
            delete[]Arr;
        }
        void Accept()
        {
            cout<<"Enter the array elements :"<<"\n";
            for(int iCnt = 0; iCnt < iSize; iCnt++)
            {
                cin>>Arr[iCnt];
            }
        }
        void Display()
        {
            cout<<"Elements of array are :"<<"\n";
            
            for(int iCnt = 0; iCnt < iSize; iCnt++)
            {
                cout<<Arr[iCnt];
                cout<<"\t";
            }
            cout<<"\n";
        }
};

class Maths : public Array
{
    public :

        Maths(int i) : Array(i)
        {}

        int Addition()
        {
            int iSum = 0,Avg = 0;

            for(int iCnt = 0; iCnt < iSize; iCnt++)
            {
                iSum = iSum + Arr[iCnt];
            }

            Avg = iSum/iSize;
            return Avg;
        }
};

int main()
{
    int iLength = 0;
    int iRet = 0;

    cout<<"Enter the number of array element :";
    cin>>iLength;

    Maths *obj = new Maths(iLength);

    obj->Accept();
    obj->Display();

    iRet = obj->Addition();
    
    cout<<"Addition is :"<<iRet<<"\n";
    
    delete obj;
    
    return 0;
}