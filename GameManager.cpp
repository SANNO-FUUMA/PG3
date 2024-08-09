#include "GameManager.h"
#include <Novice.h>
#include<stdio.h>

GameManager::GameManager()
{
	sceneArr_[TITLE] = std::make_unique<TitleScene>();
	sceneArr_[STAGE] = std::make_unique<StageScene>();
	sceneArr_[CLEAR] = std::make_unique<ClearScene>();

	currentSceneNo_ = TITLE;
}
GameManager::~GameManager()
{
}
int GameManager::Run(char* Keys, char* preKeys)
{

	while (Novice::ProcessMessage() == 0) {
		Novice::BeginFrame();

		memcpy(preKeys, Keys, 256);
		Novice::GetHitKeyStateAll(Keys);
		prevSceneNo_ = currentSceneNo_;
		currentSceneNo_ = sceneArr_[currentSceneNo_]->GetSceneNo();
		if (prevSceneNo_ != currentSceneNo_) {
			sceneArr_[currentSceneNo_]->Init();
		}
		sceneArr_[currentSceneNo_]->Update(Keys, preKeys);

		sceneArr_[currentSceneNo_]->Draw();
		Novice::EndFrame();

		if (preKeys[DIK_ESCAPE] == 0 && Keys[DIK_ESCAPE] != 0) {
			break;
		}
	}
	return 0;
}




