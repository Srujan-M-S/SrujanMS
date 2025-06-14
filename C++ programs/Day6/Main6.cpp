//Compile-time Polymorphism/Function Overloading(Static Binding)
#include<iostream>
using namespace std;
class Day6
{
	public:
		void display() // Function without parameters
		{
			cout<<"Nothing is displayed"<<endl;
		}
		void display(int x)// Function with 1 parameter
		{
			cout<<"Displaying X : "<<x<<endl;	
		}
		void display(int a,int b)// Function with 2 parameters
		{
	cout<<"Displaying 2 values :"<<a<<" and "<<b<<endl;
		}
};
int main()
{
	Day6 obj;
	obj.display(20,49);
	obj.display(106);
	obj.display();
}