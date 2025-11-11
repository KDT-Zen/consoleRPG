#pragma once
#include <string>
#include "CharacterData.h"

// キャラクター基底クラス
class Character {

	//　キャラクターのステータス
	std::string name;
	int id;
	int hp;
	int max_hp;
	int atk;
	int def;

public:

	// コンストラクタ
	Character(CharacterDate& data) :
		name(data.name),
		id(data.id),
		hp(data.hp),
		max_hp(data.hp),
		atk(data.atk),
		def(data.def)
	{

	}

	// 外部で取得用
	std::string GetName() const { return name; }
	int GetHp() const { return hp; }
	int GetAtk() const { return atk; }
	int GetDef() const { return def; }

	// 行動関数 
	virtual void Action() = 0;

	//　ダメージを与える
	void TakeDamage(int arg_damage);
	//　回復をする
	void TakeHeal();

};