#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ofstream file("Files Data.txt");// This will create a file
	//if already same file available, it will open
	file<<"This is City Engineering COllege\n";//Write into file
	file<<"I am modifying the data in the file";//into the file
	file.close();// Closing the file is needed everytime
}