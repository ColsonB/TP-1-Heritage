#pragma once

class dd
{
	
private :
	
	int ValDe;
	int ScoreTotal = 0;
	int DeLancer;

public:

	dd();
	dd(int n);
	void operator++(int);
	void operator=(int& value);
	friend void operator+=(int &n, dd &dd);
	friend void operator<(int &n, dd &dd);
};