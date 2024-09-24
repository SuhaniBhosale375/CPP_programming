#include<iostream>
using namespace std;

class Base
{
	public:
		int A,B;
		
		Base()
		{
			cout<<"inside the base Constuctor\n";
		}
		~Base()
		{
			cout<<"Inside the base Destructor\n";
		}
		void Fun()
		{
			cout<<"Inside the Fun\n"; 
		}
};

class Derived : public Base
{
	public:
	
		int X,Y;
		
		Derived()
		{
			cout<<"Inside derived constructor\n";
		}
		~Derived()
		{
			cout<<"Inside derived Destructor\n";
		}
		void gun()
		{
			cout<<"Inside gun of derived\n";
		}
		
};

int main()
{
	Derived *ptr = NULL;
	
	ptr = new Derived;
	
	ptr-> Fun();
	ptr-> gun();
	
	
	delete ptr;
	
	return 0;
}