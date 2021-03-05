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
#include <string>

using namespace std;
//string std_file ="/Users/my/Documents/Курсовая/Kurs_tp/Kurs_tp/Inp_numbers";
struct input
{
    char str_cmp;
    short int flag=0;
};

//string warning="Warning # ";
input* input_my();
input* input_new();
short int* cmp_pos(input* str_2, input* str_1 );
short int test(input* str);

#endif /* Function__hpp */
