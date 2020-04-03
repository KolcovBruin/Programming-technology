#include "son.h"
#include <iostream>

using namespace std;

float son1::sredarifmet()
{
	float z = 0;
	Element* e = getE();
	int t = size;

	while (t > 0)
	{
		z = z + (e->data);
		e = e->prev;
		t--;
	}

	return z / size;
}

float son2::sredarifmet()
{
	float z = 0;
	Element* e = getE();
	int t = size;

	while (t > 0)
	{
		z = z + (e->data);
		e = e->prev;
		t--;
	}

	return z / size;
}

int son2::pop()
{
	return pch::pop();
}

void son2::push(int Value)
{
	return pch::push(Value);
}

void son2::out()
{
	return pch::out();
}

void son2::copy(son2& obj)
{
	return pch::copy(obj);
}

void son2::slian(son2& obj1, son2& obj2)
{
	return pch::slian(obj1, obj2);
}

bool son2::prov()
{
	return pch::prov();
}

float son3::sredarifmet()
{
	float z = 0;
	Element* e = getE();
	int t = size;

	while (t > 0)
	{
		z = z + (e->data);
		e = e->prev;
		t--;
	}

	return z / size;
}

int son3::pop()
{
	return pch::pop();
}

void son3::push(int Value)
{
	return pch::push(Value);
}

void son3::out()
{
	return pch::out();
}

void son3::copy(son3& obj)
{
	return pch::copy(obj);
}

void son3::slian(son3& obj1, son3& obj2)
{
	return pch::slian(obj1, obj2);
}

bool son3::prov()
{
	return pch::prov();
}
