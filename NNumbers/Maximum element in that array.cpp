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
            cout<<"\n"<<"Dealocating the memory of resources";
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
                cout<<Arr[iCnt]<<"\t";
            }
        }
        int Maximum()
        {
            int iMax = 0;

            for(int iCnt = 0; iCnt < iSize; iCnt++)
            {
                if(Arr[iCnt] > iMax)
                {
                    iMax = Arr[iCnt];
                }
            }
            return iMax;
        }
     
};

int main()
{
    int iLength = 0, iRet = 0;

    cout<<"Enter the number of array elements"<<"\n";
    cin>>iLength;

    ArrayX *obj = new ArrayX(iLength);

    obj->Accept();
    obj->Display();

    iRet = obj->Maximum();
    cout<<"\n"<<"Maximum element is : "<<iRet<<"\n";

    delete(obj);

    return 0;
}