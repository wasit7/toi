#include <iostream>
using namespace std;
int main()
{
    int m,n,o;
    cout<<"Please enter m n and o:";
    cin>>m;
    cin>>n;
    cin>>o;
    //static memory allocation
    //int A[5];
    //dynamic memory allocation
    int* A;//declaration int* A; = int A[];
    A = (int*)malloc(sizeof(int)*m*n);//allocation

    int rmax=m;
    int cmax=n;
    for(int r=0;r<rmax;r++){
        for(int c=0;c<cmax;c++){
            cout<<r*cmax+c;
        }
    }


    int* B;//declaration
    B = (int*)malloc(sizeof(int)*m*n);//allocation

    rmax=m;
    cmax=n;
    for(int r=0;r<rmax;r++){
        for(int c=0;c<cmax;c++){
            cin>> B[r*cmax+c];
        }
    }

    cout<<"matrix A:"<<endl;
    for(int r=0;r<rmax;r++){
        for(int c=0;c<cmax;c++){
            cout<< A[r*cmax+c]<<" ";
        }
        cout<<endl;
    }
    return 0;
}

