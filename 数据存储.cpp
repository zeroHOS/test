#include <iostream>
#include <cmath>
#include <cstdio>
#include <cstring>
using namespace std;

//void bubble(int arr[],int sz)
//{
//    int i = 0, j = 0;
//    int t;
//    for (i = 0; i < sz-1; i++)
//    {
//        int flag = 1;//��������Ѿ�����
//        for (j=0;j<sz-i-1;j++)
//        {
//            if (arr[j] > arr[j + 1])
//            {
//                t = arr[j];
//                arr[j] = arr[j + 1];
//                arr[j + 1] = t;
//                flag = 0;//�����������ݲ���ȫ����
//            }
//        }
//        if (flag == 1)
//        {
//            break;
//        }
//    }
//}
//
//int main()
//{
//    int arr[] = { 8,5,6,9,2,4,3,1,7 };//��������
//    int sz = sizeof(arr) / sizeof(arr[0]);
//    bubble(arr,sz);
//    for (int i = 0; i < sz; i++)
//    {
//        cout << arr[i] << '\t';
//    }
//    return 0;
//}

//int main()
//{
//	int a = -1;
//	//���������Ʊ�ʾ:ԭ�룬���룬����
//  //�������벻�䣬�����������λ���䣬������λȡ��
//	//�洢���ڴ��Ϊ����
//  //�������벻�䣬��������=����+1
//	//ԭ�룺10000000 00000000 00000000 00000001
//	//���룺11111111 11111111 11111111 11111110 ����λ���䣬����λȡ��
//	//���룺11111111 11111111 11111111 11111111 ����+1
//	//
//	a >>= 1;
//	cout << a;
//	return 0;
//}

//

//��ʹ����ʱ������������������ֵ
//int main()
//{
//	int a = 3, b = 5;
//	cout << a << " " << b << endl;
//	//�Ӽ���
//	/*a = a + b;
//	b = a - b;
//	a = a - b;*///ȱ�ݣ��������
//
//	//���
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	cout << a << " " << b << endl;
//	return 0;
//}

//��ϰ���������洢������洢����1�ĸ���
//int main()
//{
//	int count = 0;
//	int num = 0;
//	int i = 0;
//	cin >> num;
//	//ͳ��num�Ĳ�����1�ĸ���
//	//��λ��1������
//	for ( i = 0; i < 32; i++)
//	{
//		if (1==((num >> i) & 1))
//		{
//			count++;
//		}
//	}
//	cout << count<<endl;
//	return 0;
//}



//int main()
//{
//	//ָ�����;�����ָ����н����ò���ʱ�ܹ����ʿռ�Ĵ�С
//	//int* p  4���ֽ�
//	//char* p 1���ֽ�
//	//double* p 8���ֽ�
//	cout << sizeof(char);
//	cout << sizeof(short);
//	cout << sizeof(int);
//	cout << sizeof(double);
//	return 0;
//}



//int main()
//{
//	int a = 0x11223344;
//	int* pa = &a;
//	char* pc = &a;
//	cout << pa << endl;
//	cout << pa+1 << endl;
//	cout << pc << endl;
//	cout << pc+1 << endl;
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//
//	}
//	return 0;
//}


//Ұָ�룺ָ��ָ���λ���ǲ���֪�ģ�����ģ�����ȷ�ģ�û����ȷ���Ƶģ�
//1 ָ��δ��ʼ��  int* p;
//2 ָ��Խ�����  int arr[10]={0}; int* p=arr;  p+12; Խ��󼰱�ΪҰָ��
//3 ָ��ָ����ڴ�ռ��ͷ�



//arr[]��ʾ����ʱ��	arr��ʾ��Ԫ�ص�ַ��arr[0]Ҳ��ʾ��Ԫ�ص�ַ
//���⣺1 &arrʱ����������ʾ�������飬&arrȡ��������������ĵ�ַ
//      2 sizeof(arr) - sizeof(������) ��ʱ����������ʾ�������飬sizeof(������)��ʾ���������С
//��������������(arr)���ɴ���������Ԫ�ص�ַ
//int main()
//{
//	int arr[10] = { 0 };
//	cout << arr << endl;  //��Ԫ�ص�ַ
//	cout << &arr[0] << endl;//��Ԫ�ص�ַ
//	cout << &arr << endl;//��������ĵ�ַ
//	return 0;
//}


//����ָ��
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	int** ppa = &pa;//ppa���Ƕ���ָ��
//	return 0;
//}


//int main()
//{
//	int a, b, c;
//	a = 5;
//	c = ++a;
//	b = ++c, c++, ++a, a++;
//	b += a++ + c;
//	cout << a<<'\t' << b<<'\t' << c<<'\t';
//	return 0;
//}



//���������λ��1�ĸ���

//int cone(int n)
//{
//	int count=0;
//	while (n)
//	{
//		if (n % 2 == 1)
//		{
//			count++;
//		}
//		n = n / 2;
//	}
//	return count;
//}//���ܼ���-1

//int cone(unsigned int n)
//{
//	int count=0;
//	while (n)
//	{
//		if (n % 2 == 1)
//		{
//			count++;
//		}
//		n = n / 2;
//	}
//	return count;
//}//�ɼ���-1

//�Ż�
//int cone(int n)
//{
//	int i = 0;
//	int count=0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((n >> i) & 1) == 1)
//			count++;
//	}
//	return count;
//}//Ч�ʵͣ���ѭ��32��

//�Ż�
//n=13;
//1101  n
//1100  n-1
//1100  n=n&(n-1)
//1011  n-1
//1000  n=n&(n-1)
//0111  n-1
//0000  n=n&(n-1)
//ÿ�ΰ�λ�룬������ǰ�����������Ҳ��1��
//int cone(int n)
//{
//	int count=0;
//	while (n)
//	{
//		n = n & (n - 1);
//		count++;
//	}
//	return count;
//}
//
//int main()
//{
//	int count;
//	int t;
//	cin >> t;
//	count = cone(t);
//	cout << count;
//	return 0;
//}

//����������������λ�в�ͬλ�ĸ���
//int diff(int m, int n)
//{
//	int t = m ^ n;//��򣬲�ͬȡ1
//	int count = 0;
//	while (t)//ȡ1�ĸ���
//	{
//		t = t & (t - 1);
//		count++;
//	}
//	return count;
//}
//
//int main()
//{
//	int m, n;
//	int count;
//	cin >> n >> m;
//	count=diff(n, m);
//	cout << count;
//	return 0;
//}


////���������Ķ�����λ��������ż��λ��������λ��
//void print(int n)
//{
//	int i = 0;
//	//��ȡ����λ
//	cout << "����λ��";
//	for (i = 30; i >= 0; i -= 2)
//	{
//		cout<<((n >> i) & 1)<<" ";//��λ��1�ɻ�ȡ����һλ
//	}
//	cout << endl;
//	//��ȡż��λ
//	cout << "ż��λ��";
//	for (i = 31; i >= 1; i -= 2)
//	{
//		cout << ((n >> i) & 1)<< " ";
//	}
//}
//
//int main()
//{
//	int n;
//	cin >> n;
//	print(n);
//	return 0;
//}

//void print(int* p,int sz)
//{
//	for (int i = 0; i < sz; i++)
//	{
//		cout << *p << " ";
//		p++;
//	}
//}
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr,sz);
//	return 0;
//}

//int is_prime(int n)
//{
//	int i = 2;
//	for (i = 2; i < sqrt(n); i++)
//	{
//		if (n % i == 0)
//			return 0;
//	}
//	return 1;
//}
//
//int main()
//{
//	int t, i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		t = is_prime(i);
//		if (t == 1)
//			cout << i << " ";
//	}
//	return 0;
//}

//void mult(int n)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= n; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			cout << i << "*" << j << "=" << i * j << "\t";
//		}
//		cout << endl;
//	}
//}
//
//int main()
//{
//	int n;
//	cin >> n;
//	mult(n);
//	return 0;
//}

//int mul(int n)
//{
//	if (n > 1)
//	{
//		n = n * mul(n - 1);
//	}
//	return n;
//}
//
//int main()
//{
//	int n;
//	int m;
//	cin >> n;
//	m=mul(n);
//	cout << m;
//	return 0;
//}

//int cul(int n, int k)
//{
//	if (k >= 1)
//		return n * cul(n, k - 1);
//	else
//		return 1;
//}
//
//int main()
//{
//	int n, k;
//	int ret;
//	cin >> n >> k;
//	ret = cul(n, k);
//	cout << ret;
//	return 0;
//}


//struct-�ṹ��ؼ���   stu-�ṹ���ǩ  struct stu-�ṹ������
//����ṹ������
//typedef struct stu//typedef������
//{
//	//��Ա����
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}Stu;
//
//int main()
//{
//	Stu s;/*struct stu s;*///��������
//	return 0;
//}

//���ݽṹ
//----�������ݽṹ
//˳���
//����
//ջ    �Ƚ����������ȳ�
//����
//----�������ݽṹ
//������
//----ͼ

//int main()
//{
//	int n;
//	int i = 0, j = 0;
//	int sum=0;
//	int ret=1;
//	cin >> n;
//	for (i = 1; i <= n; i++)
//	{
//		ret = 1;
//		for (j = 1;j <= i; j++)
//		{
//			ret *= j;
//		}
//		sum = sum + ret;
//	}
//	cout << sum;
//	return 0;
//}

//void my_strcpy(char* dest, char* src)
//{
//	while (*src != '\0')
//	{
//		*dest = *src;
//		dest++;
//		src++;
//	}
//	*dest = *src;
//}

//�Ż�
// 1
//void my_strcpy(char* dest, char* src)
//{
//	while (*src != '\0')
//	{
//		*dest++ = *src++;
//	}
//	*dest = *src;
//}
//2
//void my_strcpy(char* dest, char* src)
//{
//	while (*dest++ = *src++)
//	{
//		;
//	}
//}
//3 Ұָ���ж�
//void my_strcpy(char* dest, char* src)
//{
//	if (dest != NULL && src != NULL)
//	{
//		while (*dest++ = *src++)
//		{
//			;
//		}
//	}
//	
//}
//4
#include <cassert>
//void my_strcpy(char* dest, char* src)
//{
//	assert(dest != NULL);//assert���ԣ�Ϊ�پͱ���,���ڷ�������
//	assert(src != NULL);
//		while (*dest++ = *src++)
//		{
//			;
//		}
//}
//5
//void my_strcpy(char* dest,const char* src)//��Ϊconst�ɱ���ѭ����=����д��
//{
//	assert(dest != NULL);//assert���ԣ�Ϊ�پͱ���,���ڷ�������,��ָ֤�����Ч��
//	assert(src != NULL);
//	while (*dest++ = *src++)
//	{
//		;
//	}
//}

char* my_strcpy(char* dest, const char* src)//ֱ�ӷ���
{
	char* ret = dest;
	assert(dest != NULL);//
	assert(src != NULL);
	while (*dest++ = *src++)
	{
		;
	}
	return ret;
}

int main()
{
	char arr1[] = { "##########" };
	char arr2[] = { "bit" };
	cout << arr1 << endl;
	my_strcpy(arr1, arr2);
	cout << arr1;
	return 0;
}