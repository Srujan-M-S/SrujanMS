//Creating a program file by executing another program...
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ofstream file("WorkingFiles.cpp");	
	file<<"#include<iostream>\n";
	file<<"using namespace std;\n";
	file<<"int main()\n";
	file<<"{\n";
	file<<"cout<<\"Displaying data from Program\"\n";
	file<<"return 0\n";
	file<<"}\n";	
	file.close();
}