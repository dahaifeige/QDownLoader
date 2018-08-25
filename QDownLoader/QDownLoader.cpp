#include "QDownLoader.h"
#include "QDownLoadingTab.h"

#include <QNetworkAccessManager>
#include <QNetworkReply>
#include <QMessageBox>
#include <QFile>
#include <QFileInfo>

QDownLoader::QDownLoader(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);

	setAutoFillBackground(true);
	QPalette palette;
	//palette.setBrush(QPalette::Background, QBrush(QPixmap("./image/background.png")));//��Դ�ļ���Ŀ¼
	setPalette(palette);

	ui.progressBar->hide();
	m_pDownLoadingTab = new QDownLoadingTab(this);
	ui.tabWidget->addTab(m_pDownLoadingTab, QStringLiteral("��������"));
	m_pManager = new QNetworkAccessManager(this);
	
	connect(m_pManager, SIGNAL(finished(QNetworkReply*)), this, SLOT(ReplyFinished(QNetworkReply*)));

}

void QDownLoader::startRequest(QUrl url)
{

	reply = m_pManager->get(QNetworkRequest(url));
	//ÿ�����µ����ݿ��Զ�ȡ��ʱ���ᷢ��readyRead()�ź�
	connect(reply, SIGNAL(readyRead()),
		this, SLOT(httpReadyRead()));
	//ÿ��������������ؽ��ȸ���ʱ���ᷢ��downloadProgress()�ź�
	connect(reply, SIGNAL(downloadProgress(qint64, qint64)),
		this, SLOT(updateDataReadProgress(qint64, qint64)));
	//ÿ��Ӧ�������ʱ���ᷢ��finished()�ź�
	connect(reply, SIGNAL(finished()),
		this, SLOT(httpFinished()));
}

void QDownLoader::imgPathToHtml(QString &path)
{
	path = QString("<img src=\"%1\"/>").arg(path);
}

void QDownLoader::ReplyFinished(QNetworkReply* reply)
{
	QString all = reply->readAll();//ʹ��readAll��ȡ���е�Ӧ������
//	ui.textBrowser->setText(all);
	reply->deleteLater();
}

void QDownLoader::on_pushButton_clicked()
{
	QString qurl = ui.lineEdit->text();//��ȡ�����url��ַ
	if (ui.lineEdit->text() != "")
	{
		m_pManager->get(QNetworkRequest(QUrl(qurl)));//��������
	}
	else
	{
		QMessageBox::warning(this, QString::fromLocal8Bit("����Ի���"),
			QString::fromLocal8Bit("������Url��ַ"), QMessageBox::Abort);
	}
}

void QDownLoader::httpReadyRead()
{
	//�ж��Ƿ񴴽����ļ����ǵĻ���������������д�뵽�ļ���
	if (file)
		file->write(reply->readAll());
}

void QDownLoader::updateDataReadProgress(qint64 bytesRead, qint64 totalBytes)
{
	//�������ֵ�͵�ǰֵ
	ui.progressBar->setMaximum(totalBytes);
	ui.progressBar->setValue(bytesRead);
}

void QDownLoader::httpFinished()
{
	//������غ󽫽��������أ�����������ˢ�µ��ļ��У�
	//Ȼ��ɾ����file��reply�Ķ���
	ui.progressBar->hide();
	file->flush();
	file->close();
	reply->deleteLater();
	reply = 0;
	delete file;
	file = 0;
}

void QDownLoader::on_pushButton_2_clicked()//���ذ�ť
{
	url = ui.lineEdit->text();
	QFileInfo info(url.path());
	QString fileName(info.fileName());
	file = new QFile("C:/Users/Administrator/Downloads/" + fileName);
	if (!file->open(QIODevice::WriteOnly))
	{
		qDebug() << "file open error!";
		delete file;
		file = 0;
		return;
	}
	startRequest(url);
	ui.progressBar->setValue(0);
	ui.progressBar->show();
}

/*---------------------�Ƽ�����ʵ��-----------------------*/
void QDownLoader::on_pushButton_qq_clicked()
{
	//ui.textBrowser->clear();
	ui.lineEdit->setText("http://dldir1.qq.com/qqfile/qq/QQ8.9.1/20453/QQ8.9.1.exe");
	QString imgPath = QString(":/image/image/qq.jpg");
	imgPathToHtml(imgPath);
	//ui.textBrowser->insertHtml(imgPath);
}