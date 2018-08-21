#include "QDownLoader.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	QDownLoader w;
	w.show();
	return a.exec();
}
