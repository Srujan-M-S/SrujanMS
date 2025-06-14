#include<iostream>
using namespace std;
class A  // Parent class A
{
	public: 
		void add(int a, int b) 
		{
			cout<<"Sum is :"<<(a+b)<<endl; 	
		}
};
class B : public A // Child class B inheriting A
{
	public : 
		void display()
		{  	add(40,29);		}// Accessing the parent class function
};				
int main()
{
	B obj1; //CHild class object
	A obj2; // Parent class object
	obj1.display(); // Child class object and child class function
	obj1.add(100,6);// Child class object and parent class function
}