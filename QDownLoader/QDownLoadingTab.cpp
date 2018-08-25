#include "QDownLoadingTab.h"
#include "QDownLoadingTabPrivate.h"

#include <QPushButton>
#include <QHBoxLayout>
#include <QTableView>

QDownLoadingTab::QDownLoadingTab(QWidget *parent)
	: QWidget(parent),
	d{new QDownLoadingTabPrivate}
{
	init();
}

QDownLoadingTab::~QDownLoadingTab()
{
}

void QDownLoadingTab::init()
{
	d->m_pCreateTaskPushBotton = new QPushButton;
	d->m_pCreateTaskPushBotton->setText(QStringLiteral("新建任务"));

	d->m_pBeginTaskPushBotton = new QPushButton;
	d->m_pBeginTaskPushBotton->setText(QStringLiteral("开始"));

	d->m_pPauseTaskPushBotton = new QPushButton;
	d->m_pPauseTaskPushBotton->setText(QStringLiteral("暂停"));

	d->m_pCancelTaskPushBotton = new QPushButton;
	d->m_pCancelTaskPushBotton->setText(QStringLiteral("取消"));

	d->m_pOpenFileTaskPushBotton = new QPushButton;
	d->m_pOpenFileTaskPushBotton->setText(QStringLiteral("打开"));

	d->m_pHBoxLayout = new QHBoxLayout;
	d->m_pHBoxLayout->addWidget(d->m_pCreateTaskPushBotton);
	d->m_pHBoxLayout->addWidget(d->m_pBeginTaskPushBotton);
	d->m_pHBoxLayout->addWidget(d->m_pPauseTaskPushBotton);
	d->m_pHBoxLayout->addWidget(d->m_pCancelTaskPushBotton);
	d->m_pHBoxLayout->addWidget(d->m_pOpenFileTaskPushBotton);

	d->m_pTableView = new QTableView;

	d->m_pVBoxLayout = new QVBoxLayout;
	d->m_pVBoxLayout->addLayout(d->m_pHBoxLayout);
	d->m_pVBoxLayout->addWidget(d->m_pTableView);

	setLayout(d->m_pVBoxLayout);
}
