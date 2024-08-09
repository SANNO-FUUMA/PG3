#include <Novice.h>
#include"GameManager.h"


const char kWindowTitle[] = "GC2D_07_サンノウ_フウマ";

// Windowsアプリでのエントリーポイント(main関数)
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {

	// ライブラリの初期化
	Novice::Initialize(kWindowTitle, 1280, 720);

	// キー入力結果を受け取る箱
	char keys[256] = {0};
	char preKeys[256] = {0};

	
	//GameManager
	std::unique_ptr<GameManager>gameManager= std::make_unique<GameManager>();
	gameManager->Run(keys, preKeys);
	// ライブラリの終了
	Novice::Finalize();
	return 0;
}
