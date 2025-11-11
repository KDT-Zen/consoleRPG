#include "CommonAttak.h"
#include <iostream>
#include <cstdlib>
#include <ctime>   



//　ダメージを与える関数
//　引数に与える相手のHPの変数を渡す
int CommonAttak::player_attak() {
	
	int player_atk = rand() % (20 - 10 + 1) + 10; // 10〜20の乱数           
	

	//　player_atpを返す
	return player_atk;
}

int CommonAttak::enemy_attak() {

	int npc_atk = rand() % (20 - 10 + 1) + 10; // 10〜20の乱数     

	//　npc_atkを返す
	return npc_atk;
}




