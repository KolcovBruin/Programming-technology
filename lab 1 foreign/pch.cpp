#include "pch.h"
#include <iostream>

using namespace std;

Element* pch::getE()
{
	return e;
}

bool pch::prov()
{
	if (size == 0)
	{
		cout << "Очередь пуста" << endl;
		return false;
	}

	return true;
}

pch::pch()
{
	size = 0;
};

pch:: ~pch()
{
	while (size > 0)
	{
		Element* buf = e;
		e = buf->prev;
		delete buf;
		size--;
	};
}

void pch::push(int n)
{
	Element* buff = new Element;
	buff->prev = e;
	e = buff;
	e->data = n;
	size++;
}

int pch::pop(void)
{
	int a;
	Element* buf = e;

	if (e->prev == nullptr)// если удаляется последний элемент очереди
	{
		a = e->data;
		size = 0;
		delete e;
		e = nullptr;
		cout << "Последний элемент извлечен" << endl;
	}

	else if (e->prev->prev == nullptr)
	{
		a = e->prev->data;
		delete e->prev;
		e->prev = nullptr;
		size--;
	}

	else if (e->prev->prev != nullptr)
	{
		do
		{
			buf = (buf->prev);
		} while (buf->prev->prev != nullptr);

		a = buf->prev->data;
		size--;
		delete buf->prev;
		buf->prev = nullptr;
	}

	return a;
}

void pch::out()
{
	Element* buf = e;

	while (buf->prev != 0)
	{
		cout << buf->data << "  <-  ";
		buf = buf->prev;
	};

	cout << buf->data << endl;
}

void pch::copy(pch& ob)// Копирование очереди			
{
	int* arr = new int[ob.size];
	Element* ptr = ob.e;

	for (int i = ob.size - 1; i >= 0; i--)
	{
		arr[i] = ptr->data;
		ptr = ptr->prev;
	}

	for (int i = 0; i < ob.size; i++)
	{
		this->push(arr[i]);// указатель на обьект на котором вызвана функция
	}
		
	delete[] arr;
	this->out();
}

void pch::slian(pch& ob1, pch& ob2)
{
	int* arr = new int[ob1.size];
	Element* ptr1 = ob1.e;
	
	for (int i = ob1.size - 1; i >= 0; i--)
	{
		arr[i] = ptr1->data;
		ptr1 = ptr1->prev;
	}

	for (int i = 0; i < ob1.size; i++)
	{
		this->push(arr[i]);
	}

	delete[] arr;
	int* arr2 = new int[ob2.size];
	Element* ptr2 = ob2.e;

	for (int i = ob2.size - 1; i >= 0; i--)
	{
		arr2[i] = ptr2->data;
		ptr2 = ptr2->prev;
	}

	for (int i = 0; i < ob2.size; i++)
	{
		push(arr2[i]);
	}

	delete[] arr2;
	this->out();
}
