#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>


//�ַ�����
//���磺abcdef������2���ַ�==��cdefab

//����1 ������ⷨ
//void left_move(char* arr, int k)
//{
//	assert(arr);
//	int i = 0;
//	int len = strlen(arr);
//	for (i = 0; i < k; i++)
//	{
//		//1 ��ȡ��Ԫ��
//		char t = *arr;
//		//2 �����ַ�ǰ��
//		int j = 0;
//		for (j = 0; j < len - 1; j++)
//		{
//			*(arr + j) = *(arr + j + 1);
//		}
//		//3 ��Ԫ�ز������
//		*(arr + len - 1) = t;
//	}
//}

//����2 ������ת��
//abcdef  ����2
//ab  cdef
//����ab==��ba������cdef==��fedc
//���bafedc
//��������cdefab

//�����ַ�������
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
	reverse(arr,arr+k-1);//�������
	reverse(arr+k,arr+len-1);//�����ұ�
	reverse(arr,arr+len-1);//��������
}

//int main()
//{
//	char arr[] = "abcdef";
//	left_move(arr, 2);
//	printf("%s\n", arr);
//	return 0;
//}


//�ж��Ƿ���ת

//��1 ��ٷ�
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


//��2
//�ַ������ٽ�һ��
//abcdef+abcdef=abcdefabcdef
//���Ӵ�

//int is_left_move(char* s1, char* s2)
//{
//	int len1 = strlen(s1);
//	int len2 = strlen(s2);
//	if (len1 != len2)
//	{
//		return 0;
//	}
//	//��s1��׷��һ��s1
//	// strcat�ַ���׷��
//	//strcat(s1, s1);//err
//	//strncat
//	strncat(s1, s1, len1);
//	//strstr-���Ӵ�����
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
//	//�ж�s2ָ����ַ����Ƿ���s1ָ����ַ������Ӵ�
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

//��ָoffer
//���Ͼ���
//��һ�����־��󣬾���ÿ�д��������ֵ��������ϵ��µ��������д�����������ľ����в���ĳ�������Ƿ����
//Ҫ��ʱ�临�Ӷ�С��O��N��

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
		printf("�ҵ���\n��ַΪ��%d,%d",x+1,y+1);
	}
	else
	{
		printf("û�ҵ�\n");
	}
	return 0;
}
