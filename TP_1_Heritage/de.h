#pragma once
#include "TP_1_Heritage.h"
class de : public TP_1_Heritage
{
	Q_OBJECT

public:
	de(QWidget *parent = Q_NULLPTR);

private:
	Ui::TP_1_HeritageClass ui;
	int dd;
	int n;

public slots:
	void lancede();
	void scoretotal(int dd);
	void remisezero();
};

