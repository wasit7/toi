#include <iostream>
#include <fstream>
#include "tourist.h"
using namespace std;

int main(int arc, char **argv)
{
    ifstream sample_in(argv[1]);
    ifstream sample_out(argv[2]);
    cout<<"debug input:"<<argv[1]<<endl;
    cout<<"debug output:"<<argv[2]<<endl;
    int N,K,max_H;
    int* H;
    if (sample_in && sample_out) {
        sample_in>>N;
        sample_in>>K;
        H=new int[N];
        for(int i=0;i<N;i++){
            sample_in>>H[i];
        }
        sample_out>>max_H;

        cout<<N<<endl;
        cout<<K<<endl;
        for(int i=0;i<N;i++){
            cout<<H[i]<< " ";
        }
        cout<<endl;
        cout<<"maximum Happiness from test case: "<<max_H<<endl;
        cout<<"your answer: "<<GreatestHappiness(N,K,H)<<endl;
        cout<<"closing files"<<endl;
        sample_in.close();
        sample_out.close();
        return 0;
    }
    cout << "Error: missing sample files!" << endl;
    return 0;
}

