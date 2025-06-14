#include<iostream>
#include<exception>
using namespace std;
int main()
{
	int x;
	try{
		cin>>x;
		if (x==0)
			throw 404;
		else if (x==1)
			throw "This is wrong...!!!";
	}
	catch(int e)
	{
		cout<<"Page not found...."<<e<<endl;
	}
	catch(const char* s)
	{
		cout<<"String error : "<<s<<endl;
	}
	cout<<":::This is outside the TRY CATCH....:::";
}