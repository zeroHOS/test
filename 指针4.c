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


//�ַ�����
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
//	//scanf("%s", arr);//���ܶ�ȡ�ո�
//	gets(arr);//��ȡһ�У��ɶ�ȡ�ո�
//	change(arr);
//	printf("%s\n", arr);
//	return 0;
//}

//�������
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


//ˮ�ɻ���
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
//	int n = 0;//һ����������°�Ϊn-1��
//	scanf("%d", &n);
//	
//	//��ӡ�ϰ벿��
//		for (i = 0; i < n ; i++)
//		{
//			//�ȴ�ӡ�ո�
//			int j = 0;
//			for (j = 0; j < n - 1 - i; j++)
//			{
//				printf(" ");
//			}
//			//��ӡ*
//			for (j = 0; j < 2 * i + 1; j++)
//			{
//				printf("*");
//			}
//			printf("\n");
//		}
//		//��ӡ�°벿��
//		for (i = 0; i < n-1; i++)
//		{
//			//�ȴ�ӡ�ո�
//			int j = 0;
//			for (j = 0; j < i+1 ; j++)
//			{
//				printf(" ");
//			}
//			//��ӡ*
//			for (j = 0; j < 2 * (n-i) - 3; j++)
//			{
//				printf("*");
//			}
//			printf("\n");
//		}
//	
//	return 0;
//}


//��ˮ����
//һƿ��ˮһԪ��������ƿ��һƿ��20Ԫ����ƿ
//����
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int i = 0;
//	int count = 0;
//	int sum = 0;
//	//����
//	count = money;
//	sum = count;
//	//�õ���Ļ�
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
//	//����
//	total = money;
//	empty = total;
//	//�õ���Ļ�
//	while (empty >= 2)
//	{
//		total += empty / 2;
//		empty = empty / 2 + empty % 2;
//	}
//	printf("%d ", total);
//	return 0;
//}



//��������ʹ������ǰ��ż���ں�
//�磺123456789==��135792468

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
//	c = a + b;//a+b����ʱ�ᷢ����������
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


//��ӡ�������
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


//�߼�����
//ıɱ��
//A:������
//B:��C
//C:��D
//D:C�ں�˵
//������һ�˼�,ȷ������

//int main()
//{
//	int killer = 0;
//	for (killer = 'a'; killer <= 'd'; killer++)
//	{
//		if ((killer != 'a') + (killer == 'c') + (killer == 'd') + (killer != 'd') == 3)
//		{
//			printf("������:%c\n", killer);
//		}
//	}
//	return 0;
//}


//��������
//��36ƥ��6���ܵ���û�м�ʱ����������ȷ��36ƥ���е�ǰ������
//���ʣ����ٱ�������
//

//��������
//��һ���㣬���ʲ�������ÿһ��������ǡ��1Сʱ��
//����2���㣬��ȷ��15���ӵ�ʱ��


//��ˮ����
//5λ�˶�Ա�μ���ˮ������Ԥ������
//a��b 2��a 3
//b: b 2, e 4
//c: c 1, d 2
//d: c 5, d 3
//e: e 4, a 1
//����ÿ��ǡ��˵��һ��

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


