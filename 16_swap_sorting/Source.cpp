#include <iostream>

using namespace std;

void swap1(int a, int b)
{
	int c;
	c=a;
	a=b;
	b=c;
	cout<<"a="<<a<<"\n";
	cout<<"b="<<b<<"\n";
}

void swap2(int a, int b)
{
	a=a+b;
	b=a-b;
	a=a-b;
	cout<<"a="<<a<<"\n";
	cout<<"b="<<b<<"\n";
}

void swap3(int a, int b)
{
	swap(a,b);
	cout<<"a="<<a<<"\n";
	cout<<"b="<<b<<"\n";
}

int main()
{
	int a;
	int b;
	cout<<"Enter a number a= ";
	cin>>a;
	cout<<"Enter a number b=";
	cin>>b;

	cout<<"First method: ";
	swap1(a,b);
	cout<<"Second method: ";
	swap2(a,b);
	cout<<"Third method: ";
	swap3(a,b);

	const int length=5;
	int array[length] = { 30, 50, 20, 10, 40 };
	for (int startIndex = 0; startIndex < length - 1; ++startIndex)
	{
		int smallestIndex = startIndex;
		for (int currentIndex = startIndex + 1; currentIndex < length; ++currentIndex)
		{
			if (array[currentIndex] < array[smallestIndex])
				smallestIndex = currentIndex;
		}
 
		std::swap(array[startIndex], array[smallestIndex]);
	}
 
	
	for (int index = 0; index < length; ++index)
		std::cout << array[index] << ' ';

	return(0);
}

