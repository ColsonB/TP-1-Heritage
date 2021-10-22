#pragma once
#include "TP_1_Heritage.h"
class de : public TP_1_Heritage
{
	Q_OBJECT

public:
	de(QWidget *parent = Q_NULLPTR);
	de();
	de(int n);
	int valde;
	int valtotal;
	void operator++(int);
	friend void operator+=(int n, de & de);
};

