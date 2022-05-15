#include <cmath>
#include <cstring>
#include "game.h"

using namespace std;

//   |   |   
//---|---|---
//   |   |   
//---|---|---
//   |   |   


void menu()
{
	cout << "***************" << endl << "*1 play 0 exit*" << endl << "***************\n";
}

void game()//游戏实现
{
	char ret = 0;
	char board[ROW][COL] = { 0 };//初始内容全空格
	//初始化棋盘
	initboard(board, ROW, COL);
	//打印棋盘
	DisplayBoard(board,ROW,COL);
	//下棋
	while (1)
	{
		//玩家下
		player(board,ROW,COL);
		DisplayBoard(board, ROW, COL);
		//判断玩家是否赢
		ret=win(board, ROW, COL);
		if (ret != 'c')
		{
			break;
		}
		//电脑下
		com(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//判断电脑是否赢
		ret=win(board, ROW, COL);
		if (ret!='c')
		{
			break;
		}
	}
	if (ret == '*')
	{
		cout << "玩家赢\n";
	}
	else if (ret == '#')
	{
		cout << "电脑赢\n";
	}
	else 
	{
		cout << "平局\n";
	}
}

void test()
{
	int input=0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		cout << "请选择\n";
		cin >> input;
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			cout << "退出游戏\n";
			break;
		default:
			cout << "选择错误，请重新选择\n";
			break;
		}
	} while (input);
}

int main()
{
	test();
	return 0;
}