#include "field.h"

Field::Field()
{
    //создание поля
Osn_field=new cell*[50];
for (int i=0;i<50;i++)
{
    Osn_field[i]=new cell[50];
}

Save_field=new cell[10];
///////
size_cell=size_field/50;
int nach=0;

for (int i=0;i<50;i++)
{
   for (int j=0;j<50;j++)
   {
       Osn_field[i][j].x_1=nach;
      // qDebug()<<Osn_field[i][j].x_1;
       Osn_field[i][j].x_2=nach+size_cell;
       //qDebug()<<Osn_field[i][j].x_2;
       Osn_field[i][j].x_3=nach;
      // qDebug()<<Osn_field[i][j].x_3;
       Osn_field[i][j].x_4=nach+size_cell;
       //qDebug()<<Osn_field[i][j].x_4;
       Osn_field[i][j].y_1=nach;
       //qDebug()<<Osn_field[i][j].y_1;
       Osn_field[i][j].y_2=nach;
       //qDebug()<<Osn_field[i][j].y_2;
       Osn_field[i][j].y_3=nach+size_cell;
     //  qDebug()<<Osn_field[i][j].y_3;
       Osn_field[i][j].y_4=nach+size_cell;
       //qDebug()<<Osn_field[i][j].y_4;
   }
   nach+=size_cell;
}





}
Field::~Field()
{

    for (int j=0;j<50;j++)
    {
        delete[] Osn_field[j];
    }
    delete [] Osn_field;
    delete [] Save_field;

}
