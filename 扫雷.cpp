#include "game.h"

void menu()
{
	cout << "****************************" << endl;
	cout << "********* 1��play **********" << endl;
	cout << "********* 0��exit **********" << endl;
	cout << "****************************" << endl;
}


void game()
{
	//�״洢
	//1 �����׵���Ϣ
	
	char mine[ROWS][COLS];
	//2 �Ų��׵���Ϣ
	char show[ROWS][COLS];
	//��ʼ��
	initboard(mine, ROWS, COLS,'0');
	initboard(show, ROWS, COLS,'*');
	//��ӡ����
	//display(mine,ROW,COL);
	display(show, ROW, COL);
	//������
	set(mine, ROW, COL);
	display(mine, ROW, COL);
	//ɨ��
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
			cout << "�˳���Ϸ";
			break;
		default:
			cout << "�����������ѡ��";
			break;
		}
	} while (input);
}

int main()
{
	test();
	return 0;
}