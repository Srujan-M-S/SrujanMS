#include<iostream>
using namespace std;
class Day4
{
	private:
		string name;
		int age;
	public:
		void input(string s, int a)
		{	
			name=s;
			age=a;	
		}
		void output()
		{
cout<<"Name : "<<name<<" and age :"<<age<<endl;
		}	
};

int main(){
	Day4 obj;
	obj.input("Eren Yeager",22);
	obj.output();
}