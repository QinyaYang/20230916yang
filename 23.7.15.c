#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>

//int main()
//{
//	printf("hehe\n");
//	/*printf("hehe\n");
//	printf("hehe\n");
//	printf("hehe\n");
//	printf("hehe\n");*/
//
//	return 0;
//}
//int main()
//{
//	char a = 'A';            char �÷�
//	printf("%c",a);          %c  ��ӡ�ַ�
//	return 0;
//}
//int main()
//{
//	int age = 18;
//	int aged = age + 1;
//	printf("%d", aged);       //%d ��ӡʮ��������
//	return 0;
//}
//int main()
//{
//   // long num = 100;
//   //short num = 100;
//	int num = 100;              //û�����Բ��    ��������ڴ�ռ䲻ͬ
//	printf("%d", num);
//	return 0;
//}
//int main()
//{
//	/*float a = 1.9;
//	printf("%f", a);*/
//	double b = 3.19;
//	printf("%lf", b);
//	return 0;
//}
//int main()
//{
//	printf("%d\n", sizeof(char));
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(short));
//	printf("%d\n", sizeof(long));          ���ڴ�����Ŀռ䲻ͬ
//	printf("%d\n", sizeof(long long));
//	printf("%d\n", sizeof(float));
//	printf("%d\n", sizeof(double));
//	
//	return 0;
//}
//int main()
//{
//	/*short age = 18;
//	printf("%d\n", sizeof(age));*/
//	float weight = 128.4;
//	return 0;
//}

//int num1 = 3;              ȫ�ֱ���
//int main()
//                                        ����������same���Ծֲ�Ϊ��
//{
//	int num1 = 2;            �ֲ�����
//	printf("%d\n", num1);
//	return 0;
//}
//int q = 10;
//int main()
//{
//	printf("q=%d\n",q);            ȫ�ֱ������ô����ڴ������
//	return 0;
//}
//int main()
//{
//	{
//		int q = 14;                �ֲ������ķ�Χ���������ڴ����
//	}                      
//	printf("%d", q);
//	return 0;
//}
//int main()
//{
//	int q = 0;
//	int w = 0;
//	int sum = 0;
//	scanf("%d%d", &q, &w);
//	
//	sum = q + w;
//	printf("%d\n", sum);
//	return 0;
//}
////int main()
////{
//	int q = 0;
//	int w = 0;
//	//                          �����  int sum=0Ҳ�ɷ�����    ��c�����﷨�涨��
//	scanf("%d%d", &q, &w);     //������У���Ϊscanf_s   ����Ϊ��safe��
//	int sum = 0;
//	sum = q + w;
//
//	printf("%d\n", sum);
//	return 0;
//}
//int main()
//{
//	{
//		int num = 4;         �ֲ�����������
//	}                        ȫ�ֱ���������ǳ���
//	return 0;
//}
//int main()
//{
//	extern int gogo;          extern�������������ⲿ
//	printf("%d\n", gogo);     ȫ�ֱ����ܹ㣬�ɴ�����Դ�ļ�����
//	return 0;
//}
//2023.7.17
//2023.7.19���⿪ʼ
//int main()
//{
//	int q = 0;
//	int w = 0;
//	int e = 0;
//	int sum = 0;                      review
//	scanf("%d%d%d", &q, &w, &e);
//	sum = q + w + e;
//	printf("sum=%d\n", sum);
//	return 0;
//}
#include<stdio.h>
//int main()
//{
//	/*int num = 8;
//	printf("%d\n", num);
//	num = 4;
//	printf("%d\n", num);*/
// 
//	const int num = 4;
//	printf("%d", num);
//	num = 8;                         const ���г�����    ��ʱnumΪconst���εĳ�����
//	printf("%d", num);
//	return 0;
//}
//int main()
//{
//	const int n = 19;
//	int arr[n] = { 0 };           ���鳤�ȱ���Ϊ��������������const���εĳ�����no
//	return 0;
//}

//int main()
//{
//#define max 10                     #define ����ı�ʶ������
//	int arr[max] = { 0 };
//	return 0;
//}
//enum sex
//{
//	female,
//	male,
//	secret
//};
//int main()
//{
//	/*enum sex yqy = female;*/
//	printf("%d\n", male);        1
//	printf("%d\n", female);      0   ö�ٳ�����ֵ���ɸı� 
//	printf("%d\n", secret);      2
//	return 0;
//}
//enum Color
//{
//	blue,
//	yellow,
//	red
//};
//int main()	
//{
//	enum Color color = blue;
//	color = red; 
//	printf("%d\n", color);
//	                                   //ͨ��ö�����ʹ����ı������Ըı�
//	/*red = 3;     */                  //ö�ٳ������ܱ��޸�
//	return 0;
//}2023.7.19

//int main()
//{
//	int const num = 3;
//	num = 4;
//	printf("num=%d\n", num);
//	return 0;
//}
//#define max 110
//int main()
//{
//	int arr[n] = { 0 };
//	/*int arr[max] = { 0 };*/
//	return 0;
//}
//enum sex
//{
//	female,
//	male,
//	secret
//};
//int main()
//{
//	enum sex yqy = female;
//	printf("yqy=%d\n", yqy);
//	return 0;
//}                                  review              review    review
//int main()
//{
//	char arr1[] = {"abc"};
//	char arr2[] = { 'a','b','c','\0'};         // '\0'Ҳ��ֱ��д0
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//
//	return 0;
//}
//int main()
//{
//	char arr1[] = { "abc" };
//	char arr2[] = { 'a','b','c' };           //û���ַ����Ľ�����־�����������ֵ
//	printf("%d\n", strlen(arr1));
//	printf("%d\n", strlen(arr2));
//	return 0;
//}
//int main()
//{
//	printf("c.\test\32\test.c");                   //ת���ַ� ��\\t
//	return 0;
//}
//int main()
//{
//	printf("(are you ok??)");                   //??+_  �ھɱ�������Ϊ����ĸ��
//	return 0;                                    //�������]    �˽�
//}
//int main()
//{
//	printf("%c\n", '\'');                     ��'����һ��''�е�һ��
//	return 0;
//}
//int main()
//{
//	/*printf("%d\n", strlen("c.\test\32\test.c"));   */    //  \32�������˽�������
//	printf("c.\test\32\test.c");
//	return 0;
//}                           2023-7-30 ��ʼ
//int main()
//{
//	/*printf("%d\n", strlen("c.\test\32\test.c"));*/
//	/*printf("%d\n", strlen("\x61"));    */               // \xĳĳΪ����ʮ����������
//	/*printf("\x61");*/  --->a
//	printf("\101");    --->A
//
//	return 0;
//}
//int main()
//{
//	char a1[] = "abc";
//	char a2[] = {'a','b','c',0};                 review
//	/*printf("%d\n", strlen(a1));
//	printf("%d\n", strlen(a2));*/
//	return 0;
//}
//int main()
//{
//	printf("\'\n");
//	printf("\"\n");                           ��ӡ�ַ�˫���ź͵�����
//	return 0;
//}
//int main()
//{
//	int input = 0;
//	printf("�������\n");
//	printf("��Ҫ�ú�ѧϰ��(1/0)>: \n");
//		scanf("%d", &input);                    ѡ�����
//		if (input == 1)
//			printf("��offer\n");
//		else
//			printf("��������");
//	return 0;
//}
//int main()
//{
//	int input = 0;
//	printf("�������");
//	printf("��Ҫ�ú�ѧϰ��(1/9) >: ");       //  8.2  review
//	scanf("%d", &input);
//	if (input == 1)
//		printf("��offer");
//	else
//		printf("������");
//	return 0;
//}
//int main()
//{
//	int choice = 0;
//	printf("����������һ��\n");
//	printf("�����Լ���������?(1/0)>: ");               ѡ�����
//	scanf("%d", & choice);
//	if (choice == 1)
//		printf("������δ��");
//	else
//		printf("��������");
//	return 0;
//}
//int main()
//{
//	printf("�������");
//	int line = 0;
//	while (line < 20000)
//	{                                        while ѭ�����
//		printf("�ô���:%d\n", line);
//		line++;
//	}
//	printf("��offer");
//	return 0;
//}
int main()
{
	int money = 0;
	printf("�����ض�ò����Ҷ���");
	while (money < 50000)
	{
		printf("׬Ǯing:%d\n", money);
		money++;
	}
	printf("�ҿ�����npy����");
	return 0;
}