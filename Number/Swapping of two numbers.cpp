#include<iostream>
using namespace std;

class Numbers
{
    public:

    int iNo1,iNo2;

    Numbers(int a,int b)
    {
        iNo1 = a;
        iNo2 = b;
    }

    void Swapping()
    {
        iNo1 = iNo1 + iNo2;
    	iNo2 = iNo1 - iNo2;
	    iNo1 = iNo1 - iNo2;

        cout<<"After swapping"<<"\n";

        cout<<"Value of Number 1: "<<iNo1<<"\n";
        cout<<"Value of Number 2: "<<iNo2<<"\n";
    }
};

int main()
{

    int iValue1 = 0, iValue2 = 0;

    cout<<"Enter first number"<<"\n";
    cin>>iValue1;

    cout<<"Enter Sec number"<<"\n";
    cin>>iValue2;

    cout<<"Value of Number 1: "<<iValue1<<"\n";
    cout<<"Value of Number 2: "<<iValue2<<"\n";

	Numbers obj(iValue1,iValue2);

    obj.Swapping();

    return 0;
	
}