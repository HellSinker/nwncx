#include <windows.h>

class CGuiObject
{
public:
	CGuiObject();
	virtual ~CGuiObject(){};

	/*
	offset ?HandleOkButton@CPanelLoadSave@@MAEXXZ ; CPanelLoadSave::HandleOkButton(void)
	offset ?SetId@CGameObject@@UAEXK@Z ; CGameObject::SetId(ulong)
	offset ?SetId@CGameObject@@UAEXK@Z ; CGameObject::SetId(ulong)
	offset ?GetGuiObjType@CGuiObject@@UAEHXZ ; CGuiObject::GetGuiObjType(void)
	offset ?AsNWSObject@CGameObject@@UAEPAVCNWSObject@@XZ ; CGameObject::AsNWSObject(void)
	offset ?AsNWSObject@CGameObject@@UAEPAVCNWSObject@@XZ ; CGameObject::AsNWSObject(void)
	offset ?AsNWSObject@CGameObject@@UAEPAVCNWSObject@@XZ ; CGameObject::AsNWSObject(void)
	offset ?AsCGuiExamineGeneric@CGuiExamineGeneric@@UAEPAV1@XZ ; CGuiExamineGeneric::AsCGuiExamineGeneric(void)
	offset ?LoadGffData@CGuiObject@@UAEXPAVCResGFF@@PAVCGuiTag@@@Z ; CGuiObject::LoadGffData(CResGFF *,CGuiTag *)
	offset ?Update@CGuiObject@@MAEHM@Z ; CGuiObject::Update(float)
	offset ??1CNWSCombatRoundAction@@QAE@XZ ; CNWSCombatRoundAction::~CNWSCombatRoundAction(void)

	offset ?SetId@CGameObject@@UAEXK@Z ; CGameObject::SetId(ulong)
	offset ?HandleOkButton@CPanelLoadSave@@MAEXXZ ; CPanelLoadSave::HandleOkButton(void)
	offset ?HandleUninitializedCallback@?$CGuiCallbackr1@HPAVCTreeviewNode@@@@QAEHPAVCTreeviewNode@@@Z ; CGuiCallbackr1<int,CTreeviewNode *>::HandleUninitializedCallback(CTreeviewNode *)
	offset ?GetIsIDInExcludeList@CNWArea@@UAEHKPAV?$CExoArrayList@PAVCGameObject@@@@@Z ; CNWArea::GetIsIDInExcludeList(ulong,CExoArrayList<CGameObject *> *)
	offset ?LoadGffData@CGuiObject@@UAEXPAVCResGFF@@PAVCGuiTag@@@Z ; CGuiObject::LoadGffData(CResGFF *,CGuiTag *)
	offset ?HandleOkButton@CPanelLoadSave@@MAEXXZ ; CPanelLoadSave::HandleOkButton(void)
	offset ?HandleOkButton@CPanelLoadSave@@MAEXXZ ; CPanelLoadSave::HandleOkButton(void)
	offset ?HandleOkButton@CPanelLoadSave@@MAEXXZ ; CPanelLoadSave::HandleOkButton(void)
	offset ?HandleOkButton@CPanelLoadSave@@MAEXXZ ; CPanelLoadSave::HandleOkButton(void)
	offset ?HandleOkButton@CPanelLoadSave@@MAEXXZ ; CPanelLoadSave::HandleOkButton(void)
	offset ?HandleOkButton@CPanelLoadSave@@MAEXXZ ; CPanelLoadSave::HandleOkButton(void)
	offset ?HandleOkButton@CPanelLoadSave@@MAEXXZ ; CPanelLoadSave::HandleOkButton(void)
	offset ?HandleUninitializedCallback@?$CGuiCallbackr1@HPAVCTreeviewNode@@@@QAEHPAVCTreeviewNode@@@Z ; CGuiCallbackr1<int,CTreeviewNode *>::HandleUninitializedCallback(CTreeviewNode *)
	offset ?HandleTriggerTooltip@CGuiObject@@MAEXXZ ; CGuiObject::HandleTriggerTooltip(void)
	offset ?HandleFinishTooltip@CGuiObject@@MAEXXZ ; CGuiObject::HandleFinishTooltip(void)
	offset ?SetId@CGameObject@@UAEXK@Z ; CGameObject::SetId(ulong)
	offset ?HandleDragDropAsDest@CGuiObject@@MAEHHPAVCGuiDragSource@@PAVCHitInfo@@@Z ; CGuiObject::HandleDragDropAsDest(int,CGuiDragSource *,CHitInfo *)
	offset ?AsNWSObject@CGameObject@@UAEPAVCNWSObject@@XZ ; CGameObject::AsNWSObject(void)
	offset ?AsNWSObject@CGameObject@@UAEPAVCNWSObject@@XZ ; CGameObject::AsNWSObject(void)
	offset ?HandleOkButton@CPanelLoadSave@@MAEXXZ ; CPanelLoadSave::HandleOkButton(void)
	offset ?SetId@CGameObject@@UAEXK@Z ; CGameObject::SetId(ulong)
	dd offset ?GetPanelHeight@CGuiPanel@@UAEMXZ ; CGuiPanel::GetPanelHeight(void)
	dd offset ?GetPanelHeight@CGuiPanel@@UAEMXZ ; CGuiPanel::GetPanelHeight(void)
	dd offset ?HandleOkButton@CPanelLoadSave@@MAEXXZ ; CPanelLoadSave::HandleOkButton(void)
	dd offset ?OnResourceServiced@CRes@@UAEHXZ ; CRes::OnResourceServiced(void)
	dd offset ?OnResourceServiced@CRes@@UAEHXZ ; CRes::OnResourceServiced(void)
	dd offset ?HandleOkButton@CPanelLoadSave@@MAEXXZ ; CPanelLoadSave::HandleOkButton(void)
	dd offset ?AsNWSObject@CGameObject@@UAEPAVCNWSObject@@XZ ; CGameObject::AsNWSObject(void)
	*/

	virtual void VFunc1(){};
	virtual void VFunc2(int a1){};
	virtual void VFunc3(int a1){};
	virtual int GetGuiObjType(){return NULL;};
	virtual CGuiObject *As1(){return NULL;};
	virtual CGuiObject *As2(){return NULL;};
	virtual CGuiObject *As3(){return NULL;};
	virtual CGuiObject *AsCGuiExamineGeneric(){return NULL;};
	virtual void LoadGffData(int a1, int a2){};
	virtual int Update(float a1){return NULL;};
	virtual void PostAttachmentInitialize(){};
	virtual void VFunc4(int a1){};
	virtual void HandleLoseModality(){};
	virtual int VFunc5(int a1){return NULL;};
	virtual int HandleKeyEvent(DWORD a1, DWORD a2){return NULL;};
	virtual void VFunc6(int a1, int a2){};
	virtual void VFunc7(){};
	virtual void VFunc8(){};
	virtual void VFunc9(){};
	virtual void VFunc10(){};
	virtual void VFunc11(){};
	virtual void VFunc12(){};
	virtual void VFunc13(){};
	virtual int VFunc14(int a1){return NULL;};
	virtual void HandleTriggerTooltip(){};
	virtual void HandleFinishTooltip(){};
	virtual void VFunc15(int a1){};
	virtual int HandleDragDropAsDest(int, int, int){return NULL;};
	virtual void* VFunc16(){return NULL;};
	virtual void* VFunc17(){return NULL;};
	/*virtual void OnActivate();
	virtual void OnDeactivate();
	virtual float GetFloat1();
	virtual float GetFloat2();*/

	/*
	00000000 vftable         dd ?
	00000004 field_4         dd ?
	00000008 AurObject       dd ?
	0000000C field_C         dd ?
	00000010 field_10        dd ?
	00000014 field_14        dd ?
	00000018 field_18        dd ?
*/

	DWORD field_4;
	void *AurObject;
	DWORD field_C, field_10, field_14, field_18;
};

void init();