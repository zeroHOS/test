#include <iostream>
#include <cmath>
#include <cstring>
#include <stdio.h>
#include <Windows.h>
#include <stdlib.h>
#include <time.h>
using namespace std;

void menu()
{
	cout << "**********************" << endl;
	cout << "***1 play  2 exit*****" << endl;
	cout << "**********************" << endl;
}
void game()
{
	int ret;
	int guess;
	ret=rand()%100+1;//���������
	while (1)
	{
		cout << "�������"<<endl;
		cin >> guess;
		if (guess > ret)
		{
			cout << "�´���"<<endl;
		}
		else if (guess < ret)
		{
			cout << "��С��"<<endl;
		}
		else
		{
			cout << "��ϲ�㣬�¶���"<<endl;
			Sleep(1000);
			break;
		}
	}
	system("cls");
}
int main()
{
	int input;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		cout << "��ѡ��";
		cin >> input;
		switch (input)
		{
		case 1:
			game();
		case 2:
			break;
		default:
			cout << "�������";
			Sleep(1000);
			system("cls");
			break;
		}
	} while (input != 2);
	return 0;
}