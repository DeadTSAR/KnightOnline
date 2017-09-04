// UIStateBar.h: interface for the CUIStateBar class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_UICurtail_H)
#define AFX_UICurtail_H

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "N3UIBase.h"

class CUICurtail : public CN3UIBase
{
protected:

	CN3UIButton*	m_pBtn_cancel;

	bool		m_bOpenningNow; // ������ �ִ�..
	bool		m_bClosingNow;	// ������ �ִ�..
	float		m_fMoveDelta; // �ε巴�� ������ ������ ����� ���ؼ� ������ġ ��꿡 �ε��Ҽ����� ����..

	int			m_iRBtnDownOffs;
	// Attributes
public:
	bool OnKeyPress(int iKey);
	void Open();
	void Close();
	void SetVisible(bool bVisible);

	bool	ReceiveMessage(CN3UIBase* pSender, uint32_t dwMsg); // �޽����� �޴´�.. ������, msg

	virtual void	Tick();
	virtual void	Render(); // �̴ϸ� ������..
	virtual bool	Load(HANDLE hFile);

	virtual void	Release();
	CUICurtail();
	virtual ~CUICurtail();

};

#endif // !defined(AFX_UICurtail)



