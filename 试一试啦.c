#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>                 //���ÿ⺯��   standard input output

//2023.9.16
//int main()                        //int��ʾmain�������÷���һ������ֵ
//{                                //�������
//	printf("hello,world!");     //main�������������ڣ�only one)
//	printf("hehe\n");
//	return 0;
//}
//int main()
//{
//	char a = 'A';                   //charΪ�ַ���������--���ڴ�����һ��ռ�
//	printf("%c\n",a);               //%c ������ӡ�ַ�����
//	/*int age = 18;                     //int����  short  long  long long float double
//	printf("%d\n", age);  */            //%d���� ��ӡ����
//	double money = 12.14;                //doubleΪ˫���ȸ�����   floatΪ�����ȸ�����
//	printf("%lf\n",money);               //%f ������ӡ������
//	                                     //%p   %s�ַ���
//	return 0;                 //
//                               +++++++����ռ䲻ͬ�������ڴ����ģ���������ռ�          
//}
//int main()
//{
//	printf("%d\n", sizeof(int));          //4  �ֽ�byte   ����bit   1byte=8bit
//	printf("%d\n", sizeof(short));        //2          һ��bit��һ����������
//	printf("%d\n", sizeof(char));         //1
//	printf("%d\n", sizeof(long));         //4 or 8
//	printf("%d\n", sizeof(long long));    //8
//	printf("%d\n", sizeof(float));        //4
//	printf("%d\n", sizeof(double));       //8
//	return 0;
//}
//int main()
//{
//	//short a = 999999999999999;    //ERROR----int short��ռ2�ֽ�16bit-2��16�η���������С��ƥ�� 
//	//printf("%d\n", a);
//	double weigh = 130.06;
//	printf("%lf\n", weigh);
//	return 0;
//}
//2023-9-17
//int age2= 31;                            //ȫ�ֱ���  ������{}֮��
//int main()
//{
//	int age1 = 18;                      //�ֲ�����   ������{}��
//	printf("%d\n", age1);               //ȫ�ֱ����;ֲ��������־�����ͬ����ͬʱ�ֱ�����
//	return 0;                           //���ɹ��棬������
//}
//int age = 18;                         //ȫ�ֱ������Ķ����ɵ���
//int main()
//{
//	printf("%d\n", age);
//	return 0;
//}
//int main()
//{
//	{
//		int width = 18;                �ֲ������ľ�����
//	}
//	printf("%d\n", width);                      
//	return 0;
//}
//float width = 3.6;                   ȫ�ֱ����ġ�ȫ��
//int main()
//{
//	{
//
//	}
//	printf("%lf\n", width);
//	return 0;
//}
//int main()
//{                                        ���������     
//	double a = 0;
//	double b = 0;
//	double sum = 0;                           &ȡ��ַ��
//	scanf("%lf%lf", &a, &b);                //scanf�����������뺯�� 
//	sum = a + b;
//	printf("sum=%lf\n", sum);
//	return 0;
//}
//int main()
//{
//	{                                       //
//		int num = 1;                        //num��������  �ֲ�������������
//	}                                       //
//	printf("%d\n", num);
//	return 0;
//}
//int global = 2023;                       //
//int main()                               //
//{                                        //ȫ�ֱ��������򡪡����������������������
//	printf("%d", global);                  //      
//  	return 0;                          //
//}                                        //
//int main()
//{
//	extern int length;         extern��������������������ⲿԴ�ļ��ı���
//	printf("%d\n", length);
//	return 0;                            //ȫ�ֱ�������������������              
//}
//int main()
//{
//	{
//		int q = 9;                    //�ֲ���������������ֻ�ڶ�����Χ
//		printf("%d\n", q);
//	}
//	printf("%d\n", q);               //ȫ�ֱ��������������������������������
//	return 0;
//}
//int main()            //<<<<   ����    >>>>>>
//{
//	3; 
//	1009;                      //���泣��
//	return 0;
//}
//int main()
//{
//	const int height = 5;        //const���εĳ�����  ����������
//	printf("%d\n", height);         
//	height = 6;
//	printf("%d\n", height);
//	return 0;
//}
//int main()
//{
//	const int n = 10;
//	int arr[n] = {0};     //���鳤�ȱ����ǳ��� ����n�����г����ԣ�ʵ�ʻ��Ǳ���
//	return 0;
//}
//#define MAX 10
//int main()
//{
//	int arr[MAX] = { 0 };            //#define����ı�ʶ������ 
//	printf("%d\n", sizeof(arr));;
//	return 0;
//}
//enum SEX                            //ö�ٳ���
//{                                   //ö�ٹؼ��� enum
//	female,
//	male,
//	secret
//};
//int main()
//{
//	enum SEX Jane = female;  
//	enum SEX Yang=secret;         
//	printf("Jane=%d\n", Jane);
//	printf("Yang=%d\n", Yang);
//	return 0;
//}
//enum WEEK
//{
//	DAYDAY,
//	MONDAY,
//	TUESDAY,
//	WEDNESDAY,
//	THURSDAY, 
//	FRIDAY,
//	SATURDAY,
//	SUNDAY
//};
//int main()
//{
//	enum WEEK TODAY = SUNDAY;
//	//MONDAY = 8;                    //ö�ٳ������ɸ���
//	printf("TODAY=%d\n", TODAY);    //ö�ٳ������������������ڼ�
//	return 0;
//}
int main()
{                                    //character sring        �ַ���
	//char string[] = { "abcde" }; 
	char string[] = "abc" ;//�������\0     \0����the ending of character string         
	char arr[] = { 'a', 'b', 'c' };//���޽�����־�����ӡ�漴ֵ
	printf("%s\n", string);         //  '\0'--0  'a'--97  'A'--65  ASCII����
	printf("%s\n", arr);
	return 0;
}
//int main()
//{
//	int a;
//	/*int b;
//	int c;
//	int d;
//	scanf("%d%d%d%d", &a,&b,&c,&d);
//	printf("%d%d%d%d", a,b,c,d);*/            ��ӡ��������
//	scanf("%d",& a);
//	printf("%d\n", a);
//
//	return 0;
//}