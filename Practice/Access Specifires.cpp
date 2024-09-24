#include<iostream>
using namespace std;

class Base
{
		//int x;
	public:
		int i;
	private:
		int j;
	protected:
		int k;
	public:
		Base()
		{
			i = 10;
			j = 20;
			k = 30;
		}
		void fun()
		{
			cout<<"Value of public i from fun : "<<i<<"\n";  //A
			cout<<"Value of private j from fun: "<<j<<"\n";  //A
			cout<<"Value of public i from fun : "<<k<<"\n";  //A
		}
};

int main()
{
	Base bobj;
	
	cout<<"Value of public i : "<<bobj.i<<"\n";        //A
	//cout<<"Value of Private j : "<<bobj.j<<"\n";       //NA
	//cout<<"Value of protected k : "<<bobj.k<<"\n";     //NA
	
	bobj.fun();
	
	return 0;
}