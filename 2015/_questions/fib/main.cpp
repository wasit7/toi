
#include <iostream>
#include <fstream>
#include "submission.h"
using namespace std;
int main(int arc, char **argv){
//    argv[0] executed file
//    argv[1] input file
//    argv[2] output file

    ifstream in_file(argv[1]);
    ifstream testcase_file(argv[2]);
    cout<<"debug input: "<<argv[1]<<endl;
    cout<<"debug output: "<<argv[2]<<endl;
    int x[10];
    int y[10];
    if (in_file&&testcase_file) {
        for(int i=0;i<10;i++){
            in_file >> x[i];
            testcase_file >>y[i];
            cout<<"x:"<<x[i]<<" y[x]:"<<y[i];
            cout<<" f(x):"<<fib(x[i])<<endl;
        }
        cout<<"closing files"<<endl;
        in_file.close();
        testcase_file.close();
        return 0;
    }
    cout<<"missing files"<<endl;
    return 1;
}
