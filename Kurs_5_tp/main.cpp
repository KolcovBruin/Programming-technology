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
    int menu_2=1;
    short int *  cnt;
    input* str_in;
    input* str;
    ofstream out;
    out.open("/Users/my/Documents/Курсовая/Kurs_tp/Kurs_tp/Output_data",ios::app);
    while (menu_2)
    {
        cout<<"Игра начинается"<<endl;
        out<<"Игра начинается"<<endl;
   
   
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
    cnt=cmp_pos(str_in, str);
    
    out <<"Угадано:"<<cnt[0]<<endl<<"На своих местах:"<<cnt[1]<<endl;
    cout <<"Угадано:"<<cnt[0]<<endl<<"На своих местах:"<<cnt[1]<<endl;
    if (cnt[0]==4&&cnt[1]==4)
    {
        
        out<<"ЧИСЛО УГАДАНО!!!!!!"<<endl;
            cout<<"ЧИСЛО УГАДАНО!!!!!!"<<endl;
        menu_2=0;
    }
        for (int i =0;i<4;i++)
        {
           // str[i].str_cmp='/0';
            str[i].flag=0;
            str_in[i].str_cmp='/0';
            str_in[i].flag=0;
        }
        cout<<endl;
    }
    out<<endl<<endl<<endl;
    delete str;
    delete str_in;
    delete cnt;
    out.close();
    return 0;
}
