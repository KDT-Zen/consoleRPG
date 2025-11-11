#pragma once




//　シーンごとに切り替える
enum GameMode {
	TITLE,
	INGAME,
	RESULT_PLAYER_WIN,
	RESULT_ENEMY_WIN
};

class GameManager {

	//int gamemode;

	// スクリーンモード
	int screen_mode;

	//// スタート
	//char start_key;

	////　攻撃を開始する入力キーを保持する変数
	//char attak_key;

	char input_key;


	//　プレイヤーのHP
	int player_hp;

	//　エネミーのHP
	int enemy_hp;

	//　与えるダメージを保持する
	int player_atk;

	int enemy_atk;


	GameManager();

	//virtual ~GameManager();

public:

	// コピー・代入の禁止
	GameManager(const GameManager&) = delete;
	GameManager& operator = (const GameManager&) = delete;

	static GameManager& Instance() {
		static GameManager instance;
		return instance;
	}
	
	// 初期化
	void Init();
	// 更新
	void Update();
	//// 描画
	//void Render();
	// 終了
	void Exit();
};

