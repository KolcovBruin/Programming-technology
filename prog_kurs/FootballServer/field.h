#ifndef FIELD_H
#define FIELD_H
#include <QDebug>

class Field
{
public:
    Field();
    ~Field();

public:

private:
    int size_cell=0;
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
