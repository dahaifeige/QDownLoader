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

	void startRequest(QUrl url);//开始请求
	void imgPathToHtml(QString &path);//设置widget背景图片
private slots:
	void ReplyFinished(QNetworkReply*);
	void on_pushButton_clicked();
	void on_pushButton_2_clicked();//下载按钮
	void on_pushButton_qq_clicked();
	void httpReadyRead();//http准备读取数据
	void updateDataReadProgress(qint64, qint64);//更新进度条
	void httpFinished();//http完成

private:
	Ui::QDownLoaderClass ui;
	QNetworkAccessManager* m_pManager;
	QNetworkReply *reply;
	QUrl url;
	QFile *file;
};
