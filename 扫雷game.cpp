#include "game.h"
void initboard(char board[ROWS][COLS], int rows, int cols,char set)
{
	int i = 0, j = 0;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			board[i][j] = set;
		}
	}
}

void display(char board[ROWS][COLS], int row, int col)
{
	int i = 0, j = 0;
	//��ӡ�к�
	for (i = 0; i <= col; i++)
	{
		cout << i << " ";
	}
	cout << endl;
	for (i = 1; i <= row; i++)
	{
		//��ӡ�к�
		cout << i << " ";
		for (j = 1; j <= col; j++)
		{
			cout << board[i][j] << " ";
		}
		cout << endl;
	}
}

void set(char board[ROWS][COLS], int row, int col)
{
	int count = easy_count;
	while (count)
	{
		int x = rand() % row+1, y = rand() % col+1;
		if (board[x][y] == '0')
		{
			board[x][y] = '1';
			count--;
		}
	}
}

int get_count(char mine[ROWS][COLS], int x, int y)
{
	int i = 0, j = 0;
	int n=0;
	for (i = x - 1; i <= x + 1; i++)
	{
		for (j = y - 1; j <= y + 1; j++)
		{
			n += mine[i][j];
		}
	}
	n = n - 9 * '0';
	return n;
}

void find(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0, y = 0;
	int win = 0;
	while (win<row*col-easy_count)
	{
		cout << "����������\n";
		cin >> x >> y;
		//����
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (mine[x][y] == '1')
			{
				cout << "��Ϸ����\n";
				mine[x][y] = '#';
				display(mine, row, col);
				break;
			}
			//����
			else
			{
				//������Χ����
				int count = get_count(mine, x, y);
				show[x][y] = count + '0';
				display(show, row, col);
				win++;
			}
		}
		else
		{
			cout << "���������������\n";
		}
	}
	if (win == row * col - easy_count)
	{
		cout << "�ɹ���\n";
		display(mine, ROW, COL);
	}
}