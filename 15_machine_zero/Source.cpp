#include <iostream>
#include <iostream> 
using namespace std;

float machine_zero(float zerof, int &k)
{
    k = 0;

    do {
        zerof /= 2.0f;
        --k;
    } while(k > 1);

    return zerof;
	cout << "float" << endl;
    cout << "Machine zero: " << zerof << endl;
}

double machine_zero(double zerod, int &k)
{
    k = 0;

    do {
        zerod/= 2.0f;
        --k;
    } while(k>1);

    return zerod;
	cout << "double" << endl;
    cout << "Machine zero: " << zerod << endl;
}

long double machine_zero(long double zerol, int &k)
{
    k = 0;

    do {
        zerol /= 2.0f;
        --k;
    } while(k > 1);

   return zerol;
   cout << "long double" << endl;
   cout << "Machine zero: " << zerol<< endl;
}

int main()
{
    int k = 0;

    
    //float f_e = machine_zero((float) 1.0, k);
    

    
    //double d_e = machine_zero((double) 1.0, k);
    

    
    //long double ld_e = machine_zero((long double) 1.0, k);
    

    return 0;
 }