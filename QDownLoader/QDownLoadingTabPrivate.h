#pragma once
class QPushButton;
class QHBoxLayout;
class QTableView;
class QVBoxLayout;

class QDownLoadingTabPrivate
{
public:
	QPushButton* m_pCreateTaskPushBotton;
	QPushButton* m_pBeginTaskPushBotton;
	QPushButton* m_pPauseTaskPushBotton;
	QPushButton* m_pCancelTaskPushBotton;
	QPushButton* m_pOpenFileTaskPushBotton;
	QHBoxLayout* m_pHBoxLayout;
	QTableView* m_pTableView;
	QVBoxLayout* m_pVBoxLayout;
};