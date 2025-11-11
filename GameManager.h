#pragma once




//Å@ÉVÅ[ÉìÇ≤Ç∆Ç…êÿÇËë÷Ç¶ÇÈ
enum GameMode {
	TITLE,
	INGAME,
	RESULT_PLAYER_WIN,
	RESULT_ENEMY_WIN
};

class GameManager {

	int gamemode;

	void Init();

	void Update();

	void Render();

	void Exit();
};

