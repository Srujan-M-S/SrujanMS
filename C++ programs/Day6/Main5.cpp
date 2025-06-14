#include<iostream>
using namespace std;
class A
{
	public:	
		void function();		
};
class B : public A
{
	public:	
		void function()
		{
			cout<<"writing into virtual inside B"<<endl;
		}
};
class C: public A
{
	public:	
		void function()
		{
			cout<<"writing into virtual inside C"<<endl;
		}	
};
int main()
{
	B obj;
	obj.function();
	C obj1;
	obj1.function();
}