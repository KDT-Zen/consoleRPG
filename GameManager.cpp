#include "GameManager.h"
#include <iostream>

void GameManager::Init() {

	screen_mode = TITLE;
}

//　GameMamager.hで作ったGAMEMODEを使って切り替える
void GameManager::Update() {

	switch (screen_mode) {

	case TITLE:

		//　タイトルと文字列の描画
		std::cout << "コンソールＲＰＧ" << std::endl;
		// 案内
		std::cout << "aを入力で開始" << std::endl;

		//　キー入力を受け付ける
		std::cin >> input_key;

		//　キー入力が正しく入力されていたら
		if (input_key == 'a') {
			//　ゲームモードをINGAMEにする
			screen_mode = GameMode::INGAME;
		}


		break;

	case INGAME:

		// ステータス表示

		// 開始案内
		// 行動者の確認

		// アクション

		// バトル続行確認
		//　└true : 続行　false : 終了（勝敗判定確認）

		// 終了の場合
		// 勝敗判定後
		// └true: RESULT_PLAYER_WIN  false:RESULT_ENEMY_WIN


		break;

	case RESULT_PLAYER_WIN:
		break;

	case RESULT_ENEMY_WIN:
		break;

	}

}

//void GameManager::Render() {
//
//}

void GameManager::Exit()
{

}
