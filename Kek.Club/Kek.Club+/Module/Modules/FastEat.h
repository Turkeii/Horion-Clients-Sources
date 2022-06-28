#pragma once
#include "Module.h"
class FastEat : public IModule {
public:
	FastEat();
	~FastEat();

	// Inherited via IModule
	virtual const char* getModuleName() override;
	virtual void onLevelRender() override;
	virtual void onDisable() override;
};