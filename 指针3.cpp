#include <iostream>
#include <cstdlib>
using namespace std;

//����ָ������
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
//	int arr[5] = { 0 };//����
//	int (*pa)(int, int) = add;//����ָ��
//	int (*parr[4])(int, int) = { add,sub,mul,divv};//����ָ������
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		cout << parr[i](2, 3) << endl;//5,-1,6,0
//	}
//	return 0;
//}

//char* my_strcpy(char* dest, const char* src);
////дһ������ָ��pf���ܹ�ָ��my_strcpy
////дһ������ָ�����飬�ܹ����4��my_strcpy�ĵ�ַ
//int main()
//{
//	char* (*pf)(char*, const char*);
//	char* (*parr[4])(char*, const char*);
//	return 0;
//}

//����ָ���������;��ת�Ʊ�

//void menu()
//{
//	cout << "****************************" << endl;
//	cout << "****1��add      2��sub******" << endl;
//	cout << "****3��mul      4��div******" << endl;
//	cout << "********* 0��exit **********" << endl;
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
//void calc(int (*p)(int, int))//���ܺ����ĵ�ַ��ʵ�ֲ�ͬ���ܣ������õĺ���Ϊ�ص�������
//{
//	int x = 0;
//	int y = 0;
//	cout << "����������������\n";
//	cin >> x >> y;
//	cout << p(x, y) << endl;
//}
//
//int main()
//{
//	int input = 0;
//	do  //�Ż������ظ����ֵ�����װΪһ������
//	{
//		menu();
//		cout << "��ѡ��\n";
//		cin >> input;
//		switch (input)
//		{
//		case 1:
//			calc(add);
//			/*cout << "����������������\n";
//			cin >> x >> y;
//			cout << add(x, y) << endl;*/
//			break;
//		case 2:
//			calc(sub);
//			/*cout << "����������������\n";
//			cin >> x >> y;
//			cout << sub(x, y) << endl;*/
//			break;
//		case 3:
//			calc(mul);
//			/*cout << "����������������\n";
//			cin >> x >> y;
//			cout << mul(x, y) << endl;*/
//			break;
//		case 4:
//			calc(divv);
//			/*cout << "����������������\n";
//			cin >> x >> y;
//			cout << divv(x, y) << endl;*/
//			break;
//		case 0:
//			cout << "�˳�\n";
//			break;
//		default:
//			cout << "ѡ���������ѡ��\n";
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
//	//pfarrΪһ������ָ������-ת�Ʊ�
//	int (*pfarr[5])(int, int) = { 0,add,sub,mul,divv };
//	do
//	{
//		menu();
//		cout << "��ѡ��\n";
//		cin >> input;
//		if (input >= 1 && input <= 4)
//		{
//			cout << "�����������\n";
//			cin >> x >> y;
//			int ret = pfarr[input](x, y);
//			cout << ret << endl;
//		}
//		else if (input == 0)
//		{
//			cout << "�˳�\n";
//		}
//		else
//		{
//			cout << "ѡ�����\n";
//		}
//	} while (input);
//	return 0;
//}

//ָ����ָ�������ָ��

//int add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	int arr[10] = { 0 };
//	int(*parr)[10] = &arr;//����ָ��
//
//	int (*p)(int, int);//����ָ��
//	int (*pf[4])(int, int);//����ָ������
//	int(*(*ppf)[4])(int, int) = &pf;
//	//ָ����ָ�������ָ��--����ָ�룬ָ��ָ���������4��Ԫ�أ�ÿ��Ԫ�طֱ�Ϊһ������ָ��
//	return 0;
//}


//�ص�����

//ð������
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
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };//��Ϊ����
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	struct stu s[3] = { {"zhangsan",20},{"lisi",30},{"wangwu",25} };
//	float f[] = { 9.0,8.0,7.0,6.0,5.0,4.0,3.0,2.0,1.0,0.0 };
//	qsort(arr,sz,sizeof(arr[0]),)
//	//bubblesort(arr,sz);//ֻ����������
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
	//�Ƚ���������
	return *((int*)e1) - *((int*)e2);//ǿ������ת��
		//e1>e2 ���� >0
		//e1=e2 ����  0
		//e1<e2 ���� <0
}
//void*  ָ��ɽ����������͵�ַ�������ܽ��н����ò�������Ϊ�����ֽڴ�Сδ֪
//void*  ���ܽ��мӼ������Ĳ���
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
		//ÿһ�˱ȽϵĶ���
		for (j = 0; j < sz - i - 1; j++)
		{
			//����Ԫ�رȽ�
			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0)
			{
				//����
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
	//����ʹ�ú����ĳ���Ա֪��Ҫ�����������
	//��Ӧ��֪�������������е�Ԫ��
	bubble_sort(arr, sz, sizeof(arr[0]), cmp_int);
	for (i = 0; i < sz; i++)
	{
		cout << arr[i] << " ";
	}
}

int main()
{
	//int arr[] = { 9,8,7,6,5,4,3,2,1,0 };//��Ϊ����
	//int sz = sizeof(arr) / sizeof(arr[0]);
	//struct stu s[3] = { {"zhangsan",20},{"lisi",30},{"wangwu",25} };
	//float f[] = { 9.0,8.0,7.0,6.0,5.0,4.0,3.0,2.0,1.0,0.0 };
	//qsort(arr, sz, sizeof(arr[0]), cmp_int);
		//bubblesort(arr,sz);//ֻ����������
	//qsort ��һ��Ԫ�أ��������������Ԫ�ص�ַ
	//�ڶ���Ԫ�أ������������Ԫ�ظ���
	//������Ԫ�أ�����������ÿ��Ԫ�صĴ�С����λΪ�ֽ�
	//���ĸ�Ԫ�أ��Ǻ���ָ�룬�Ƚ�����Ԫ�����ú����ĵ�ַ--�������ʹ�����Լ�ʵ��
	//                        ���ú��������������Ǵ��Ƚ�Ԫ�صĵ�ַ
	//int i = 0;
	/*for (i = 0; i < sz; i++)
	{
		cout << arr[i] << " ";
	}*/
	test();
	return 0;
}
