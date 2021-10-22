#include <iostream>
using namespace std;
int main()
{
	int num;
	std::cout<<"Enter a number "<<endl;
	std::cin>>num;
	if (num<=0)
	{
		std::cout<<"Try again"<<endl;
		std::cin>>num;
	}
	if (num>100000)
	{
		std::cout<<"Try again"<<endl;
		std::cin>>num;
	}
	if (

	int a=1;
	int b=1;
	int c;
	while(a<=num)
	{
		c=a*b;
		b=c;
		a++;
	}
	std::cout<<b;
}
