#include<iostream>
using namespace std;
int main()
{
// Creating infinite loop without using 
// while, for or do while loops
int a = 5;
k : 
	a = a + 10; 
	cout<<a;
	if (a<2)
		goto h;  
	else
		goto k;
h:
	cout<<a;








return 0;
}