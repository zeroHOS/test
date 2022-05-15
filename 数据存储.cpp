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
//        int flag = 1;//假设这次已经有序
//        for (j=0;j<sz-i-1;j++)
//        {
//            if (arr[j] > arr[j + 1])
//            {
//                t = arr[j];
//                arr[j] = arr[j + 1];
//                arr[j + 1] = t;
//                flag = 0;//本趟排序数据不完全有序
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
//    int arr[] = { 8,5,6,9,2,4,3,1,7 };//排序升序
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
//	//整数二进制表示:原码，反码，补码
//  //正数反码不变，负数反码符号位不变，其他按位取反
//	//存储到内存的为补码
//  //正数补码不变，负数补码=反码+1
//	//原码：10000000 00000000 00000000 00000001
//	//反码：11111111 11111111 11111111 11111110 符号位不变，其他位取反
//	//补码：11111111 11111111 11111111 11111111 反码+1
//	//
//	a >>= 1;
//	cout << a;
//	return 0;
//}

//

//不使用临时变量交换两个变量的值
//int main()
//{
//	int a = 3, b = 5;
//	cout << a << " " << b << endl;
//	//加减法
//	/*a = a + b;
//	b = a - b;
//	a = a - b;*///缺陷：可能溢出
//
//	//异或法
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	cout << a << " " << b << endl;
//	return 0;
//}

//练习，求整数存储（补码存储）中1的个数
//int main()
//{
//	int count = 0;
//	int num = 0;
//	int i = 0;
//	cin >> num;
//	//统计num的补码中1的个数
//	//按位与1，右移
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
//	//指针类型决定了指针进行解引用操作时能够访问空间的大小
//	//int* p  4个字节
//	//char* p 1个字节
//	//double* p 8个字节
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


//野指针：指针指向的位置是不可知的（随机的，不正确的，没有明确限制的）
//1 指针未初始化  int* p;
//2 指针越界访问  int arr[10]={0}; int* p=arr;  p+12; 越界后及变为野指针
//3 指针指向的内存空间释放



//arr[]表示数组时，	arr表示首元素地址；arr[0]也表示首元素地址
//例外：1 &arr时，数组名表示整个数组，&arr取出的是整个数组的地址
//      2 sizeof(arr) - sizeof(数组名) 此时的数组名表示整个数组，sizeof(数组名)表示整个数组大小
//此外所有数组名(arr)都可代表数组首元素地址
//int main()
//{
//	int arr[10] = { 0 };
//	cout << arr << endl;  //首元素地址
//	cout << &arr[0] << endl;//首元素地址
//	cout << &arr << endl;//整个数组的地址
//	return 0;
//}


//二级指针
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	int** ppa = &pa;//ppa就是二级指针
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



//计算二进制位中1的个数

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
//}//不能计算-1

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
//}//可计算-1

//优化
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
//}//效率低，需循环32次

//优化
//n=13;
//1101  n
//1100  n-1
//1100  n=n&(n-1)
//1011  n-1
//1000  n=n&(n-1)
//0111  n-1
//0000  n=n&(n-1)
//每次按位与，消除当前二进制中最右侧的1；
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

//求两个整数二进制位中不同位的个数
//int diff(int m, int n)
//{
//	int t = m ^ n;//异或，不同取1
//	int count = 0;
//	while (t)//取1的个数
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


////交换整数的二进制位的奇数和偶数位，并交换位置
//void print(int n)
//{
//	int i = 0;
//	//获取奇数位
//	cout << "奇数位：";
//	for (i = 30; i >= 0; i -= 2)
//	{
//		cout<<((n >> i) & 1)<<" ";//按位与1可获取最后第一位
//	}
//	cout << endl;
//	//获取偶数位
//	cout << "偶数位：";
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


//struct-结构体关键字   stu-结构体标签  struct stu-结构体类型
//定义结构体类型
//typedef struct stu//typedef重命名
//{
//	//成员变量
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}Stu;
//
//int main()
//{
//	Stu s;/*struct stu s;*///变量创建
//	return 0;
//}

//数据结构
//----线性数据结构
//顺序表
//链表
//栈    先进后出，后进先出
//队列
//----树形数据结构
//二叉树
//----图

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

//优化
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
//3 野指针判断
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
//	assert(dest != NULL);//assert断言，为假就报错,利于发现问题
//	assert(src != NULL);
//		while (*dest++ = *src++)
//		{
//			;
//		}
//}
//5
//void my_strcpy(char* dest,const char* src)//改为const可避免循环处=左右写反
//{
//	assert(dest != NULL);//assert断言，为假就报错,利于发现问题,保证指针的有效性
//	assert(src != NULL);
//	while (*dest++ = *src++)
//	{
//		;
//	}
//}

char* my_strcpy(char* dest, const char* src)//直接返回
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