//#include<iostream>
//using namespace std;
//class Day7
//{
//	public:
//		int add(int a,int b)	{return a+b; }
//};
//int main()
//{
//	Day7 h;
//	int m = h.add(10,59);
//	cout<<m;
//	return 0;
//}
//
//
#include<iostream>
using namespace std;
class Day7
{
	public:
		void add(int a,int b)	{cout<<a+b; }
};
int main()
{
	int k; 		// Memory allocated inside Stack
	k = 106; // Value stored inside Stack	
	int* j = new int;// Memory allocated inside Heap 
	*j = 106; // Value stored inside Heap
	delete &j; // Variable j getting deleted (Heap)
//	delete k; // Variable k cannot be deleted (Stack)
// The above line will give error		
	cout<<j<<endl;
	cout<<k<<endl;
}