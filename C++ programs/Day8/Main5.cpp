#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ofstream file("EvenOdd.cpp");
	file<<"#include<iostream>\n";
	file<<"using namespace std;\n";
	file<<"int main()\n";
	file<<"{\n";
	file<<"int n=7;\n";
	file<<"if(n%2==0)\n";
	file<<"cout<<\"Even\";\n";
	file<<"else\n";
	file<<"cout<<\"Odd\";\n";
	file<<"return 0;\n";
	file<<"}\n";
	file.close();
}