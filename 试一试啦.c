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
int main()
{
	//short a = 999999999999999;    //ERROR----int short��ռ2�ֽ�16bit-2��16�η���������С��ƥ�� 
	//printf("%d\n", a);
	double weigh = 130.06;
	printf("%lf\n", weigh);
	return 0;
}