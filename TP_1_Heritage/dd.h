#pragma once

class dd
{

	public:

	dd();
	dd(int n);
	int valde;
	int valtotal;
	void operator++(int);
	friend void operator+=(int n, dd & de);
	friend void operator<(int n, dd &dd);
};