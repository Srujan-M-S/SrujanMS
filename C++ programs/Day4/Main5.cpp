#include<iostream>
using namespace std;
class A
{
	private:
		int kills=69;
		string name = "Sasuke";
		friend void access(A obj);
};
void access(A obj)
{
cout<<"The Ninja "<<obj.name;
cout<<" has killed "<<obj.kills<<" enemies"<<endl;
}
int main()
{
	A obj;
	access(obj);
}