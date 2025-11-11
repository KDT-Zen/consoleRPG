#pragma once
#include <string>
#include <memory>
#include <iostream>
#include "Character.h"

// キャラクターファクトリークラス
class CharaterFactory {

	// データテーブル
	static const CharacterDate CharacterTable[];

	// コンストラクタ
	CharaterFactory();

public:

	// コピー禁止・代入禁止
	CharaterFactory(const CharaterFactory&) = delete;
	CharaterFactory& operator = (const CharaterFactory&) = delete;
	static CharaterFactory& Instance()
	{
		static CharaterFactory instance;
		return instance;
	}


	// 生成
	std::shared_ptr<Character> CreateCharacter(int arg_id);

};
