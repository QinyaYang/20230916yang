#define _CRT_SECURE_NO_WARNINGS 1

#include<math.h>
#include<stdio.h>
#include<string.h>

//>>>>>>>>>>>>>>>>>>>>>2023.11.30 
//void PRINT(int n)
//{ 
//	int num = 0;
//	for (num = 1; num <= n; num++)     // ������ӡ1~n ����
//	{
//		printf("%d ", num);
//	}
//}
//int main()
//{
//	int m = 0;
//	scanf("%d", &m);
//	PRINT(m);
//	return 0;
//}

//int test(int x)
//{
//	if (x % 2 == 0)
//		return 0;
//	//else                 //QqqqqqqqqqqqqqqΪɶ������񲻼�else��returnҲ��
//	//	return 1;                     // ֻ�ᾯ��,�����������
//}
//int main()
//{
//	int num = 0;
//	int i = 0;
//	if ((scanf("%d", &i)) != EOF)
//	{
//		num = test(i);
//		printf("%d\n", num);
//	}
//	return 0;
//}

//void test(int n)
//{
//	if (n % 2 == 0)
//	{
//		printf("%d\n", 0);      
//	}
//	else
//	{
//		printf("%d\n", 1);
//	}
//}
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);                 // ��ȷд��������ȡ��main function
//	test(num);
//	return 0;
//}

//void menu()          // ����Ҫ����ֵʱ�� void
//{
//    printf("*********************\n");
//    printf("******* 1.play ******\n"); 
//    printf("******* 2.exit ******\n");
//    printf("*********************\n");
//}
//int main()
//{
//    menu();
//    return 0;
//}

//void test(void)    // ��ȷ����Ҫ����
//{
//	printf("hehe\n");
//}
//int main()
//{
//	test(0);
//	test(100);
//	test(100,200);
//	return 0;
//}
                                    // ����д�� XXXXXXX
//test(void)               // �������������Ͳ�д��Ĭ��Ϊ int !!!!!!!!!
//{                                   // void test(void)
//	printf("hahaha\n");
//}
//int main()
//{
//	int ret = test();
//	printf("%d\n", ret);
//	return 0;
//}

//void Build(int i)           // ����֪������ÿ��Ԫ�ظ�Ϊ-1 �ٴ�ӡ����
//{
//    int arr1[] = { 0 };           //
//    int j = 0;
//    for (j = 0; j < i; j++)   // myself  error XXXXXXXXXXXXXXX
//    {
//        arr1[i] = -1;
//    }
//    Print();
//    void Print(void)
//    {
//        for (j = 0; j < i; j++)
//        {
//            printf("%d ", arr1[i]);
//        }
//    }
//}
//int main()
//{
//    int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//    int count = sizeof(arr) / sizeof(arr[0]);
//    Build(count);// ������Ԫ��ת��
//    //Print(count);  // ��ӡ������
//    return 0;
//}

//int Build(int m) 
//{
//    int n = 0;
//    int arr1[] = { 0 };         //myself error XXXXXXXXXXXXXXXXXXX
//    for (n = 0; n < m; n++)
//    {
//        arr1[n] = -1;
//    }
//}
//void New(int i)
//{
//    int arr2[] = i;
//    printf("%d ", arr2);
//}
//int main()
//{
//    int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//    int count = sizeof(arr) / sizeof(arr[0]);
//    int ret[] = Build(count);
//    New(ret);
//    return 0;
//}


//void arr_set(int arr2[], int count2)
//{                          // ��������Ϊ��������ʱ���β�&ʵ�εĵ�ַ��ͬ
//    int i = 0; 
//    for (i = 0; i < count2; i++)
//    {
//        arr2[i] = -1;
//    }
//}
//void arr_print(int arr3[], int count3)
//{
//    int j = 0;
//    for (j = 0; j < count3; j++)
//    {
//        printf("%d ", arr3[j]);
//    }
//}
//int main()
//{
//    int arr1[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//    int count1 = sizeof(arr1) / sizeof(arr1[0]);
//    arr_print(arr1, count1); // �ú�����ӡԭ������  //�����ɸ���
//    printf("\n");
//    arr_set(arr1, count1);   // ������������  �̡̡̡̡̡̡̡�
//    arr_print(arr1, count1); // ��ӡ��������
//    return 0;
//}

//void Print(int arr3[], int count3)
//{
//    int j = 0;
//    for (j = 0; j < count3; j++)
//    {
//        printf("%d ", arr3[j]);
//    }
//}
//void test(int arr2[], int count2)
//{
//    int i = 0;
//    for (i = 0; i < count2; i++)
//    {
//        arr2[i] = -1;
//    }
//    Print(arr2, count2);     // ����Ƕ�׵��� �̡̡̡̡̡̡̡̡̡̡̡�
//}
//int main()
//{
//    int arr1[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//    int count1 = sizeof(arr1) / sizeof(arr1[0]);
//    test(arr1, count1);
//    return 0;
//}

/*void test(int x, int y)
{
    printf("%p %p\n", &x, &y);
}
int main()
{
    int a = 3;
    int b = 9;
    printf("%p %p\n", &a, &b);
    test(a, b);
    return 0;
}*/

//// ��Ƕ�׺�������   2023��2��  �ж�����
//int is_leapyear(int year) // �ж��Ƿ�Ϊ ����
//{
//    if ((year % 400 == 0) || ((year % 100 != 0) && (year % 4 == 0)))
//    {
//        return 1; // ����
//    }
//    else
//        return 0; // ƽ��
//}
//int get_dayofyear(int y, int m)  // 2023 2
//{
//    int arr[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
//    int day = arr[m];
//    if ((is_leapyear(y) == 1) && m == 2)  // ������Ƕ�׵���
//    {
//        day += 1;
//    }
//    return day;
//}
//int main()
//{
//    int year = 0;         
//    int month = 0;
//    scanf("%d%d", &year, &month);
//    int d = get_dayofyear(year, month);
//    printf("%d\n", d);
//    return 0;
//}

//int main()
//{
// //   size_t len = sizeof("abcdef");
// //   printf("%zd\n", len);
// //   printf("%zd\n", sizeof("abcdef"));   // ��������ʽ����
//
//    printf("%d", printf("%d", printf("%d", 43)));
//    printf("\n");
//    printf("%d ", printf("%d ", printf("%d ", 43)));
//    return 0;
//}

//int is_leapyear(int y);  // ����������������������ʹ��
//int main()
//{
//    int year = 0;
//    scanf("%d", &year);
//    int d = is_leapyear(year);
//    if (d == 0)
//        printf("������\n");
//    else
//        printf("��������\n");
//    return 0;
//}
//int is_leapyear(int y)           // ����������һ�����������
//{
//    if ((y % 400 == 0) || ((y % 4 == 0) && (y % 100 != 0)))
//        return 0;
//    else
//        return 1;
//}

#include<stdio.h>
#include"add.h"
//int main()
//{
//    int a = 0;
//    int b = 0;
//    scanf("%d%d", &a, &b);
//    int sum = ADD(a, b);
//    printf("%d\n", sum);
//    return 0;
//}