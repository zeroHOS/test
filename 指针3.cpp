#include <iostream>
#include <cstdlib>
using namespace std;

//函数指针数组
//int add(int x, int y)
//{
//	return x + y;
//}
//
//int sub(int x, int y)
//{
//	return x - y;
//}
//
//int mul(int x, int y)
//{
//	return x * y;
//}
//
//int divv(int x, int y)
//{
//	return x / y;
//}
//
//int main()
//{
//	int arr[5] = { 0 };//数组
//	int (*pa)(int, int) = add;//函数指针
//	int (*parr[4])(int, int) = { add,sub,mul,divv};//函数指针数组
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		cout << parr[i](2, 3) << endl;//5,-1,6,0
//	}
//	return 0;
//}

//char* my_strcpy(char* dest, const char* src);
////写一个函数指针pf，能够指向my_strcpy
////写一个函数指针数组，能够存放4个my_strcpy的地址
//int main()
//{
//	char* (*pf)(char*, const char*);
//	char* (*parr[4])(char*, const char*);
//	return 0;
//}

//函数指针数组的用途：转移表

//void menu()
//{
//	cout << "****************************" << endl;
//	cout << "****1、add      2、sub******" << endl;
//	cout << "****3、mul      4、div******" << endl;
//	cout << "********* 0、exit **********" << endl;
//}
//
//int add(int x, int y)
//{
//	return x + y;
//}
//
//int sub(int x, int y)
//{
//	return x - y;
//}
//
//int mul(int x, int y)
//{
//	return x * y;
//}
//
//int divv(int x, int y)
//{
//	return x / y;
//}
//
//void calc(int (*p)(int, int))//接受函数的地址，实现不同功能，被调用的函数为回调函数。
//{
//	int x = 0;
//	int y = 0;
//	cout << "请输入两个操作数\n";
//	cin >> x >> y;
//	cout << p(x, y) << endl;
//}
//
//int main()
//{
//	int input = 0;
//	do  //优化，将重复出现的语句封装为一个函数
//	{
//		menu();
//		cout << "请选择\n";
//		cin >> input;
//		switch (input)
//		{
//		case 1:
//			calc(add);
//			/*cout << "请输入两个操作数\n";
//			cin >> x >> y;
//			cout << add(x, y) << endl;*/
//			break;
//		case 2:
//			calc(sub);
//			/*cout << "请输入两个操作数\n";
//			cin >> x >> y;
//			cout << sub(x, y) << endl;*/
//			break;
//		case 3:
//			calc(mul);
//			/*cout << "请输入两个操作数\n";
//			cin >> x >> y;
//			cout << mul(x, y) << endl;*/
//			break;
//		case 4:
//			calc(divv);
//			/*cout << "请输入两个操作数\n";
//			cin >> x >> y;
//			cout << divv(x, y) << endl;*/
//			break;
//		case 0:
//			cout << "退出\n";
//			break;
//		default:
//			cout << "选择错误，重新选择\n";
//			break;
//		}
//	} while (input);
//	return 0;
//}

//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	//pfarr为一个函数指针数组-转移表
//	int (*pfarr[5])(int, int) = { 0,add,sub,mul,divv };
//	do
//	{
//		menu();
//		cout << "请选择\n";
//		cin >> input;
//		if (input >= 1 && input <= 4)
//		{
//			cout << "请输入操作数\n";
//			cin >> x >> y;
//			int ret = pfarr[input](x, y);
//			cout << ret << endl;
//		}
//		else if (input == 0)
//		{
//			cout << "退出\n";
//		}
//		else
//		{
//			cout << "选择错误\n";
//		}
//	} while (input);
//	return 0;
//}

//指向函数指针数组的指针

//int add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	int arr[10] = { 0 };
//	int(*parr)[10] = &arr;//数组指针
//
//	int (*p)(int, int);//函数指针
//	int (*pf[4])(int, int);//函数指针数组
//	int(*(*ppf)[4])(int, int) = &pf;
//	//指向函数指针数组的指针--数组指针，指针指向的数组有4个元素，每个元素分别为一个函数指针
//	return 0;
//}


//回调函数

//冒泡排序
//void bubblesort(int arr[], int sz)
//{
//	int t = 0;
//	int i = 0;
//	for (i = 0; i < sz-1; i++)
//	{
//		int j = 0;
//		int count = 0;
//		for (j = 0; j < sz - i - 1; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				t = arr[j + 1];
//				arr[j + 1] = arr[j];
//				arr[j] = t;
//			}
//			else
//				count++;
//		}
//		if (count == sz - i - 1 )
//			break;
//	}
//}
//
//struct stu
//{
//	char name[20];
//	int age;
//};
//
//int main()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };//改为升序
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	struct stu s[3] = { {"zhangsan",20},{"lisi",30},{"wangwu",25} };
//	float f[] = { 9.0,8.0,7.0,6.0,5.0,4.0,3.0,2.0,1.0,0.0 };
//	qsort(arr,sz,sizeof(arr[0]),)
//	//bubblesort(arr,sz);//只能排序整形
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		cout << arr[i] << " ";
//	}
//	return 0;
//}


//void qsort(void* base, 
//	       size_t num, size_t width, 
//	       int(* cmp)(const void* e1, const void* e2)
//          );

int cmp_int(const void* e1, const void* e2)
{
	//比较两个整形
	return *((int*)e1) - *((int*)e2);//强制类型转换
		//e1>e2 返回 >0
		//e1=e2 返回  0
		//e1<e2 返回 <0
}
//void*  指针可接受任意类型地址，但不能进行解引用操作，因为操作字节大小未知
//void*  不能进行加减整数的操作
//struct stu
//{
//	char name[20];
//	int age;
//};


void swap(char* buf1, char* buf2, int width)
{
	int i = 0;
	for (i = 0; i < width; i++)
	{
		char tmp = *buf1;
		*buf1 = *buf2;
		*buf2 = tmp;
		buf1++;
		buf2++;
	}
}

void bubble_sort(void* base, int sz, int width, int(*cmp)(const void* e1, const void* e2))
{
	int i = 0;
	int j = 0;
	for (i = 0; i < sz - 1; i++)
	{
		//每一趟比较的对数
		for (j = 0; j < sz - i - 1; j++)
		{
			//两个元素比较
			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0)
			{
				//交换
				swap((char*)base + j * width, (char*)base + (j + 1) * width, width);

			}
		}
	}
}

void test()
{
	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int i = 0;
	//假设使用函数的程序员知道要排序的数类型
	//就应该知道待排序数组中的元素
	bubble_sort(arr, sz, sizeof(arr[0]), cmp_int);
	for (i = 0; i < sz; i++)
	{
		cout << arr[i] << " ";
	}
}

int main()
{
	//int arr[] = { 9,8,7,6,5,4,3,2,1,0 };//改为升序
	//int sz = sizeof(arr) / sizeof(arr[0]);
	//struct stu s[3] = { {"zhangsan",20},{"lisi",30},{"wangwu",25} };
	//float f[] = { 9.0,8.0,7.0,6.0,5.0,4.0,3.0,2.0,1.0,0.0 };
	//qsort(arr, sz, sizeof(arr[0]), cmp_int);
		//bubblesort(arr,sz);//只能排序整形
	//qsort 第一个元素：待排序数组的首元素地址
	//第二个元素：待排序数组的元素个数
	//第三个元素：待排序数组每个元素的大小，单位为字节
	//第四个元素：是函数指针，比较两个元素所用函数的地址--这个函数使用者自己实现
	//                        所用函数的两个参数是待比较元素的地址
	//int i = 0;
	/*for (i = 0; i < sz; i++)
	{
		cout << arr[i] << " ";
	}*/
	test();
	return 0;
}
