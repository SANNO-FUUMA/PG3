#include "ClearScene.h"

void ClearScene::Init()
{
}
void ClearScene::Update(char* Keys, char *preKeys)
{
	if (preKeys[DIK_SPACE] == 0 && Keys[DIK_SPACE]) {
		scnenNo = TITLE;
	}
}
void ClearScene::Draw()
{
	Novice::DrawBox(0, 0, 1280, 720, 0.0f, RED, kFillModeSolid);
	Novice::ScreenPrintf(0, 0, "ClearScene");
}
