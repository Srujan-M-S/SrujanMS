#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;
int main()
{
	ifstream file("Files Data.txt");//used to open the file
	string str; //take a string to read the lines in file
	while(getline(file,str)) // to access multiple lines, loop
		cout<<str<<endl; // display each line
	file.close();   //close the file after usage is done.....
}