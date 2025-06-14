#include<iostream>
using namespace std;
class A
{	public:	
		void show()//Original function inside the Parent
		{
			cout<<"Welcome to City Engineering College"<<endl;
		}		
};
class B : public A
{	public:	
		void show()//Overriding it inside the Child
		{
			cout<<"This is BatchD"<<endl;
		}
};
int main()
{
	B obj;
	obj.show();  // It will call the function inside Child
	A obj1;
	obj1.show(); // It will call the function inside Parent
}
//class C: public A
//{
//	public:	
//		void show()
//		{
//			cout<<"writing into virtual inside C"<<endl;
//		}	
//};