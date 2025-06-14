#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ofstream file("Files Data.txt",ios::app);	
	//Above line is using ios and app
// ios : input output stream
// app : appending into the file	
	file<<"This is the new data after the old one...";
// Above line will be added at the end of existing data	
	file.close();   //close the file after usage is done.....
}