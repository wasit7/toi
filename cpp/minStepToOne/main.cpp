#include <iostream>
#include <algorithm>
using namespace std;

//class list_element{
//    int key;
//    int value;
//    list_element* child;
//    void addchild(int key,int value){
//        this->child=new list_element()
//    }
//};

//class subproblem{
//    subproblem();
//    ~subproblem();
//    int get(int key);
//    void set(int key, int value);
//    int find(int key);
//};
//subproblem::subproblem(){

//}
//subproblem::~subproblem(){

//}


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

int main()
{
    int x=100;
    int* subproblems= new int[x+2]{};
    cout<<"F("<<x<<") = "<<F(x,subproblems)<<endl;
    for(int i=0;i<x;i++){
        cout<<"F("<<i<<") = "<<subproblems[i]<<endl;
    }
    return 0;
}

