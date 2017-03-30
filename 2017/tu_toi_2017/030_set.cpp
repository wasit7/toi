#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

void showset(set<int> m){
    cout<<"{ ";
    for(int x : m) cout<< x <<", ";
    cout<<"}\n";
}
int main(){
    set<int> myset;
    myset.insert(3); //{3}, O(log(n))
    myset.insert(7); //{1}
    myset.insert(5); //{5}
    myset.insert(1); //{1}

    showset(myset); //{ 1, 3, 5, 7, }
    //find
    auto it =myset.find(5);//O(log(n))
    if( it!=myset.end() ){
        cout<< "found 5!\n";
    }

    //inset
    pair< set<int>::iterator, bool> a;
    a = myset.insert(5);
    if(a.second){
        cout<<"successful insertion"<<endl;
    }else{
        it=a.first;
        cout<<"fail to insert "<< *it <<endl;
    }

    //erase
    cout << "erase 5\n";
    myset.erase(5);
    it =myset.find(5);//O(log(n))
    if( it==myset.end() ){
        cout<< "not found 5\n";
    }

    showset(myset); //{ 1, 3, 7, }
}
