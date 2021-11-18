#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_TP_1_Heritage.h"
#include "dd.h"

class TP_1_Heritage : public QMainWindow
{
    Q_OBJECT

public:
    TP_1_Heritage(QWidget *parent = Q_NULLPTR);

private:
    Ui::TP_1_HeritageClass ui;
	int n;
	dd *de;
	

public slots:
	void lancede();
	void scoretotal();
	void remisezero();
	void score();
};