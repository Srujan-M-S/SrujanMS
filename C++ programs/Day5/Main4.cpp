#include<iostream>
using namespace std;
class Tyres  // Parent class Tyres
{
	public: 
		void wheels() 
		{
			cout<<"Tyres are accessed"<<endl; 	
		}
};
class Engine // Parent class Engine
{
	public : 
		void start()
		{  	
			cout<<"Engine started"<<endl;
		}
};				
class Car : public Tyres, public Engine
{		//Child class Car inhereting both Tyres and Engine
	public:
		void buy()
		{
			cout<<"We are going to the buy the car"<<endl;
		}
};
int main()
{
	Car obj1; //Child class object
	obj1.buy(); // Child class object and child class function
	obj1.start();// Child class object and parent1 function
	obj1.wheels();// Child class object and parent2 function
}