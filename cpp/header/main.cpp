#include <iostream>
#include <iomanip>
#include "foo.h"
using namespace std;

int main()
{
    complex x;
    complex y;
    cout << "Enter a complex number (A+Bi):";
    cin>> x.re;
    cin>> x.im;
    y=mysqrt(x);
    std::cout << std::fixed << std::setprecision(2);
    cout<<"sqrt(A+Bi) = "<< y.re << " + "<<y.im<<"i"<<endl;
    return 0;
}

