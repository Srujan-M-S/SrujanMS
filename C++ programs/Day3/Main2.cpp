#include<iostream>
using namespace std;
class BatchD
{
	int roll;  //private variable by default
	char gender; // private variable by default
	public : 
		BatchD() // Constructor
		{
			cout<<"TOP LEVEL SHITT"<<endl;
		}
		int add();  //public function 
		void display() // public function
		{		
				roll=106; //private access inside class
				gender='M';
				cout<<"SHOW OFF "<<roll<<" "<<gender;
		}
};
int BatchD::add() //Scope resolution operator
{
	cout<<"\nAddition is done......";
	return 0;
}
int main()
{
	BatchD obj1; //Creating the object 
	obj1.display(); //calling the function with object 
	obj1.add(); 
	return 0;
}