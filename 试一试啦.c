#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h> 
#include<string.h>
//���ÿ⺯��   standard input output

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
//int main()
//{                                    //character sring        �ַ���
//	//char string[] = { "abcde" }; 
//	char string[] = "abc" ; �������\0     \0����the ending of character string         
//	char arr[] = { 'a', 'b', 'c' };      
// ���޽�����־�����ӡ�漴ֵ
//	printf("%s\n", string);           ASCII�� '\0'--0  'a'--97  'A'--65  
//	printf("%s\n", arr);
//	return 0;
//}
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
//}                      ��������23-9-18��������
//int main()
//{
//	int a;
//	int b;                          review
//	int c;
//	int sum;
//	scanf("%d%d%d", &a, &b, &c);
//	sum = a + b + c;
//	printf(" sum=%d\n ", sum);
//	return 0;
//}
//int main()
//{
//	char arr1[] = { "abc" };
//	char arr2[] = { 'a','b','c'};       //��'\0'�����������ֵ��strlen����֪
//	printf("%d\n", strlen(arr1));
//	printf("%d\n", strlen(arr2));
//	return 0;
//}                  >>>>>>>>>ת���ַ�<<<<<<<
//int main()
//{
//	printf("%s\n","aabbcc\n");               // \n������������
//	return 0;
//}
//int main()
//{                                     // \�����������ԭ�����壬��������
//	printf("%s","c:\\test\\32\\test.c");     //  \t��������ˮƽ�Ʊ��      
//	return 0;                          //\ddd���������˽�������
//}
////int main()
//{
//	printf("(are u ok???)\n");       <�ϰ汾>   ??)��������������������ĸ��
//	return 0;
//}
//int main()
//{
//	printf("%c\n", '\"');              // \����������ʾԭ����˼
//	return 0;
//}
#include<string.h>
/*int main()
{
	char arr[] = { "c.\test\32\test.c" };        method 1
	printf("%d\n", strlen(arr));
	return 0;
}*/
/*int main()
{
	printf("%d", strlen("c.\test\32\test.c"));   method  2
	return 0;
}*/
//int main()
//{
//	printf("%c\n",'\x61');     //--->a
//	return 0;
//}                      >>>>>>>ѡ�����<<<<<<<<<
/*int main()
{
	int choice = 0;
	printf("�������\n");
	printf("��Ҫ�ú�ѧϰ��\n (1 / 0) > :");
	scanf("%d", &choice);
	if (choice == 1)
	{                                              //>>>>>>>if ���
		printf("good offer GET\n");
	}
	else
		printf("�ؼҿ�����\n");
	return 0;
}*/
/*int main()
{
	int line = 0;
	printf("��ʼѧϰ�����\n");
	while (line < 20000)
	{
		printf("����Ŭ���ô���:line=%d\n",line);   //>>>>>>>>>>>while���
		line++;
	}
	if (line >= 20000)
		printf("��ɹ���Զ��\n");
	return 0;
}*/
/*int main()
{
	int num1;
	int num2;
	int sum;
	printf("�����������ӷ�:\n");      ???????   �������Զ��庯��
	scanf("%d%d", &num1, &num2);
	sum = num1 + num2;
	printf("num=%d\n", sum);
	return 0;
}*/
/*int Add(int  x, int y)            >
{                                   >
	int z = x + y;                  > >>���Զ��庯��   ���������
	return z;                       >   
}                                   >
int main()
{
	//int num1 = 10;
	//int num2 = 20;
	int sum = 0;
	int a = 100;
	int b = 200;
	//sum = Add(num1, num2);
	sum = Add(a, b);
	printf("sum=%d\n", sum);
	return 0;
}*/
/*int Multiply(int x, int y)           >
{                                      >
	int z = x * y;                     > >>>���ú���ʵ�����������
	return z;                          >  
}                                      >
int main()
{
	int num1 = 2;
	int num2 = 4;
	int mul = 0;
	mul = Multiply(num1, num2);
	printf("mul=%d\n", mul);
	return 0;
}*/           
//               >>>>>>>>>>>>����<<<<<<<<<<<
//int main()
//{
//	int ch1[5] = { 1,2,3,4,5 };
//	printf("%d\n", ch1[1]);
//	printf("%d\n", ch1[1:4]);        //������ķ���
//
//	return 0;
//}
/*int main()
{
	//char arr[5] = { 'a','f','s','g','t'};
	//printf("%c\n", arr[2]);
	//printf("%c\n", arr[-1]);  X error
	//char arr[3] = { "add","egg","easy" };   X error
	//printf("%s\n", arr[0]);

	int arr[4] = { 1,2,3,4 };
	int i = 0;
	while (i < 4)
	{
		printf("%d\t", arr[i]);      //���鳤�Ȳ���Ϊ�������𣿣���������
		i++;
	}

	return 0;
}*/
/*int main()
{
	int see[5] = { 3,5,6,2,6 };
	int i = 0;
	while (0 < i < 3)                     //printһ����Χ����ô������������
	{
		printf("%d\t", see[i]);
		i++;
	}
	return 0;
}*/               //>>>>>>>>>>2023-9-19<<<<<<<<<<<<<
//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };            
//	printf("%d\n", arr1[2]);
//	return 0;
//}
//int main()
//{
//	char arr2[] = { 'd','f','g','l' };
//	printf("%c\n", arr2[1]);
//	return 0;
//}
/*double MUL(double x, double y)
{
	double z = x * y;
	return z;
}                         >>>>>>>>>>>>review
int main()
{
	double a = 4.6;
	double b = 2.3;
	double mul = 0;
	mul = MUL(a, b);
	printf("sum=%lf",mul);
	return 0;
}*/
//>>>>>>>>>>>>>>>>>>>>>>>������<<<<<<<<<<<<<<<<<<<<<<<<<<
//int main()
//{
//	int a = 6 % 4;                // %��������ȡģ��ȡ������
//	printf("%d", a);
//	return 0;
//}
//int main()
//{
//	int b = 1;                                    subject:������      
//	int ccc = b <<1 ;                                      ^^^
//	printf("%d", ccc);                                     |||
//	return 0;                                              |||  
//}                            //  >>�����ң� << ��������λ������
/*int main()
{
	int bee = 5;
	int honey = bee >> 1;
	printf("%d", honey);
	return 0;
}*/
//int main()
//{               
// int a=3;
// int b=5;                              // >>>>>>>>>>>>λ������
//	printf("%d", c);                     //   &����������λ��
//	return 0;
//}
//int main()
//{
//	int a = 3;
//	int b = 5;
//	int c = a | b;                      //  |����������λ��
//	printf("%d", c);
//	return 0;
//}
//int main()
//{
//	int weel = 4;
//	int wheel = 6;
//	int tech = weel ^ wheel;             //  ^����������λ���
//	printf("%d", tech);
//	return 0;
//}
//int main()
//{
//	int a = 10;            
//	//a = a + 10;               //�����������������ϸ�ֵ������
//	a += 10;    
//	a -= 3;// += -= *= |= ^= %= >>= <<= &= /=
//	printf("%d", a);
//	return 0;
//}
