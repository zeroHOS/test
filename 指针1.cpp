#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;

//int main()
//{
//	int i = -20;
//	int j = 10;
//	cout << i + j;
//	return 0;
//}
//10000000000000000000000000010100
//11111111111111111111111111101011
//11111111111111111111111111101100 i
//00000000000000000000000000001010 j
//11111111111111111111111111110110 j+i  ����
//11111111111111111111111111110101 ����
//10000000000000000000000000001010 j+i ԭ��

//00000000000000000000000000000000
//11111111111111111111111111111111
//11111111111111111111111111111111

//void test(int arr[])
//{
//	int sz = sizeof(arr) / sizeof(arr[0]);//ָ���С32-4b��64-8b
//	cout << sz;
//}
//
//int main()
//{
//	int arr[] = { 0 };
//	test(arr);
//
//	return 0;
//}

//int main()
//{
//	const char* p = "abcdef";//"abcdef"��һ�������ַ���,���ɸ���(c�п�ֱ�Ӷ��壬c++��Ҫ��const)
//	
//	cout << p;
//	return 0;
//}
//www.stackoverflow.com  ջ���
//segmentation fault -- �δ��󣨷Ƿ������ڴ�ʱ����
//segmentfault.com

//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abcdef";
//	const char* p1 = "abcdef";
//	const char* p2 = "abcdef";
//	if (p1 == p2)
//	{
//		cout << "hehe\n";
//	}
//	else
//	{
//		cout << "haha\n";
//	}
//	//if (arr1 == arr2)//����Ϊ��ַ����ַ����ͬ
//	//{
//	//	cout << "hehe\n";
//	//}
//	//else
//	//{
//	//	cout << "haha\n";
//	//}
//	return 0;
//}

//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 2,3,4,5,6 };
//	int arr3[] = { 3,4,5,6,7 };
//	int* prr[] = { arr1,arr2,arr3 };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 3; i++)
//	{
//		for ( j = 0; j < 5; j++)
//		{
//			cout << *(prr[i] + j) << " ";
//		}
//		cout << endl;
//	}
//	return 0;
//}

//int main()
//{
//	//arr[],arrΪ��Ԫ�ص�ַ��&arr[0]Ϊ��Ԫ�ص�ַ
//	//&arrΪ�����ַ
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int(*p)[10] = &arr;//����ָ��
//	char* arr1[5];
//	char* (*p1)[5] = &arr1;
//	return 0;
//}

void print1(int arr[3][5], int x, int y)//����Ϊ������ʽ
{
	int i = 0;
	int j = 0;
	for (i = 0; i < x; i++)
	{
		for (j = 0; j < y; j++)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
}

void print2(int(*p)[5], int x, int y)//����Ϊָ����ʽ
{
	int i = 0;
	int j = 0;
	for (i = 0; i < x; i++)
	{
		for (j = 0; j < y; j++)
		{
			//cout << *(*(p + i) + j) << " ";//arr[i] = *(arr+i) = *p = p[i]
			cout << *(p[i] + j) << " ";
			//cout << p[i][j] << " ";
			//cout << (*(p + i))[j] << " ";
		}
		cout << endl;
	}
}

int main()
{
	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };//��ά�������Ԫ��Ϊ��һ�е�����
	print1(arr, 3, 5);
	print2(arr, 3, 5);
	return 0;
}