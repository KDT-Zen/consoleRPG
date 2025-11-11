// consoleRPG.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>
#include <memory>
#include "GameManager.h"
#include "CommonAttak.h"

//　非推奨のためコメントアウト
// using namespace std;


////　ゲームモードを保持する変数に最初のゲームモードを入れる
//GameMode currentGameMode = GameMode::TITLE;

////　不要コード
//GameMode prevMode = currentGameMode;

////　Attakクラスのインスタンス
//CommonAttak attak;

////　最初の入力キーを保持する変数
//char start_key;

////　攻撃を開始する入力キーを保持する変数
//char attak_key;
//
////　プレイヤーのHP
//int player_hp;
//
////　エネミーのHP
//int enemy_hp;
//
////　与えるダメージを保持する
//int player_atk;
//
//int enemy_atk;




int main()
{

    while (true)
    {
        GameManager::Instance().Init();
        GameManager::Instance().Update();
    }

    return 0;

    srand((unsigned int)time(nullptr)); // 乱数の種をセット

    //　それぞれのHPに値をいれる
    player_hp = 100;

    enemy_hp = 100;



    ////　タイトルと文字列の描画
    //std::cout << "コンソールＲＰＧ" << std::endl;

    //std::cout << "aを入力で開始" << std::endl;

    ////　キー入力を受け付ける
    //std::cin >> start_key;


    ////　キー入力が正しく入力されていたら
    //if (start_key == 'a') {
    //    //　ゲームモードをINGAMEにする
    //    currentGameMode = GameMode::INGAME;
    //}

    ////　ゲームモードがINGAMEの時
    //if (currentGameMode == GameMode::INGAME) {


    //    //　文字列描画
    //    std::cout << "PLAYER_HP :" << player_hp << std::endl;

    //    std::cout << "ENEMY_HP :" << enemy_hp << std::endl;

    //    std::cout << "bで攻撃" << std::endl;

    //    //　攻撃開始のキー入力の受け付け
    //    std::cin >> attak_key;
    //    //　キーが正しく入力されていたら
    //    while (player_hp >= 0 || enemy_hp >= 0) {
    //        if (attak_key == 'b') {

    //            //attakクラスにある攻撃関数を呼び出す
    //            player_atk = attak.player_attak();
    //            enemy_atk = attak.enemy_attak();

    //            //各HPからダメージを引く
    //            enemy_hp = enemy_hp - player_atk;

    //            player_hp = player_hp - enemy_atk;


    //            //　攻撃されたあとのお互いのHPの描画
    //            std::cout << "互いの攻撃!  NPC残りHP :" << player_hp << "  PLYAER残りHP :" << enemy_hp << std::endl;
    //           

    //        }
    //    }

    //    //　敵のHPが０になったらプレイヤー勝利
    //    if (enemy_hp <= 0) {

    //        currentGameMode == GameMode::RESULT_PLAYER_WIN;


    //    }

    //    //　プレイヤーのHPが０になったらエネミーの勝利
    //    if (player_hp <= 0) {

    //        currentGameMode == GameMode::RESULT_ENEMY_WIN;


    //    }

    //    //　それぞれの勝利時にそれぞれの文字列の描画
    //    if (currentGameMode == GameMode::RESULT_PLAYER_WIN) {

    //        std::cout << "PLAYER_WIN" << std::endl;

    //    }

    //    if (currentGameMode == GameMode::RESULT_ENEMY_WIN) {

    //        std::cout << "ENEMEY_WIN" << std::endl;

    //    }

    //}
}



