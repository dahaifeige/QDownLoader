#pragma once

#include <QWidget>
#include <QScopedPointer>

class QDownLoadingTabPrivate;

class QDownLoadingTab : public QWidget
{
	Q_OBJECT

public:
	QDownLoadingTab(QWidget *parent);
	~QDownLoadingTab();
	void init();
private:
	QScopedPointer<QDownLoadingTabPrivate> d;

};
