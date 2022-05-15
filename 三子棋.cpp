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

void game()//��Ϸʵ��
{
	char ret = 0;
	char board[ROW][COL] = { 0 };//��ʼ����ȫ�ո�
	//��ʼ������
	initboard(board, ROW, COL);
	//��ӡ����
	DisplayBoard(board,ROW,COL);
	//����
	while (1)
	{
		//�����
		player(board,ROW,COL);
		DisplayBoard(board, ROW, COL);
		//�ж�����Ƿ�Ӯ
		ret=win(board, ROW, COL);
		if (ret != 'c')
		{
			break;
		}
		//������
		com(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//�жϵ����Ƿ�Ӯ
		ret=win(board, ROW, COL);
		if (ret!='c')
		{
			break;
		}
	}
	if (ret == '*')
	{
		cout << "���Ӯ\n";
	}
	else if (ret == '#')
	{
		cout << "����Ӯ\n";
	}
	else 
	{
		cout << "ƽ��\n";
	}
}

void test()
{
	int input=0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		cout << "��ѡ��\n";
		cin >> input;
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			cout << "�˳���Ϸ\n";
			break;
		default:
			cout << "ѡ�����������ѡ��\n";
			break;
		}
	} while (input);
}

int main()
{
	test();
	return 0;
}