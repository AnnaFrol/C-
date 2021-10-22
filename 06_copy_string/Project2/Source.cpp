#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;
int main()
{
	char mystring1[25];
	char mystring2[25];
	std::cout<<"Enter your string ";
	std::cin.getline(mystring1,25);
	for(int n=0; mystring1[n];n++)
	{
		mystring1=mystring2;
		std::cout<<mystring2[n];
	}
	std::cout<<'\n';


	return 0;
}