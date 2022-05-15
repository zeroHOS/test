#include <iostream>
#include <cmath>
#include <stdio.h>
using namespace std;


int main()
{
	int m[10];
	int t;
	for (int i = 0; i < 10; i++)
	{
		cin >> m[i];
	}
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9 - i; j++)
		{
			if (m[j] > m[j + 1])
			{
				t = m[j];
				m[j] = m[j + 1];
				m[j + 1] = t;
			}
		}
		
	}
	for (int i = 0; i < 10; i++)
		cout << m[i]<<" ";
	return 0;
}