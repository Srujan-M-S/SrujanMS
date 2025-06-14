#include<iostream>
using namespace std;
class A
{
	public:	
		A() { cout<<"first class"<<endl; } //Parent Class Constructor
		~A() { cout<<"delete first"<<endl; } // Parent Class Destructor
};
class B : public A
{
	public:	
		B() { cout<<"second class"<<endl; } // Child Class Constructor
		~B() { cout<<"delete second"<<endl; }// Child Class Destructor 
};
int main()
{
	B obj;  // Child class object is created....
	// Calls, Parent Constructor first, then Child Constructor
	// Once it goes out of scope, it calls, Child Destuctor then Parent
}			