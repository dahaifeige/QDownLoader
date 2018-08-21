#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_QDownLoader.h"

class QDownLoader : public QMainWindow
{
	Q_OBJECT

public:
	QDownLoader(QWidget *parent = Q_NULLPTR);

private:
	Ui::QDownLoaderClass ui;
};
