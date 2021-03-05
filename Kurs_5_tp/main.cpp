//
//  main.cpp
//  Kurs_tp
//
//  Created by Григорий on 3/5/21.
//

#include <iostream>
#include <vector>
#include <fstream>
//#include <stdio.h>
using namespace std;
int main(int argc, const char * argv[]) {
    // insert code here...
    
    short int cnt_1=0;
    short int cnt_2=0;
    char a;
    char* str=new char[4];
    fstream inOut;
    ofstream outPut;
    outPut.open("/Users/my/Documents/Курсовая/Kurs_tp/Kurs_tp/Output_data", ios::app);
    outPut<<"KO";
    outPut.close();
    inOut.open("/Users/my/Documents/Курсовая/Kurs_tp/Kurs_tp/Inp_numbers",  ios::in);
    str[0]= inOut.get();
    str[1]= inOut.get();
    str[2]= inOut.get();
    str[3]= inOut.get();
    if (inOut.get()!='\n'||inOut.get()!='\xef'||inOut.get()!='\0')
    {
        
        cout<<"Ты Чё";
        //флаг сделать на не прав  символ
        
    }
   // cin >> a;
        cout << str[0] ;
        cout << str[1] ;
        cout << str[2];
        cout << str[3] << endl;
    
    str[0]= cin.get();
    str[1]= cin.get();
    str[2]= cin.get();
    str[3]= cin.get();
    if (cin.get()!='\n')
    {
        cout<<"Ты Чё";
        //флаг сделать на не прав  символ
        
    }
    struct input
    {
        char str_cmp;
        short int flag=0;
    };
    input* str_in=new input[4];
    
    
    
    str_in[0].str_cmp= cin.get();
    str_in[1].str_cmp= cin.get();
    str_in[2].str_cmp= cin.get();
    str_in[3].str_cmp= cin.get();
    //ПЕРЕДЕЛАТЬ В ИСКЛЮЧЕНИЕ
    if (cin.get()!='\n')
    {
        cout<<"Ты Чё";
        //флаг сделать на не прав  символ
        
    }
    //short int* cnt_j=new short int[4];
    for (int i=0;i<4;i++)
    {
        if ((str[i]==str_in[i].str_cmp)&&(str_in[i].flag==0))
        {
            str_in[i].flag=1;
            cnt_1++;
            cnt_2++;
           
        }
    }
    for (int i=0;i<4;i++)
    {
        
       
        for (int j=0;j<4;j++)
        {
          if ((str[i]==str_in[j].str_cmp)&&(str_in[j].flag==0))
          {
              str_in[j].flag=1;
              cnt_1++;
             
              break;
          }
        }
    }
//    cout << str[0] ;
//    cout << str[1] ;
//    cout << str[2];
//    cout << str[3] << endl;
    cout<<cnt_1<<endl<<cnt_2<<endl;
    return 0;
}
