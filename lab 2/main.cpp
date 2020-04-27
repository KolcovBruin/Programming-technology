#include "Queue.h"
#include "coordinate.h"
#include <stdlib.h>
#include <stdio.h>
#include <iostream>

using namespace std;

void show (Queue& queue_1, Queue& queue_2);

int main()
{
	setlocale(LC_ALL, "Rus");

	Queue queue_1, queue_2;
	int option = 1;
	cout << "Задание 1 - унарные операции" << endl;

	while (option)
	{
		cout << "|0| - Переход к бинарным операциям" << endl;
		cout << "|1| - Добавление элемента очереди" << endl;
		cout << "|2| - Извлечение элемента из очереди" << endl;
		cout << "|3| - Увеличение всех элементов очереди на 1" << endl;
		cout << "|4| - Уменьшение всех элементов очереди на 1" << endl;
		cin >> option;

		switch (option)
		{
		case 0:
			break;
		case 1:
			queue_1 = queue_2++;
			show(queue_1, queue_2);
			system("pause");
			system("cls");
			break;
		case 2:
			if (!queue_2)
			{
				queue_1 = queue_2--;
				show(queue_1, queue_2);
			}
			system("pause");
			system("cls");
			break;
		case 3:
			if (!queue_2)
			{
				queue_1 = ++queue_2;
				show(queue_1, queue_2);
			}
			system("pause");
			system("cls");
			break;
		case 4:
			if (!queue_2)
			{
				queue_1 = --queue_2;
				show(queue_1, queue_2);
			}
			system("pause");
			system("cls");
			break;

		default:
			cout << "некорректный ввод";
			break;
		}
	}
	
	cout << "Задание 2 - бинарные операции" << endl;
	option = 1;
	coordinate xyz_1;
	coordinate xyz_2;
	int number = 0;

	while (option)
	{
		cout << xyz_1;
		cout << xyz_2;
		cout << "|0| - Выход" << endl;
		cout << "|1| - Ввод координаты" << endl;
		cout << "|2| - Вывод координаты" << endl;
		cout << "|3| - сложение координаты с числом " << endl;
		cout << "|4| - вычитание координаты с числом" << endl;
		cout << "|5| - сложение двух координат" << endl;
		cout << "|6| - вычитание одной координаты из другой" << endl;
		cin >> option;

		switch (option)
		{
		case 0:
			break;

		case 1:
			cin >> xyz_1;
			system("pause");
			system("cls");
			break;

		case 2:
			cout << xyz_1;
			system("pause");
			system("cls");
			break;

		case 3:
			cout << "Введите число" << endl;
			cin >> number;
			cout << "xyz+number =";
			xyz_1 + number;
			system("pause");
			system("cls");
			break;

		case 4:
			cout << "Введите число" << endl;
			cin >> number;
			cout << "xyz-number =";
			xyz_1 - number;
			system("pause");
			system("cls");
			break;

		case 5:
			cout << "Введите дополнительную переменную" << endl;
			cin >> xyz_2;
			xyz_1 + xyz_2;
			system("pause");
			system("cls");
			break;

		case 6:
			cout << "Введите дополнительную переменную" << endl;
			cin >> xyz_2;
			xyz_1 - xyz_2;
			system("pause");
			system("cls");
			break;

		default:
			cout << "некорректный ввод";
			break;
		}
	}

	option = 1;
	cout << "Сравнение координат" << endl;
	coordinate number_1(rand(), rand(), rand());
	coordinate number_2(rand(), rand(), rand());
	while (option)
	{
		cout << number_1;
		cout << number_2;
		cout << "|0| - Выход" << endl;
		cout << "|1| - <" << endl;
		cout << "|2| - >" << endl;
		cout << "|3| - ==" << endl;
		cout << "|4| - !=" << endl;
		cout << "|5| - <=" << endl;
		cout << "|6| - >=" << endl;
		cout << "|7| - Изменить координаты" << endl;
		cin >> option;

		switch (option)
		{
		case 0: break;

		case 1:
			number_1 < number_2;
			system("pause");
			system("cls");
			break;

		case 2:
			number_1 > number_2;
			system("pause");
			system("cls");
			break;

		case 3:
			number_1 == number_2;
			system("pause");
			system("cls");
			break;

		case 4:
			number_1 != number_2;
			system("pause");
			system("cls");
			break;

		case 5:
			number_1 <= number_2;
			system("pause");
			system("cls");
			break;

		case 6:
			number_1 >= number_2;
			system("pause");
			system("cls");
			break;

		case 7:
			cout << "Первая координата" << endl;
			cin >> number_1;
			cout << "Вторая координата" << endl;
			cin >> number_2;
			system("pause");
			system("cls");
			break;

		default:
			cout << "некорректный ввод";
			break;
		}
	}

	system("pause");
	return 0;
}

void show(Queue& queue_1, Queue& queue_2)
{
	cout << "Очередь 1" << endl;
	if (!queue_1) 
	{
		queue_1.out();
	}
	cout << "Очередь 2" << endl;
	if (!queue_2)
	{
		queue_2.out();
	}
}
