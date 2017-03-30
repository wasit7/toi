#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    vector<int> v = {17, 5, 16, 8};
    cout<<"sort ascending\t";
    std::sort(v.begin(), v.end());
    for (vector<int>::iterator i=v.begin(); i!=v.end(); i++){
        cout<< *i << " ";
    }
    cout<<endl;

    cout<<"push_back\t";
    v.push_back(7);
    for (vector<int>::iterator i=v.begin(); i!=v.end(); i++){
        cout<< *i << " ";
    }
    cout<<endl;

    cout<<"sort descending\t";
    std::sort(v.begin(), v.end(), greater<int>() );
    for (auto i=v.begin(); i!=v.end(); i++){
        cout<< *i << " ";
    }
    cout<<endl;

    cout<<"using int\t";
    for (int x: v){
        cout<< x << " ";
    }
    cout<<endl;

    cout<<"using lambda\t";
    auto print = [](const int& x) { cout << x<< " "; };//lambda
    for_each(v.begin(), v.end(), print);
    cout<<endl;

    //random access
    //v=17 16 8 7 5
    cout<<"random access"<<endl;
    vector<int>::iterator p=v.begin();
    cout<< *p <<endl; //17
    cout<< *(p+1) <<endl; //17
    cout<< p[0] <<endl; //17
    cout<< p[1] <<endl; //16

    vector<int>::iterator q=v.end();
    cout<< q[0] <<endl; //!?!
    cout<< q[-1] <<endl; //5
    cout<< q[-2] <<endl; //7

    v.clear();
    if( v.empty() ){
        cout<<"v is now empty.\n";
    }
}
