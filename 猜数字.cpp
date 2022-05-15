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
	ret=rand()%100+1;//生产随机数
	while (1)
	{
		cout << "请猜数字"<<endl;
		cin >> guess;
		if (guess > ret)
		{
			cout << "猜大了"<<endl;
		}
		else if (guess < ret)
		{
			cout << "猜小了"<<endl;
		}
		else
		{
			cout << "恭喜你，猜对了"<<endl;
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
		cout << "请选择";
		cin >> input;
		switch (input)
		{
		case 1:
			game();
		case 2:
			break;
		default:
			cout << "输入错误";
			Sleep(1000);
			system("cls");
			break;
		}
	} while (input != 2);
	return 0;
}