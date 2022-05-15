#include "game.h"

void menu()
{
	cout << "****************************" << endl;
	cout << "********* 1、play **********" << endl;
	cout << "********* 0、exit **********" << endl;
	cout << "****************************" << endl;
}


void game()
{
	//雷存储
	//1 布置雷的信息
	
	char mine[ROWS][COLS];
	//2 排查雷的信息
	char show[ROWS][COLS];
	//初始化
	initboard(mine, ROWS, COLS,'0');
	initboard(show, ROWS, COLS,'*');
	//打印棋盘
	//display(mine,ROW,COL);
	display(show, ROW, COL);
	//布置雷
	set(mine, ROW, COL);
	display(mine, ROW, COL);
	//扫雷
	find(mine,show,ROW,COL);

}

void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		cin >> input;
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			cout << "退出游戏";
			break;
		default:
			cout << "输入错误，重新选择";
			break;
		}
	} while (input);
}

int main()
{
	test();
	return 0;
}