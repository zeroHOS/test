#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <assert.h>
//int my_strlen(const char* str)
//{
//	int count = 0;
//	assert(str != NULL);
//	while (*str != '\0')//while(*str)
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//int main()
//{
//	//int len = strlen("abcdef");
//	//char arr[] = { 'a','b','c','d','e','f' };
//	/*int len = my_strlen("abcdef");
//	printf("%d\n", len);*/
//	if (strlen("abc") - strlen("abcdef") > 0)//strlen����ֵΪ size_t==unsigned int
//	{
//		printf("hehe\n");
//	}
//	else
//	{
//		printf("haha\n");
//	}
//
//	return 0;
//}

//char* my_strcpy(char* des,const char* src)
//{
//	assert(des != NULL);
//	assert(src != NULL);
//	char* ret = des;
//	/*while (*src != '\0')
//	{
//		*des = *src;
//		des++;
//		src++;
//	}
//	*des = *src;*/
//	//����,���� '\0'
//	while (*des++ = *src++)
//	{
//		;
//	}
//	return ret;//����Ŀ�Ŀռ����ʼλ��
//}
//
//int main()
//{
//	char arr1[] = "abcdefghi";
//	char arr2[] = "bit";
//	//strcpy(arr1, arr2);
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}

//char* my_strcat(char* dest, const char* src)
//{
//	char* ret = dest;
//	assert(dest && src);
//	//1���ҵ�Ŀ���ַ�����'\0'
//	while (*ret != '\0')
//	{
//		ret++;
//	}
//	//2��׷��
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return dest;
//}
//
//int main()
//{
//	char arr1[30] = "hello";//��Ҫ��֤Ŀ�ĵ��㹻��Ŀ��ռ���޸�
//	char arr2[] = "world";//ԴͷҪ����'\0'
//	//strcat(arr1, arr2);//׷��ʱ��Ŀ�ĵص�'\0'����ʼ׷��
//	my_strcat(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}

//int my_strcmp(const char* p1, const char* p2)
//{
//	assert(p1 && p2);
//	while (*p1 == *p2)
//	{
//		if (*p1 == '\0')
//		{
//			return 0;
//		}
//		p1++;
//		p2++;
//	}
//	return (int)(*p1 - *p2);
//
//}
//
//int main()
//{
//	char* p1 = "abcdef";
//	char* p2 = "abcer";
//	//int ret = strcmp(p1, p2);//�Ƚ��ַ�����С���Ƚϵ���ASCII���ȱ�����ĸ�����ʱ����һλ
//	//1>2 ���ش���0������1<2����С��0��������һ����1��-1
//	int ret = my_strcmp(p1, p2);
//	printf("%d\n", ret);
//	return 0;
//}

//�г������Ƶ��ַ�������
//strncpy   strncat   strncmp


//int main()
//{
//	char arr1[5] = "abc";
//	char arr2[] = "hello bit";
//	strncpy(arr1, arr2, 4);
//	printf("%s\n", arr1);
//	return 0;
//}

//�ַ����Ƚ�
//int main()
//{
//	const char* p1 = "abcdef";
//	char* p2 = "abcdqwr";
//	//int ret = strcmp(p1, p2);
//	int ret = strncmp(p1, p2, 3);
//	printf("%d\n", ret);
//	return 0;
//}

//���Ӵ�

char* my_strstr(const char* str1, const char* str2)
{
	assert(str1 && str2);
	char* s1 = NULL;
	char* s2 = NULL;
	char* ret = (char*) str1;
	if (str2 == '\0')
	{
		return s1;
	}
	while (*ret )
	{
		s1 = ret;
		s2 = (char*) str2;
		while ((*s2 != '\0') && (*s1 == *s2) && (*s1 != '\0'))
		{
			s1++;
			s2++;
		}
		if (*s2 == '\0')
		{
			return ret;
		}
		ret++;
	}
	return NULL;
}

int main()
{
	char* p1 = "abcdefghi";
	char* p2 = "def";
	//char* ret = strstr(p1, p2);
	char* ret = my_strstr(p1, p2);
	if (ret == NULL)
	{
		printf("�Ӵ�������\n");
	}
	else
	{
		printf("%s\n", ret);
	}
	return 0;
}