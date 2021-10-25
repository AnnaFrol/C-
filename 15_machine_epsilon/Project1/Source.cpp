#include <iostream> 
using namespace std;

float machine_zero(float e, int &k)
{
    float e1;
    k = 0;

    do {
        e /= 2.0;
        e1 = e + 1.0;
        k++;
    } while(e1 > 1.0);

    return e;
}

double machine_zero(double e, int &k)
{
    double e1;
    k = 0;

    do {
        e /= 2.0;
        e1 = e + 1.0;
        k++;
    } while(e1 > 1.0);

    return e;
}

long double machine_zero(long double e, int &k)
{
    long double e1;
    k = 0;

    do {
        e /= 2.0;
        e1 = e + 1.0;
        k++;
    } while(e1 > 1.0);

    return e;
}

int main(int argc, char *argv[])
{
    int k = 0;

    
    float f_e = machine_zero((float) 1.0, k);
    cout << "float" << endl;
    cout << "Machine zero: " << f_e << endl;

    
    double d_e = machine_zero((double) 1.0, k);
    cout << "double" << endl;
    cout << "Machine zero: " << d_e << endl;

    
    long double ld_e = machine_zero((long double) 1.0, k);
    cout << "long double" << endl;
    cout << "Machine zero: " << ld_e << endl;

    return 0;
 }