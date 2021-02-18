#include "field.h"

Field::Field()
{
    arr_cell=16;

    //создание поля
Osn_field=new cell*[arr_cell];
for (int i=0;i<arr_cell;i++)
{
    Osn_field[i]=new cell[arr_cell];
}

Save_field=new cell[10];
///////
size_cell=size_field/arr_cell;
int nach=0;

for (int i=0;i<arr_cell;i++)
{
   for (int j=0;j<arr_cell;j++)
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

       if (Osn_field[i][j].x_1==0)
       {
           Osn_field[i][j].Status_line_1=3;
       }
       if (Osn_field[i][j].x_2==800)
       {
           Osn_field[i][j].Status_line_3=3;
       }
       if (Osn_field[i][j].y_1==0)
       {
           Osn_field[i][j].Status_line_2=3;
       }
       if (Osn_field[i][j].y_3==800)
       {
           Osn_field[i][j].Status_line_2=3;
       }



   }
   nach+=size_cell;
}
x=800/2;
y=800/2;
now_cell_x=arr_cell/2;
now_cell_y=arr_cell/2;
}
Field::~Field()
{

    for (int j=0;j<arr_cell;j++)
    {
        delete[] Osn_field[j];
    }
    delete [] Osn_field;
    delete [] Save_field;

}

void Field ::neighbors()
{
Osn_field[now_cell_y][now_cell_x];
}
