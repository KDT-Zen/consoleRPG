#pragma once



class CommonAttak {

public:

	//　ダメージ取得して与える関数を作る。ランダムな値を取得してそれをそのまま攻撃力として使うから、値が同じにならないように２つ用意する。
	int player_attak();

	int enemy_attak();

};