#include <iostream>
#include <unordered_map>
#include <algorithm>
using namespace std;

void showmap(unordered_map<char,string> m){
    cout<<"{ ";
    for(unordered_map<char,string>::iterator it = m.begin(); it!= m.end(); it++ )
        cout<< (*it).first <<": "<<(*it).second <<", ";
    cout<<"}\n";
}
int main(){
    unordered_map<char,string> day= {{'S',"Sunday"},{'M',"Monday"}};
    day['T']="Tuesday";
    showmap(day);

    //find and erase
    unordered_map<char,string>::iterator it =day.find('M');//O(constant)
    if( it!=day.end() ){
        cout<< "found and erase {"<< (*it).first<<": "<< (*it).second << "}\n";
        day.erase('M');
    }

    showmap(day);

    day['S']="Soon";
    showmap(day);
}
