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
    int menu=1;
    input* str;
    ofstream out;
    out.open("/Users/my/Documents/Курсовая/Kurs_tp/Kurs_tp/Output_data",ios::app);
    while (menu)
    {
    str=input_my();
    out<<"Число из файла"<<endl;
    for (int i=0;i<4;i++)
    {
        out<<str[i].str_cmp;
    }
    out <<endl;
  if   (test(str)==0)
  {
      menu=0;
  }
        if   (menu==1)
        {
            out<<"Число введено не корректно"<<endl;
            cout<<"Число введено не корректно"<<endl;
        }
    }
    input* str_in;
    menu=1;
    while (menu)
    {
    str_in=input_new();
    out<<"Пользователь предположил число"<<endl;
    for (int i=0;i<4;i++)
    {
        out<<str_in[i].str_cmp;
    }
    out <<endl;
   if  (test(str_in)==0)
   {
       menu=0;
   }
        if   (menu==1)
        {
            out<<"Число введено не корректно"<<endl;
            cout<<"Число введено не корректно"<<endl;
        }
    }
    short int *  cnt=cmp_pos(str_in, str);
    
    out <<"Угадано:"<<cnt[0]<<endl<<"На своих местах:"<<cnt[1]<<endl;
    cout <<"Угадано:"<<cnt[0]<<endl<<"На своих местах:"<<cnt[1]<<endl;
    if (cnt[0]==4&&cnt[1]==4)
    {
        
        out<<"ЧИСЛО УГАДАНО!!!!!!"<<endl;
            cout<<"ЧИСЛО УГАДАНО!!!!!!"<<endl;
    }
    delete str;
    delete str_in;
    delete cnt;
    out.close();
    return 0;
}
