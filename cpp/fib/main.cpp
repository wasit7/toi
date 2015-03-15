#include <iostream>
#include "submission.h"
using namespace std;



int main()
{
    int n=5;
    int x[]={5, 2, 6, 15, 100};
    for(int i=0;i<n;i++){
        cout<< fib(x[i])<<endl;
    }
    return 0;
}

