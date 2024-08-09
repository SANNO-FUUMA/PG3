#include "StageScene.h"

void StageScene::Init()
{
}
void StageScene::Update(char* Keys, char *preKeys)
{
	if (preKeys[DIK_SPACE] == 0 && Keys[DIK_SPACE]) {
		scnenNo = CLEAR;
	}
}
void StageScene::Draw()
{
	Novice::DrawBox(0, 0, 1280, 720, 0.0f, BLUE, kFillModeSolid);
	Novice::ScreenPrintf(0, 0, "StageScene");
}
