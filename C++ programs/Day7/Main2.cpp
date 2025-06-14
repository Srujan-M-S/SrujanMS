#include<iostream>
using namespace std;
class Day7
{	public:	void display()
		{	cout<<"It will show output"<<endl;  }
};
int main()
{
	Day7 obj;  //Static Object inside Stack
	obj.display(); // Calling with Stack Object
	Day7* abc = new Day7; // Create Pointer Object in Heap
	abc->display();	// Callign with Heap Object
	delete abc;  // Usage is done, delete Heap Object
	obj.display(); // Access is allowed, Scope is active
	abc->display(); // Access is denied, Scope is over.	
}