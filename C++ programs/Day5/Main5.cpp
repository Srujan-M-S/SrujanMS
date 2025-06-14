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
		void CS_Data()
		{	
		cout<<"CS is Computer Science"<<endl;
		}	
};
class IOT:public Principal // 2nd Child class of Principal 
{
	public:
		void IOT_Data()
		{
		cout<<"IS is not IOT"<<endl;
		}	
};
class Student:public CSE, public IOT
{
	public:
		void function()
		{
			cout<<"This is SuperChild Class"<<endl;
		}	
};
int main()
{
	CSE cs;			// Parent Constructor gets called
	cs.CS_Data();   
	cs.message();	// Parent is accessed with 1st Child 
	IOT io;			// Parent Constructor gets called
	io.IOT_Data();
	io.message();	// Parent is accessed with 2nd Child
}