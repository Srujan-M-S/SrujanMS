#include<iostream>
using namespace std;
class Day7
{
	string name;
	public:
		void setName(string str)
		{
			name=str;
		}
		void getName()
		{
			cout<<"Name : "<<name<<endl;
		}	
};
int main()
{
	int n,i;
	cin>>n;
	Day7* students = new Day7[n];
	string str;
	for(i=0;i<n;i++)
	{
		cin>>str;
		students[i].setName(str);
	}
	for(i=0;i<n;i++)
	{
		students[i].getName();
	}
	delete[] students;
	Day7 v184;
	v184.setName("Vinay");
	Day7 r420;
	r420.setName("Rakesh");
	Day7 s106;
	s106.setName("Shetty");
	v184.getName();
	r420.getName();
	s106.getName();
}