#include <cstring>
#include "game.h"
using namespace std;
void initboard(char board[ROW][COL], int row, int col)
{
	int i = 0, j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}

//void DisplayBoard(char board[ROW][COL], int row, int col)
//{
//	int i = 0;
//	for (i = 0; i < row; i++)
//	{
//		//��ӡ��һ��
//		cout << " "<<board[i][0] <<" | "<< board[i][1] <<" | "<< board[i][2] <<" \n";
//		//�ָ���
//		if (i<row-1)
//		cout << "---|---|---\n";
//
//	}
//}

void DisplayBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for ( j = 0; j < col; j++)
		{
			//��ӡ��һ��
			cout << " " << board[i][j]<<" ";
			//�ָ���
			if (j < col - 1)
				cout << "|";
		}
		cout << endl;
		//�ָ���
		if (i < row - 1)
		{
			for (j = 0; j < col; j++)
			{
				cout << "---";
				if (j < col - 1)
					cout << "|";
			}
			cout << endl;
		}

	}
}
//���
void player(char board[ROW][COL], int row, int col)
{
	int x , y ;
	cout << "�����\n";
	
	//�ж�����Ϸ���
	while (1)
	{
		cout << "������Ҫ�µ�����\n";
		cin >> x >> y;
		if ((x >= 1 && x <= row) || (y >= 1 && y <= col))
		{
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else
			{
				cout << "�����걻ռ��\n";
			}
		}
		else
		{
			cout << "����Ƿ�������������";
		}
	}
	
}
//����
void com(char board[ROW][COL], int row, int col)
{
	int x, y;
	cout << "������\n";
	while (1)
	{
		x = rand() % row;
		y = rand() % col;
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;
		}
	}
}

int full(char board[ROW][COL], int row, int col)//����1��ʾ��������0��ʾδ��
{
	int i;
	int j;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
				return 0;
		}
	}
	return 1;
}
//�ж���Ӯ
char win(char board[ROW][COL], int row, int col)
{
	int i;
	//������
	for (i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ')
			return board[i][0];
	}
	//������
	for (i = 0; i < row; i++)
	{
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != ' ')
			return board[0][i];
	}
	//�Խ�
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != ' ')
	{
		return board[0][0];
	}
	if (board[2][0] == board[1][1] && board[1][1] == board[0][2] && board[0][2] != ' ')
	{
		return board[0][0];
	}
	//ƽ��
	if (full( board,ROW,COL) == 1)
	{
		return 'Q';
	}
	return 'c';
}