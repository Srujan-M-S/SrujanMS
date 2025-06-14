#include<iostream>
#include<vector>
using namespace std;
int main()
{
//1st way of storing values into Vector
	vector<int> Arr1={4,35,70,12,48,69,106};
//2nd way of storing values into Vector
	vector<int> Arr2={55};
	Arr2.push_back(10);
	Arr2.push_back(44);
	Arr2.push_back(75);
	Arr2.push_back(106);
//  3rd way of storing values into Vector
 	vector<int> Arr3={69};
	Arr3.insert(Arr3.begin(),110);
	Arr3.insert(Arr3.begin()+1,414);
	Arr3.insert(Arr3.begin()+2,751);
	Arr3.insert(Arr3.end(),1061);
cout<<"\n First Array : ";		
	for(int value : Arr1)
		cout<<value<<" ";
// First Array : 4 35 70 12 48 69 106 
cout<<"\n Second Array : ";		
	for(int value : Arr2)
		cout<<value<<" ";
// Second Array : 55 10 44 75 106 	
cout<<"\n Third Array : ";		
	for(int value : Arr3)
		cout<<value<<" ";
// Third Array : 110 414 751 69 1061 
	
	
	
	
}