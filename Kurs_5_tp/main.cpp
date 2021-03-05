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
    ofstream out;
    out.open("/Users/my/Documents/Курсовая/Kurs_tp/Kurs_tp/Output_data",ios::app);
    
    input* str=input_my();
    out<<"Число из файла"<<endl;
    for (int i=0;i<4;i++)
    {
        out<<str[i].str_cmp;
    }
    out <<endl;
  if   (test(str)==-1)
  {
      
  }
    input* str_in=input_new();
    out<<"Пользователь предположил число"<<endl;
    for (int i=0;i<4;i++)
    {
        out<<str_in[i].str_cmp;
    }
    out <<endl;
   if  (test(str_in)==-1)
   {
       
   }
    short int *  cnt=cmp_pos(str_in, str);
    out <<"Угадано:"<<cnt[0]<<endl<<"На своих местах:"<<cnt[1]<<endl;
    cout <<"Угадано:"<<cnt[0]<<endl<<"На своих местах:"<<cnt[1]<<endl;
    delete str;
    delete str_in;
    delete cnt;
    return 0;
}
