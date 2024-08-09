#include "TitleScene.h"

void TitleScene::Init()
{
}
void TitleScene::Update(char* Keys, char* preKeys)
{
	if(preKeys[DIK_SPACE] == 0 && Keys[DIK_SPACE]) {
		scnenNo = STAGE;
	}
}
void TitleScene::Draw()
{
	Novice::DrawBox(0, 0, 1280, 720,0.0f,BLACK, kFillModeSolid);
	Novice::ScreenPrintf(0, 0, "TitleScene");
}
