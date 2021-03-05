//
//  Function_.hpp
//  Kurs_tp
//
//  Created by Григорий on 3/5/21.
//

#ifndef Function__hpp
#define Function__hpp
#include <iostream>
#include <vector>
#include <fstream>
#include <stdio.h>
using namespace std;
struct input
{
    char str_cmp;
    short int flag=0;
};

char* input_my();
input* input_new();
short int* cmp_pos(input* str_2, char* str_1 );

#endif /* Function__hpp */
