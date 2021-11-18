#pragma once

class dd
{
	
private :
	
	int LancerDe();
	int ValDe;
	int ScoreTotal = 0;

public:

	dd();
	dd(int n);
	void operator++(int);
	friend void operator+=(int n, dd & de);
	friend void operator<(int n, dd &dd);
};