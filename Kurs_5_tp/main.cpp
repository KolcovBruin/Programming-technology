//
//  main.cpp
//  Kurs_tp
//
//  Created by Григорий on 3/5/21.
//

#include "Function.hpp"
using namespace std;
//#include <stdio.h>


int main(int argc, const char * argv[]) {
    // insert code here...
   // char* str=new char[5];
   // short int * cnt=new short int [2];
    char*  str=input_my();
    input* str_in=input_new();
    short int *  cnt=cmp_pos(str_in, str);
    cout <<"Угадано:"<<cnt[0]<<endl<<"На своих местах:"<<cnt[1]<<endl<<str<<endl;
    return 0;
}
