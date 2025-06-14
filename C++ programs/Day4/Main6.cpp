#include<iostream>
using namespace std;
class A
{
	public:
		A()
		{	
			cout<<"Stop it....!!!!!"<<endl;
		}
		void surprise()
		{
			cout<<"This is Surprise"<<endl;	
		}	
		
};
void surprise()	   { 	cout<<"This is secret"<<endl;    }
int main()
{
	A obj;
	surprise();
	obj.surprise();
}