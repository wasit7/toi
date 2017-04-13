#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
    freopen ("01.in","r",stdin);
    freopen ("01.out","w",stdout);
    //when the input is large, enable the 2 following lines
    //ios_base::sync_with_stdio(false);
    //cin.tie(NULL);`
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
