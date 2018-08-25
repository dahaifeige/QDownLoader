#pragma once

#include <QMainWindow>
#include <QUrl>
#include "ui_QDownLoader.h"

class QNetworkReply;
class QNetworkAccessManager;
class QFile;

class QDownLoader : public QMainWindow
{
	Q_OBJECT

public:
	QDownLoader(QWidget *parent = Q_NULLPTR);

	void startRequest(QUrl url);//��ʼ����
	void imgPathToHtml(QString &path);//����widget����ͼƬ
private slots:
	void ReplyFinished(QNetworkReply*);
	void on_pushButton_clicked();
	void on_pushButton_2_clicked();//���ذ�ť
	void on_pushButton_qq_clicked();
	void httpReadyRead();//http׼����ȡ����
	void updateDataReadProgress(qint64, qint64);//���½�����
	void httpFinished();//http���

private:
	Ui::QDownLoaderClass ui;
	QNetworkAccessManager* m_pManager;
	QNetworkReply *reply;
	QUrl url;
	QFile *file;
};
