#pragma once
#include"IScene.h"
#include"Novice.h"

class TitleScene :public IScene

{
public:
	void Init()override;
	void Update(char* Keys, char *preKeys)override;
	void Draw()override;
};

