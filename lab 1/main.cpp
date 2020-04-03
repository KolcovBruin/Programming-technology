#include"son.h"
#include"pch.h"
#include <stdlib.h>
#include <stdio.h>
#include <iostream>

using namespace std;

template <class T>

void workWithClass(T* pch) //шаблон класса T для работы c разными наследниками в основной функции, передаём указатель на класс 
{
	int choise;
	int number = 0;			// Номер обрабатываемой очереди
	int count = 1;			// Количество очередей
	int value;
	int v, a = 1;

	do
	{
		cout << "Используется очередь № " << number << endl;
		cout << "|1| - Добавление элемента очереди" << endl;
		cout << "|2| - Извлечение элемента из очереди" << endl;
		cout << "|3| - Вывод очереди на экран" << endl;
		cout << "|4| - Среднее арифметическое" << endl;
		cout << "|5| - Создание копии очереди" << endl;
		cout << "|6| - Слияние очередей" << endl;
		cout << "|7| - Выбор другой очереди" << endl;
		cout << "|8| - Выход" << endl;
		cin >> v;

		switch (v)
		{
		case 1:
			cout << "Введите значение: ";
			cin >> value;
			pch[number].push(value);
			cout << "Элемент добавлен" << endl;
			system("pause");
			system("cls");
			break;

		case 2:
			if (!pch[number].prov()) break;
			v = pch[number].pop();
			cout << "Извлечён элемент:" << v << endl;
			system("pause");
			system("cls");
			break;

		case 3:
			if (!pch[number].prov()) break;
			cout << "Очередь состоит из:" << endl;
			pch[number].out();
			system("pause");
			system("cls");
			break;

		case 4:
			if (!pch[number].prov()) break;
			cout << pch[number].sredarifmet() << endl;
			break;

		case 5:
			if (!pch[number].prov()) break;
			pch[count].copy(pch[number]);
			cout << "Очередь скопирована. Номер очереди: " << count++ << endl;
			system("pause");
			system("cls");
			break;

		case 6:
			if (count == 1)
			{
				cout << "Существует только одна очередь" << endl;
				break;
			}

			cout << "С какой очередью будет произведено слияние? (0 - " << count - 1 << ") :  ";
			cin >> choise;

			if ((choise < 0) || (choise == number) || (choise >= count))
			{
				cout << "Некорректное значение. Объединение не произведено" << endl;
				break;
			}

			pch[count].slian(pch[number], pch[choise]);
			cout << "Объединение произведено. Номер очереди результата: " << count << endl;
			count++;
			break;

		case 7:
			if (count == 1)
			{
				cout << "Существует только одна очередь" << endl;
				break;
			}

			cout << "Номер очереди, на которую следует переключиться: (0 - " << count - 1 << ") :  ";
			cin >> choise;
			if ((choise < 0) || (choise == number) || (choise >= count))
			{
				cout << "Некорректное значение. Переключение не выполнено" << endl;
			}
			else
			{
				number = choise;
			}
			break;

		case 8:
			a = 0;
		}
	} while (a == 1);
}

int main()
{
	setlocale(LC_ALL, "Rus");
	int N;
	int v;
	cout << "Введите количество очередей" << endl;
	cin >> N;

	son1* Object1 = 0;
	son2* Object2 = 0;
	son3* Object3 = 0;

	cout << "Какой тип наследования будет у производного класса" << endl;
	cout << "|1| - Public" << endl;
	cout << "|2| - Protected" << endl;
	cout << "|3| - Private" << endl;
	cin >> v;

	switch (v)
	{
	case 1:
		Object1 = new son1[N]; workWithClass(Object1); delete[] Object1;
		break;
	case 2:
		Object2 = new son2[N];  workWithClass(Object2); delete[] Object2;
		break;
	case 3:
		Object3 = new son3[N]; workWithClass(Object3); delete[] Object3;
		break;
	default:
		cout << "некорректный ввод";
		break;
	}

	return 0;
}
