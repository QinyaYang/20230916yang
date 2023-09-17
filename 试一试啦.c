#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>                 //引用库函数   standard input output

//2023.9.16
//int main()                        //int表示main函数调用返回一个整型值
//{                                //完成任务
//	printf("hello,world!");     //main函数—程序的入口（only one)
//	printf("hehe\n");
//	return 0;
//}
//int main()
//{
//	char a = 'A';                   //char为字符数据类型--向内存申请一块空间
//	printf("%c\n",a);               //%c ——打印字符类型
//	/*int age = 18;                     //int整型  short  long  long long float double
//	printf("%d\n", age);  */            //%d—— 打印整型
//	double money = 12.14;                //double为双精度浮点数   float为单精度浮点数
//	printf("%lf\n",money);               //%f ——打印浮点数
//	                                     //%p   %s字符串
//	return 0;                 //
//                               +++++++申请空间不同，减少内存消耗，多大就申多大空间          
//}
//int main()
//{
//	printf("%d\n", sizeof(int));          //4  字节byte   比特bit   1byte=8bit
//	printf("%d\n", sizeof(short));        //2          一个bit存一个二进制数
//	printf("%d\n", sizeof(char));         //1
//	printf("%d\n", sizeof(long));         //4 or 8
//	printf("%d\n", sizeof(long long));    //8
//	printf("%d\n", sizeof(float));        //4
//	printf("%d\n", sizeof(double));       //8
//	return 0;
//}
//int main()
//{
//	//short a = 999999999999999;    //ERROR----int short（占2字节16bit-2的16次方个数）大小不匹配 
//	//printf("%d\n", a);
//	double weigh = 130.06;
//	printf("%lf\n", weigh);
//	return 0;
//}
//2023-9-17
//int age2= 31;                            //全局变量  定义在{}之外
//int main()
//{
//	int age1 = 18;                      //局部变量   定义在{}内
//	printf("%d\n", age1);               //全局变量和局部变量名字尽量不同，相同时局变优先
//	return 0;                           //（可共存，不报错）
//}
//int age = 18;                         //全局变量在哪儿都可调用
//int main()
//{
//	printf("%d\n", age);
//	return 0;
//}
//int main()
//{
//	{
//		int width = 18;                局部变量的局限性
//	}
//	printf("%d\n", width);                      
//	return 0;
//}
//float width = 3.6;                   全局变量的“全”
//int main()
//{
//	{
//
//	}
//	printf("%lf\n", width);
//	return 0;
//}
//int main()
//{                                        两个数相加     
//	double a = 0;
//	double b = 0;
//	double sum = 0;                           &取地址符
//	scanf("%lf%lf", &a, &b);                //scanf————输入函数 
//	sum = a + b;
//	printf("sum=%lf\n", sum);
//	return 0;
//}
//int main()
//{
//	{                                       //
//		int num = 1;                        //num的作用域  局部变量的作用域
//	}                                       //
//	printf("%d\n", num);
//	return 0;
//}
//int global = 2023;                       //
//int main()                               //
//{                                        //全局变量作用域————整个程序的生命周期
//	printf("%d", global);                  //      
//  	return 0;                          //
//}                                        //
//int main()
//{
//	extern int length;         extern————声明引引入的外部源文件的变量
//	printf("%d\n", length);
//	return 0;                            //全局变量作用域是整个工程              
//}
//int main()
//{
//	{
//		int q = 9;                    //局部变量的生命周期只在定义域范围
//		printf("%d\n", q);
//	}
//	printf("%d\n", q);               //全局变量的生命周期是整个程序的生命周期
//	return 0;
//}
//int main()            //<<<<   常量    >>>>>>
//{
//	3; 
//	1009;                      //字面常量
//	return 0;
//}
//int main()
//{
//	const int height = 5;        //const修饰的常变量  ——常属性
//	printf("%d\n", height);         
//	height = 6;
//	printf("%d\n", height);
//	return 0;
//}
//int main()
//{
//	const int n = 10;
//	int arr[n] = {0};     //数组长度必须是常量 这里n这是有常属性，实质还是变量
//	return 0;
//}
//#define MAX 10
//int main()
//{
//	int arr[MAX] = { 0 };            //#define定义的标识符常量 
//	printf("%d\n", sizeof(arr));;
//	return 0;
//}
//enum SEX                            //枚举常量
//{                                   //枚举关键字 enum
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
//	//MONDAY = 8;                    //枚举常量不可更改
//	printf("TODAY=%d\n", TODAY);    //枚举常量——描述今天星期几
//	return 0;
//}
int main()
{                                    //character sring        字符串
	//char string[] = { "abcde" }; 
	char string[] = "abc" ;//后面跟有\0     \0——the ending of character string         
	char arr[] = { 'a', 'b', 'c' };//后无结束标志，后打印随即值
	printf("%s\n", string);         //  '\0'--0  'a'--97  'A'--65  ASCII编码
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
//	printf("%d%d%d%d", a,b,c,d);*/            打印输入数字
//	scanf("%d",& a);
//	printf("%d\n", a);
//
//	return 0;
//}