#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
	int max=100;
	int min=0;
	int num;
	std::cout<<"Enter a number from 0 to 100 "<<endl;
	int number;
	std::cin>>number;
	do
	{
		num=(max-min)/2;
		std:: cout<<"Is it "<<num<<"?\n";
		if(number>num)
		{
			std::cout<<"1"<<endl;
			min=num;
			num=(max-min)/2;
		}
		else if (number<num)
		      {
			std::cout<<"2"<<endl;
			max=num;
			num=(max-min)/2;
		      }
		    
		else
		{
			std::cout<<"3"<<endl;
			break;
		}
	} 
	while(true);
	std:: cout<<"Your number is "<<number<<endl;
}


