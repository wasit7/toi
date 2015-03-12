#include "minstep.h"
#include <iostream>
#include <algorithm>
using namespace std;

int F(int x,int* subproblems){
    if(x==1){
        return 0;
    }else if(subproblems[x]!=0){
        return subproblems[x];
    }else{
        int minstep=F(x-1,subproblems);
        if(x%2==0){
            minstep=min( minstep, F(x/2,subproblems));
        }
        if(x%3==0){
            minstep=min( minstep, F(x/3,subproblems));
        }
        subproblems[x]=1+minstep;
        return subproblems[x];
    }
}

int student_minstep(int x){
    int* subproblems= new int[x+2]{};
    int final_answer=F(x,subproblems);
//    cout<<"F("<<x<<") = "<< final_answer <<endl;
//    for(int i=0;i<x;i++){
//        cout<<"F("<<i<<") = "<<subproblems[i]<<endl;
//    }
    return final_answer;
}
