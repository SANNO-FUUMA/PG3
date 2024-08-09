#pragma once
#include"IScene.h"
#include"Novice.h"
class ClearScene :public IScene
{
	void Init()override;
	void Update(char* Keys, char *preKeys)override;
	void Draw()override;
};

