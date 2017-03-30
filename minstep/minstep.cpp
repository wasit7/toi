#include <iostream>
#include <algorithm>
#define LARGE 40000
using namespace std;

int F(int x, int* C){
    if(C[x]<LARGE) return C[x];
    int minch;
    if(x<=1){
        C[x]=0;
        return 0;
    }
    else{
        int i;
        minch=F(x-1,C);
        if(x%2==0){
            i=F(x/2,C);
            if(i<minch) minch=i;
        }
        if(x%3==0){
            i=F(x/3,C);
            if(i<minch) minch=i;
        }
    }
    C[x]=minch+1;
    return C[x];
}
int main(){
    int C[LARGE];
    int x;
    std::fill_n(C, LARGE, LARGE);
    for(int i=LARGE-10;i<LARGE;i++){
        cout<<i<<"\t"<<C[i]<<endl;
    }
    //cin>>x;
    x=LARGE-3;
    cout<<"F("<<x<<"):"<<F(x,C)<<endl;
    for(int i=LARGE-10;i<LARGE;i++){
        cout<<i<<"\t"<<C[i]<<endl;
    }
    return 0;
}
