#include <iostream>

using namespace std;

int fib(int N)
{
if(N==0)
return 0;
if(N==1)
return 1;
else
return fib(N-1)+fib(N-2);
}


int main()
{
while(true)
{
cout<<"Enter your number \n";
int N;
cin>>N;

if (std::cin.fail()|| N<1 || N>100 )
{
std::cin.clear();
std::cin.ignore(32767,'\n');
std::cout<<"Try again"<<endl;
}
else
{
cout<<"The first "<<N<<" fibonacci numbers \n";
for(int i=0; i<N; i++)
{
cout<<fib(i)<<"\n";
}
}
return 0;
}

}