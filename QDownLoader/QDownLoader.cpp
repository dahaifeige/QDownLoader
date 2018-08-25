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
	//palette.setBrush(QPalette::Background, QBrush(QPixmap("./image/background.png")));//资源文件夹目录
	setPalette(palette);

	ui.progressBar->hide();
	m_pDownLoadingTab = new QDownLoadingTab(this);
	ui.tabWidget->addTab(m_pDownLoadingTab, QStringLiteral("正在下载"));
	m_pManager = new QNetworkAccessManager(this);
	
	connect(m_pManager, SIGNAL(finished(QNetworkReply*)), this, SLOT(ReplyFinished(QNetworkReply*)));

}

void QDownLoader::startRequest(QUrl url)
{

	reply = m_pManager->get(QNetworkRequest(url));
	//每当有新的数据可以读取的时都会发送readyRead()信号
	connect(reply, SIGNAL(readyRead()),
		this, SLOT(httpReadyRead()));
	//每当网络请求的下载进度更新时都会发送downloadProgress()信号
	connect(reply, SIGNAL(downloadProgress(qint64, qint64)),
		this, SLOT(updateDataReadProgress(qint64, qint64)));
	//每当应答处理结束时都会发送finished()信号
	connect(reply, SIGNAL(finished()),
		this, SLOT(httpFinished()));
}

void QDownLoader::imgPathToHtml(QString &path)
{
	path = QString("<img src=\"%1\"/>").arg(path);
}

void QDownLoader::ReplyFinished(QNetworkReply* reply)
{
	QString all = reply->readAll();//使用readAll读取所有的应答数据
//	ui.textBrowser->setText(all);
	reply->deleteLater();
}

void QDownLoader::on_pushButton_clicked()
{
	QString qurl = ui.lineEdit->text();//获取输入的url地址
	if (ui.lineEdit->text() != "")
	{
		m_pManager->get(QNetworkRequest(QUrl(qurl)));//发出请求
	}
	else
	{
		QMessageBox::warning(this, QString::fromLocal8Bit("警告对话框"),
			QString::fromLocal8Bit("请输入Url地址"), QMessageBox::Abort);
	}
}

void QDownLoader::httpReadyRead()
{
	//判断是否创建了文件，是的话将读回来的数据写入到文件中
	if (file)
		file->write(reply->readAll());
}

void QDownLoader::updateDataReadProgress(qint64 bytesRead, qint64 totalBytes)
{
	//设置最大值和当前值
	ui.progressBar->setMaximum(totalBytes);
	ui.progressBar->setValue(bytesRead);
}

void QDownLoader::httpFinished()
{
	//完成下载后将进度条隐藏，将缓冲数据刷新到文件中，
	//然后删除掉file和reply的对象
	ui.progressBar->hide();
	file->flush();
	file->close();
	reply->deleteLater();
	reply = 0;
	delete file;
	file = 0;
}

void QDownLoader::on_pushButton_2_clicked()//下载按钮
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

/*---------------------推荐下载实现-----------------------*/
void QDownLoader::on_pushButton_qq_clicked()
{
	//ui.textBrowser->clear();
	ui.lineEdit->setText("http://dldir1.qq.com/qqfile/qq/QQ8.9.1/20453/QQ8.9.1.exe");
	QString imgPath = QString(":/image/image/qq.jpg");
	imgPathToHtml(imgPath);
	//ui.textBrowser->insertHtml(imgPath);
}