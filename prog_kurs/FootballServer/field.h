#ifndef FIELD_H
#define FIELD_H
#include <QDebug>

class Field
{
public:
    Field();
    void neighbors();
    ~Field();

public:

private:
    int size_cell=0;
    int x;
    int y;
    int num_dot;
    int now_cell_x;
    int now_cell_y;
    //int end_cell;
    int arr_cell;
    int size_field=800;//поле 800х800
    struct cell
    {
    int x_1;
    int x_2;
    int x_3;
    int x_4;
    int y_1;
    int y_2;
    int y_3;
    int y_4;
//0-strt;1-1plyer;2-2play;3-gr;4-vor.
    int Status_line_1=0;//левая линия
    int Status_line_2=0;//нижняя
    int Status_line_3=0;//правая
    int Status_line_4=0;//верхняя
    int Status_line_7=0;//главная диаг
    int Status_line_8=0;//обрат диаг
    };
    cell** Osn_field;
    cell* Save_field;
};

#endif // FIELD_H
