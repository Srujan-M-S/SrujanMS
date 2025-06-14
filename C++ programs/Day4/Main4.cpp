#include<iostream>
using namespace std;
class Data  // Abstract Class (contains virtual function)
{
	public:
		void displayOS();//Virtual function
};
class Apple : public Data // Single inheritance
{
	public:
	void displayOS(){//Class specific code for virtual
		cout<<"Apple uses iOS and macOS"<<endl;
	}
}; 
class Microsoft : public Data
{
	public:
	void displayOS()
	{
		cout<<"Microsoft uses WindowsOS"<<endl;
	}
};
int main()
{
	Microsoft m;
	m.displayOS();
	Apple a;
	a.displayOS();
//	Data d;
//	d.displayOS();
}