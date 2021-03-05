//
//  Fuction.cpp
//  Kurs_tp
//
//  Created by Григорий on 3/5/21.
//

#include "Function.hpp"


input* input_my()
{
    string file;
    int menu=0;
    cout<<"1-Ввести имя файла"<<endl<<"2-Исп станд файл"<<endl;
    cin>>menu;
    switch (menu)
    {
        case 1:
        {
            cout<<"Введите путь"<<endl;
            cin>>file;
            break;
        }
        case 2:
        {
            file="/Users/my/Documents/Курсовая/Kurs_tp/Kurs_tp/Inp_numbers";
            break;
        }
    }
    fstream inOut;
    inOut.open(file,  ios::in);
    try
    {
        if (!(inOut.is_open()))
        {
            throw -11;
        }
    }
    catch (int a)
    {
        cout<<"warning #"<<a<<endl;
    }
    input* str=new input[5];
    str[0].str_cmp= inOut.get();
    str[1].str_cmp= inOut.get();
    str[2].str_cmp= inOut.get();
    str[3].str_cmp= inOut.get();
    str[4].str_cmp= inOut.get();
    inOut.close();
    return str;
}

input* input_new()
{
    
    input* str_in=new input[5];
    cout<<"ВВедите число"<<endl;
    str_in[0].str_cmp= cin.get();
    str_in[0].str_cmp= cin.get();
    str_in[1].str_cmp= cin.get();
    str_in[2].str_cmp= cin.get();
    str_in[3].str_cmp= cin.get();
    str_in[4].str_cmp= cin.get();
   
    return str_in;
}
short int* cmp_pos(input* str_2, input* str_1 )
{
    short int * cnt=new short int [2];
    for (int i=0;i<4;i++)
        {
            if ((str_1[i].str_cmp==str_2[i].str_cmp)&&(str_2[i].flag==0)&&(str_1[i].flag==0))
            {
                str_1[i].flag=1;
                str_2[i].flag=1;
                cnt[0]++;
                cnt[1]++;
            }
        }
    for (int i=0;i<4;i++)
        {
    
    
            for (int j=0;j<4;j++)
            {
              if ((str_1[i].str_cmp==str_2[j].str_cmp)&&(str_2[j].flag==0)&&(str_1[i].flag==0))
              {
                  str_1[i].flag=1;
                  str_2[j].flag=1;
                  cnt[0]++;
    
                  break;
              }
            }
        }
    return cnt;
}

short int test(input* str)
{
    try
    {
        
    
    for (int i=0;i<4;i++)
    {
      if (!(( str[i].str_cmp >= '0')&&( str[i].str_cmp <= '9')))
      {
          throw 44;
          break;
      }
    }
    
    }
    
    catch (int a)
    {
        cout<<"warning#"<<a<<endl;
        return -1;
    }
    return 0;
}
