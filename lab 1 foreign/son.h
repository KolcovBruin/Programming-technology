#pragma once

#include"pch.h"

class son1 : public pch
{
public:
	float sredarifmet();
};

class son2 : protected pch
{
public:
	void push(int n);//добавление элемента в очередь
	int pop();// извлечения элемента
	void out();// вывод на экран
	void copy(son2& ob);// Копирование очереди
	void slian(son2& ob1, son2& ob2);
	bool prov();//Проверяем на пустоту
	float sredarifmet();
};

class son3 : private pch
{
public:
	void push(int n);//добавление элемента в очередь
	int pop();// извлечения элемента
	void out();// вывод на экран
	void copy(son3& ob);// Копирование очереди
	void slian(son3& ob1, son3& ob2);
	bool prov();//Проверяем на пустоту
	float sredarifmet();
};
