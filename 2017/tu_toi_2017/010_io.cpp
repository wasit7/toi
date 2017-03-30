#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
    freopen ("01.in","r",stdin);
    freopen ("01.out","w",stdout);

    int cmax, sum=0;
    cin >> cmax;
    int A[cmax];

    //Read matrix from 01.in
    for(int c=0; c<cmax; c++){
        cin >> A[c];
        sum+=A[c];
    }
    cout << "output: sum = "<< sum <<endl;
}
