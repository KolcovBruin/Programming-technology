#pragma once
#include <iostream>

using namespace std;

class coordinate
{

private:
	int x, y, z;

protected:

public:
	coordinate();

	void operator + (int number);
	void operator + (coordinate& xyz);

	friend void operator - (coordinate& xyz, int number);
	friend void operator - (coordinate& xyz_1, coordinate& xyz_2);

	friend istream& operator>>(istream& in, coordinate& xyz);
	friend ostream& operator<<(ostream& os, coordinate& xyz);

	void operator < (const coordinate xyz);
	void operator > (const coordinate xyz);
	void operator == (const coordinate xyz);

	friend void operator != (coordinate& xyz_1, coordinate& xyz_2);
	friend void operator <= (coordinate& xyz_1, coordinate& xyz_2);
	friend void operator >= (coordinate& xyz_1, coordinate& xyz_2);
};
