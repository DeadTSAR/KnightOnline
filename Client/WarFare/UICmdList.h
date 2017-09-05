// UICmdList.h: interface for the CUICmdList class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_UICmdList_H)
#define AFX_UICurtail_H

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "N3UIBase.h"
#include "N3UIButton.h"
#include "N3UIList.h"

class CUICmdList : public CN3UIBase
{
protected:

	CN3UIButton*	m_pBtn_cancel;
	CN3UIList*		m_pList_CmdCat;
	CN3UIList*		m_pList_Cmds;

	bool		m_bOpenningNow; // ������ �ִ�..
	bool		m_bClosingNow;	// ������ �ִ�..
	float		m_fMoveDelta; // �ε巴�� ������ ������ ����� ���ؼ� ������ġ ��꿡 �ε��Ҽ����� ����..

	int			m_iRBtnDownOffs;

	enum iCmd
	{
		PRIVATE_CMD_LIST,
		TRADE_CMD_LIST,
		PARTY_CMD_LIST,
		CLAN_CMD_LIST,
		KNIGHTS_CMD_LIST,
		GUARDIAN_CMD_LIST,
		KING_CMD_LIST,
		GM_CMD_LIST
	};
	// Attributes
public:
	bool OnKeyPress(int iKey);
	void Open();
	void Close();
	void SetVisible(bool bVisible);
	bool CreateCategoryList();
	bool UpdateCommandList(uint8_t cmd);
	bool ExecuteCommand(uint8_t cmdSel);

	bool	ReceiveMessage(CN3UIBase* pSender, uint32_t dwMsg); // �޽����� �޴´�.. ������, msg

	virtual void	Tick();
	virtual void	Render(); // �̴ϸ� ������..
	virtual bool	Load(HANDLE hFile);

	virtual void	Release();
	CUICmdList();
	virtual ~CUICmdList();

};

#endif // !defined(AFX_UICmdList)



