#pragma once
#include "TP_1_Heritage.h"
class dd : public TP_1_Heritage
{
	Q_OBJECT

public:
	dd(QWidget *parent = Q_NULLPTR);
	dd();
	dd(int n);
	int valde;
	int valtotal;
	void operator++(int);
	friend void operator+=(int n, dd & de);
};

