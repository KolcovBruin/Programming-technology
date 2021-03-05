//
//  Fuction.cpp
//  Kurs_tp
//
//  Created by Григорий on 3/5/21.
//

#include "Function.hpp"


char* input_my()
{
    fstream inOut;
    inOut.open("/Users/my/Documents/Курсовая/Kurs_tp/Kurs_tp/Inp_numbers",  ios::in);
    char* str=new char[5];
    str[0]= inOut.get();
    str[1]= inOut.get();
    str[2]= inOut.get();
    str[3]= inOut.get();
    str[4]=inOut.get();
    return str;
}

input* input_new()
{
    fstream inOut;
    input* str_in=new input[4];
    str_in[0].str_cmp= cin.get();
    str_in[1].str_cmp= cin.get();
    str_in[2].str_cmp= cin.get();
    str_in[3].str_cmp= cin.get();
    
    return str_in;
}
short int* cmp_pos(input* str_2, char* str_1 )
{
    short int * cnt=new short int [2];
    for (int i=0;i<4;i++)
        {
            if ((str_1[i]==str_2[i].str_cmp)&&(str_2[i].flag==0))
            {
                str_2[i].flag=1;
                cnt[0]++;
                cnt[1]++;
            }
        }
    for (int i=0;i<4;i++)
        {
    
    
            for (int j=0;j<4;j++)
            {
              if ((str_1[i]==str_2[j].str_cmp)&&(str_2[j].flag==0))
              {
                  str_2[j].flag=1;
                  cnt[0]++;
    
                  break;
              }
            }
        }
    return cnt;
}
