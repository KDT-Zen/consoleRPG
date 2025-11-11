#pragma once
#include <string>

struct CharacterDate
{
	//　キャラクターのステータス
	std::string name;
	int id;
	int hp;
	int atk;
	int def;
};

//　キャラクター名の列挙
enum CHRACTER_NAME  
{
	// プレイヤー
	ZEN,
	// エネミー
	SLIME,
	GOBLIN,
	WOLF,
};