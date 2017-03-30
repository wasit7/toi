#include <iostream>
#include <unordered_set>
#include <algorithm>
using namespace std;

void showset(unordered_set<string> m){
    cout<<"{ ";
    for(string x : m) cout<< x <<", ";
    cout<<"}\n";
}
int main(){
    unordered_set<string> myset ={ "red", "green", "blue"};
    showset(myset);
    cout<<"insert white"<<endl;
    myset.insert("white");
    showset(myset);

    //find
    unordered_set<string>::iterator it =myset.find("red");//O(1)
    if( it!=myset.end() ){
        cout<< "found "<< *it <<endl;
    }



}
