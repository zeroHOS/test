#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <math.h>
//int main()
//{
//	char* c[] = { "ENTER","NEW","POINT","FIRST" };
//	char** cp[] = { c + 3,c + 2,c + 1,c };
//	char*** cpp = cp;
//	printf("%s\n", **++cpp);
//	printf("%s\n", *-- * ++cpp + 3);
//	printf("%s\n", *cpp[-2] + 3);
//	printf("%s\n", cpp[-1][-1] + 1);//cpp[-1][-1]==*(*(cpp-1)-1)
//	return 0;
//}


//字符逆序
//void change(char* p)
//{
//	assert(p);
//	char* left = p;
//	int len = strlen(p);
//	char* right = p + len - 1;
//	int i = 0;
//	while (left < right)
//	{
//		char t = *left;
//		*left = *right;
//		*right = t;
//		left++;
//		right--;
//	}
//}
//
//int main()
//{
//	char arr[256];
//	//scanf("%s", arr);//不能读取空格
//	gets(arr);//读取一行，可读取空格
//	change(arr);
//	printf("%s\n", arr);
//	return 0;
//}

//计算求和
//int main()
//{
//	int a = 0;
//	int n = 0;
//	scanf("%d%d", &a ,& n);
//	int sum = 0;
//	int i = 0;
//	int t = 0;
//	for (i = 0; i < n; i++)
//	{
//		t = t * 10 + 2;
//		sum += t;
//	}
//	printf("%d\n", sum);
//	return 0;
//}


//水仙花数
//int main()
//{
//	int i = 0;
//	int t = 0;
//	for (i = 1; i <= 100000; i++)
//	{
//		int sum = 0;
//		t = i;
//		int count = 0;
//		int n = 1;
//		while (t)//  while(t/=10)
//		{        //  {
//			count++;//  count++;
//			t /= 10;//}
//		}
//		t = i;
//		while (t)
//		{
//			sum+=pow(t % 10, count);
//			t /= 10;
//		}
//		if (sum == i)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}


//int main()
//{
//	int i = 0;
//
//	int k = 0;
//	int n = 0;//一半的行数，下半为n-1行
//	scanf("%d", &n);
//	
//	//打印上半部分
//		for (i = 0; i < n ; i++)
//		{
//			//先打印空格
//			int j = 0;
//			for (j = 0; j < n - 1 - i; j++)
//			{
//				printf(" ");
//			}
//			//打印*
//			for (j = 0; j < 2 * i + 1; j++)
//			{
//				printf("*");
//			}
//			printf("\n");
//		}
//		//打印下半部分
//		for (i = 0; i < n-1; i++)
//		{
//			//先打印空格
//			int j = 0;
//			for (j = 0; j < i+1 ; j++)
//			{
//				printf(" ");
//			}
//			//打印*
//			for (j = 0; j < 2 * (n-i) - 3; j++)
//			{
//				printf("*");
//			}
//			printf("\n");
//		}
//	
//	return 0;
//}


//汽水问题
//一瓶汽水一元，两个空瓶换一瓶，20元可买几瓶
//错误
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int i = 0;
//	int count = 0;
//	int sum = 0;
//	//单买
//	count = money;
//	sum = count;
//	//用单买的换
//	do
//	{
//		sum = sum + count / 2;
//	} while (count /= 2);
//	printf("%d ", sum);
//	return 0;
//}

//int main()
//{
//	int money;
//	scanf("%d", &money);
//	int empty = 0;
//	int total = 0;
//	//单买
//	total = money;
//	empty = total;
//	//用单买的换
//	while (empty >= 2)
//	{
//		total += empty / 2;
//		empty = empty / 2 + empty % 2;
//	}
//	printf("%d ", total);
//	return 0;
//}



//调整数组使奇数在前，偶数在后
//如：123456789==》135792468

//void move(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	int t = 0;
//	while (left < right)
//	{
//		while (left < right && arr[left] % 2 != 0)
//		{
//			left++;
//		}
//		while (left < right && arr[right] %2 == 0)
//		{
//			right--;
//		}
//		if (left < right)
//		{
//			t = arr[left];
//			arr[left] = arr[right];
//			arr[right] = t;
//		}
//	}
//}
//
//void print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i] );
//	}
//}
//
//int main()
//{
//	int arr[] = { 2,5,8,6,4,9,3,10,7,11,25,20 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	move(arr, sz);
//	print(arr, sz);
//	return 0;
//}

//int main()
//{
//	unsigned char a = 200;
//	unsigned char b = 100;
//	unsigned char c ;
//	c = a + b;//a+b运算时会发生整形提升
//	//00000000000000000000000011001000
//	//11001000-a
//	//00000000000000000000000001100100
//	//01100100-b
//	printf("%d %d", a + b, c);
//	return 0;
//}

//int main()
//{
//	unsigned int a = 0x1234;
//	unsigned char b = *(unsigned char*)&a;
//	printf("%d", b);
//	return 0;
//}

//int main()
//{
//	char a[1000] = { 0 };
//	int i = 0;
//	for (i = 0; i < 1000; i++)
//	{
//		a[i] = -1 - i;
//	}
//	printf("%d\n", strlen(a));
//	return 0;
//}


//打印杨辉三角
//1
//1 1
//1 2 1
//1 3 3 1
//1 4 6 4 1

//int main()
//{
//	int arr[10][10] = { 0 };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j < 10; j++)
//		{
//			if (j == 0)
//			{
//				arr[i][j] = 1;
//			}
//			if (i == j)
//			{
//				arr[i][j] = 1;
//			}
//			else if ( i != j && i >= 1 && j >= 1)
//			{
//				arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
//			}
//		}
//	}
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j <= i; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}


//逻辑推理
//谋杀案
//A:不是我
//B:是C
//C:是D
//D:C在胡说
//三人真一人假,确定凶手

//int main()
//{
//	int killer = 0;
//	for (killer = 'a'; killer <= 'd'; killer++)
//	{
//		if ((killer != 'a') + (killer == 'c') + (killer == 'd') + (killer != 'd') == 3)
//		{
//			printf("凶手是:%c\n", killer);
//		}
//	}
//	return 0;
//}


//赛马问题
//有36匹马，6个跑道，没有计时器，请赛马确定36匹马中的前三名。
//请问，最少比赛几次
//

//烧香问题
//有一种香，材质不均，但每一根香烧完恰好1小时，
//现有2根香，请确定15分钟的时间


//跳水问题
//5位运动员参加跳水比赛，预测排名
//a：b 2，a 3
//b: b 2, e 4
//c: c 1, d 2
//d: c 5, d 3
//e: e 4, a 1
//赛后，每人恰好说对一半

//int main()
//{
//	int a = 0, b = 0, c = 0, d = 0, e = 0;
//	for (a = 1; a <= 5; a++)
//	{
//		for (b = 1; b <= 5; b++)
//		{
//			for (c = 1; c <= 5; c++)
//			{
//				for (d = 1; d <= 5; d++)
//				{
//					for (e = 1; e <= 5; e++)
//					{
//						if (((b == 2) + (a == 3) == 1) &&
//							((b == 2) + (e == 4) == 1) &&
//							((c == 1) + (d == 2) == 1) &&
//							((c == 5) + (d == 3) == 1) &&
//							((e == 4) + (a == 1) == 1))
//						{
//							if (a * b * c * d * e == 120)
//							{
//								printf("a=%d,b=%d,c=%d,d=%d,e=%d\n", a, b, c, d, e);
//							}
//						}
//					}
//				}
//			}
//		}
//	}
//	return 0;
//}


