#include<iostream>
using namespace std;
class BatchD
{
	int x, y;
	public : 
		BatchD() // Constructor
		{
			cout<<"Welcome to the program of Programs"<<endl;
		}
		BatchD(int a, int b)  // Parameterized Constructor
		{
			x=a;
			y=b;
			cout<<"\nValue of a and b are : "<<a<<" and "<<b<<endl; 
		}
		BatchD(BatchD &objK) // Copy Constructor
		{
			x=objK.x;
			y=objK.y;
			cout<<"\nIt is copying things from the existing object";	
			cout<<"\nValues of x and y in objK are :"<<x<<" and "<<y<<endl;
		}
};
int main()
{
	BatchD obj1;  // Object is created and constructor is called automatically
	BatchD obj2(10,59);
	BatchD obj3 = obj2;
}