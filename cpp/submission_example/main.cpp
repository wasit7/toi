#include "answer.h"
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ofstream answer_file;
    answer_file.open ("answer_file.txt");
    answer_file<<answer_main(10)<<endl;
    answer_file.close();
    return 0;
}
