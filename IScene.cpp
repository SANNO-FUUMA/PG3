#include "IScene.h"

int IScene::scnenNo = TITLE;

IScene::~IScene()
{
}

int IScene::GetSceneNo()
{
	return scnenNo;
}
