#pragma once

struct Unit
{
	int value = 0; // значение элемента очереди
	Unit* prev = 0; // ссылка на предыдущий элемент очереди
};

class Queue
{
private:
	Unit* last = 0; // конец очереди

protected:
	int size; // размер очереди
	void push (int value); // добавление элементов в конец очереди

public:
	Queue(); // конструктор
	~Queue(); // деструктор 
	Queue(const Queue& tmp_queue); // конструктор копирования
	void out();
	Queue& operator = (const Queue& tmp_queue);
	Queue operator++ (int);
	Queue operator-- (int);
	friend Queue operator++ (Queue& tmp_queue);
	friend Queue operator-- (Queue& tmp_queue);
	bool operator! ();
};
