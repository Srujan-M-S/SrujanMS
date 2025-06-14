#include<iostream>
using namespace std;
class A
{
	public:
		A()	{	
			cout<<"Stop it....!!!!!"<<endl;
			surprise();
		}
void surprise()	{cout<<"This is secret"<<endl; }
};
int main()
{
	A obj;
	obj.surprise();
}