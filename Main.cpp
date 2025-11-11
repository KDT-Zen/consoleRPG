// consoleRPG.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>
#include "GameManager.h"
#include "CommonAttak.h"




using namespace std;


//　ゲームモードを保持する変数に最初のゲームモードを入れる
GameMode currentGameMode = GameMode::TITLE;

GameMode prevMode = currentGameMode;

//　Attakクラスのインスタンス
CommonAttak attak;



//　最初の入力キーを保持する変数
char start_key;

//　攻撃を開始する入力キーを保持する変数
char attak_key;

//　プレイヤーのHP
int player_hp;

int all_player_hp;


int all_enemy_hp;

//　エネミーのHP
int enemy_hp;


int player_atk;


int enemy_atk;




int main()
{

    srand((unsigned int)time(nullptr)); // 乱数の種をセット

    //　それぞれのHPに値をいれる
    player_hp = 100;

    enemy_hp = 100;



    //　タイトルと文字列の描画
    cout << "コンソールＲＰＧ" << endl;

    cout << "aを入力で開始" << endl;

    //　キー入力を受け付ける
    cin >> start_key;


    //　キー入力が正しく入力されていたら
    if (start_key == 'a') {


        //　ゲームモードをINGAMEにする
        currentGameMode = GameMode::INGAME;


    }

    //　ゲームモードがINGAMEの時
    if (currentGameMode == GameMode::INGAME) {


        //　文字列描画
        cout << "PLAYER_HP :" << player_hp << endl;

        cout << "ENEMY_HP :" << enemy_hp << endl;


        cout << "bで攻撃" << endl;

        //　攻撃開始のキー入力の受け付け
        cin >> attak_key;

        //　キーが正しく入力されていたら
        if (attak_key == 'b') {

            //attakクラスにある攻撃関数を呼び出す
           player_atk =  attak.player_attak();
            enemy_atk = attak.enemy_attak();


            all_enemy_hp = player_atk - enemy_hp;

            all_player_hp = enemy_atk - player_hp;


            //　攻撃されたあとのお互いのHPの描画
            cout << "互いの攻撃!  NPC残りHP :" << all_player_hp << "  PLYAER残りHP :" << all_enemy_hp << endl;


        }

        //　敵のHPが０になったらプレイヤー勝利
        if (enemy_hp <= 0) {

            currentGameMode == GameMode::RESULT_PLAYER_WIN;


        }

        //　プレイヤーのHPが０になったらエネミーの勝利
        if (player_hp <= 0) {

            currentGameMode == GameMode::RESULT_ENEMY_WIN;


        }

        //　それぞれの勝利時にそれぞれの文字列の描画
        if (currentGameMode == GameMode::RESULT_PLAYER_WIN) {

            cout << "PLAYER_WIN" << endl;

        }

        if (currentGameMode == GameMode::RESULT_ENEMY_WIN) {

            cout << "ENEMEY_WIN" << endl;

        }

    }
}



