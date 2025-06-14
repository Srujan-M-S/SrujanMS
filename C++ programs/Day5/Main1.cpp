#include<iostream>
using namespace std;
class Principal //Parent class for ALL
{
	public:
		Principal() // Parent class Constructor
		{
			cout<<"Welcome to City College"<<endl;
		}
		void message()
		{
			cout<<"I am the Principal, remember that..!!"<<endl;
		}	
};
class CSE:public Principal // 1st Child class of Principal 
{
	public:
		CSE() // Parent class Constructor
		{
			cout<<"Welcome to CSE"<<endl;
		}
		void CS_Data()
		{	
		cout<<"CS is Computer Science"<<endl;
		}	
};
class IOT:public Principal // 2nd Child class of Principal 
{
	public:
		IOT() // Parent class Constructor
		{
			cout<<"Welcome to IOT"<<endl;
		}
		void IOT_Data()
		{
		cout<<"IS is not IOT"<<endl;
		}	
};
class Student:public CSE, public IOT // Child class of CSE & IOT
{
	public:
		void function()
		{
			cout<<"This is SuperChild Class"<<endl;
		}	
};
int main()
{
	Student s;
	s.CS_Data();
	s.IOT_Data();
	s.function();
	s.CSE::message();
	s.IOT::message();
}