#include <iostream>
#include <cmath>
#include <cstring>
using namespace std;
//将10进制转换为m进制
int main()
{
	int n, m, ten=0;
	char num[50] = { 0 }, ans[50];
	cin >> n >> num >> m;
	//将n进制转换为10进制
	int len1 = strlen(num);
	for (int i = len1 - 1, k = 0; i >= 0; i--, k++)
	{
		int tmp;
			if (num[i] >= 'A' && num[i] <= 'F')
			{
				tmp = num[i] - 'A' + 10;
			}
			else
			{
				tmp = num[i] - '0';
			}
		ten = ten + tmp * pow(n, k);
	}
	cout << ten << endl;
	int k = 0;
	while (ten != 0)
	{
		int u = ten % m;
		ten /= m;
		char tmp;
		if (u < 10)
		{
			tmp = u + '0';
		}
		else
		{
			tmp = u + 'A' - 10;
		}
		ans[k++] = tmp;
	}
	for (int i = k - 1; i >= 0; i--)
	{
		cout << ans[i];
	}
	
	
	return 0;
}