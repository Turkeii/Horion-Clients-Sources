#pragma once
#include "Module.h"
class Scaffold : public IModule {
public:
	Scaffold();
	~Scaffold();
	bool THICCC = false;
	bool GayNigaFags = true;
	bool Fullselect = false;
	bool SukinMyBigJuicyAss = true;
	bool fagNigas = false;
	float UpwardsFlyinNigas = 0.5f;
	vec3_t blockBelowUrMom;
	int slot;
	bool airplace = false;
	bool autoselect = true;
	bool entityscaff = false;
	bool predict = true;
	bool yLock = false;
	bool staircaseMode = false;
	bool spam = false;
	bool canPlaceHere(vec3_t blockPos);
	bool tryScaffold(vec3_t blockBelow);
	bool tryActuallySomewhatDecentScaffold(vec3_t blockBelow);
	bool findBlock();
	bool isUsefulBlock(C_ItemStack* itemStack);
	bool rot = false;
	vec3_t blockBelowtest;
	vec3_t blockBelowtest2;
	bool spoof = false;
	bool noSwing = false;
	// Inherited via IModule
	virtual const char* getModuleName() override;
	virtual void onTick(C_GameMode* gm) override;
	virtual void onEnable() override;
	virtual void onDisable() override;
	virtual void onLevelRender();
	virtual void onPlayerTick(C_Player* plr) override;
	virtual void onPostRender(C_MinecraftUIRenderContext* renderCtx);
	virtual void onSendPacket(C_Packet* packet);
};
