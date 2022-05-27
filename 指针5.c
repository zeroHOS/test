#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>


//字符左旋
//例如：abcdef，左旋2个字符==》cdefab

//方法1 暴力求解法
//void left_move(char* arr, int k)
//{
//	assert(arr);
//	int i = 0;
//	int len = strlen(arr);
//	for (i = 0; i < k; i++)
//	{
//		//1 提取首元素
//		char t = *arr;
//		//2 后面字符前移
//		int j = 0;
//		for (j = 0; j < len - 1; j++)
//		{
//			*(arr + j) = *(arr + j + 1);
//		}
//		//3 首元素补在最后
//		*(arr + len - 1) = t;
//	}
//}

//方法2 三部翻转法
//abcdef  左旋2
//ab  cdef
//逆序ab==》ba，逆序cdef==》fedc
//组合bafedc
//整体逆序cdefab

//逆序字符串函数
void reverse(char* left, char* right)
{
	assert(left != NULL);
	assert(right != NULL);
	while (left < right)
	{
		char t = *left;
		*left = *right;
		*right = t;
		left++;
		right--;
	}
}

void left_move(char* arr, int k)
{
	assert(arr);
	int len = strlen(arr);
	assert(k <= len);
	reverse(arr,arr+k-1);//逆序左边
	reverse(arr+k,arr+len-1);//逆序右边
	reverse(arr,arr+len-1);//逆序整体
}

//int main()
//{
//	char arr[] = "abcdef";
//	left_move(arr, 2);
//	printf("%s\n", arr);
//	return 0;
//}


//判断是否旋转

//法1 穷举法
//int is_left_move(char* s1, char* s2)
//{
//	int len = strlen(s1);
//	int i = 0;
//	for (i = 0; i < len; i++)
//	{
//		left_move(s1, 1);
//		int ret = strcmp(s1, s2);
//		if (ret == 0)
//		{
//			return 1;
//		}
//	}
//	return 0;
//}


//法2
//字符串后再接一串
//abcdef+abcdef=abcdefabcdef
//找子串

//int is_left_move(char* s1, char* s2)
//{
//	int len1 = strlen(s1);
//	int len2 = strlen(s2);
//	if (len1 != len2)
//	{
//		return 0;
//	}
//	//在s1中追加一个s1
//	// strcat字符串追加
//	//strcat(s1, s1);//err
//	//strncat
//	strncat(s1, s1, len1);
//	//strstr-找子串函数
//	char* ret = strstr(s1, s2);
//	if (ret == NULL)
//	{
//		return 0;
//	}
//	else
//	{
//		return 1;
//	}
//	
//	//判断s2指向的字符串是否是s1指向的字符串的子串
//
//}
//
//int main()
//{
//	char arr1[30] = "abcdef";
//	char arr2[] = "cdefab";
//	int ret=is_left_move(arr1, arr2);
//	if (ret == 1)
//	{
//		printf("Yes\n");
//	}
//	else
//	{
//		printf("No\n");
//	}
//	return 0;
//}

//剑指offer
//杨氏矩阵
//有一个数字矩阵，矩阵每行从左到右数字递增，从上到下递增，请编写程序在这样的矩阵中查找某个数字是否存在
//要求时间复杂度小于O（N）

int findnum(int arr[3][3], int k, int* row, int* col)
{
	int x = 0;
	int y = *col - 1;
	while (x <= *row - 1 && y >= 0)
	{
		if (arr[x][y] > k)
		{
			y--;
		}
		else if (arr[x][y] < k)
		{
			x++;
		}
		else
		{
			*row = x;
			*col = y;
			return 1;
		}
	}
	return 0;
}


int main()
{
	int arr[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
	int k = 7;
	int x = 3;
	int y = 3;
	int ret = findnum(arr, k, &x, &y);
	if (ret == 1)
	{
		printf("找到了\n地址为：%d,%d",x+1,y+1);
	}
	else
	{
		printf("没找到\n");
	}
	return 0;
}
