#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h> 
#include<string.h>
//引用库函数   standard input output

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
//int main()
//{                                    //character sring        字符串
//	//char string[] = { "abcde" }; 
//	char string[] = "abc" ; 后面跟有\0     \0——the ending of character string         
//	char arr[] = { 'a', 'b', 'c' };      
// 后无结束标志，后打印随即值
//	printf("%s\n", string);           ASCII码 '\0'--0  'a'--97  'A'--65  
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
//	printf("%d%d%d%d", a,b,c,d);*/            打印输入数字
//	scanf("%d",& a);
//	printf("%d\n", a);
//
//	return 0;
//}                      》》》》23-9-18《《《《
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
//	char arr2[] = { 'a','b','c'};       //无'\0'，后面是随机值，strlen不可知
//	printf("%d\n", strlen(arr1));
//	printf("%d\n", strlen(arr2));
//	return 0;
//}                  >>>>>>>>>转义字符<<<<<<<
//int main()
//{
//	printf("%s\n","aabbcc\n");               // \n————换行
//	return 0;
//}
//int main()
//{                                     // \————表达原本含义，不被解析
//	printf("%s","c:\\test\\32\\test.c");     //  \t————水平制表符      
//	return 0;                          //\ddd————八进制数字
//}
////int main()
//{
//	printf("(are u ok???)\n");       <老版本>   ??)————被解析成三字母词
//	return 0;
//}
//int main()
//{
//	printf("%c\n", '\"');              // \————表示原有意思
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
//}                      >>>>>>>选择语句<<<<<<<<<
/*int main()
{
	int choice = 0;
	printf("加入比特\n");
	printf("你要好好学习吗？\n (1 / 0) > :");
	scanf("%d", &choice);
	if (choice == 1)
	{                                              //>>>>>>>if 语句
		printf("good offer GET\n");
	}
	else
		printf("回家烤红薯\n");
	return 0;
}*/
/*int main()
{
	int line = 0;
	printf("开始学习计算机\n");
	while (line < 20000)
	{
		printf("继续努力敲代码:line=%d\n",line);   //>>>>>>>>>>>while语句
		line++;
	}
	if (line >= 20000)
		printf("离成功不远罗\n");
	return 0;
}*/
/*int main()
{
	int num1;
	int num2;
	int sum;
	printf("计算两个数加法:\n");      ???????   将其用自定义函数
	scanf("%d%d", &num1, &num2);
	sum = num1 + num2;
	printf("num=%d\n", sum);
	return 0;
}*/
/*int Add(int  x, int y)            >
{                                   >
	int z = x + y;                  > >>》自定义函数   两个数相加
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
	int z = x * y;                     > >>>》用函数实现两个数相乘
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
//               >>>>>>>>>>>>数组<<<<<<<<<<<
//int main()
//{
//	int ch1[5] = { 1,2,3,4,5 };
//	printf("%d\n", ch1[1]);
//	printf("%d\n", ch1[1:4]);        //对数组的访问
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
		printf("%d\t", arr[i]);      //数组长度不是为常量的吗？？？？？？
		i++;
	}

	return 0;
}*/
/*int main()
{
	int see[5] = { 3,5,6,2,6 };
	int i = 0;
	while (0 < i < 3)                     //print一个范围的怎么做？？？？？
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
//>>>>>>>>>>>>>>>>>>>>>>>操作符<<<<<<<<<<<<<<<<<<<<<<<<<<
//int main()
//{
//	int a = 6 % 4;                // %————取模（取余数）
//	printf("%d", a);
//	return 0;
//}
//int main()
//{
//	int b = 1;                                    subject:二进制      
//	int ccc = b <<1 ;                                      ^^^
//	printf("%d", ccc);                                     |||
//	return 0;                                              |||  
//}                            //  >>（向右） << （向左）移位操作符
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
// int b=5;                              // >>>>>>>>>>>>位操作符
//	printf("%d", c);                     //   &————按位与
//	return 0;
//}
//int main()
//{
//	int a = 3;
//	int b = 5;
//	int c = a | b;                      //  |————按位或
//	printf("%d", c);
//	return 0;
//}
//int main()
//{
//	int weel = 4;
//	int wheel = 6;
//	int tech = weel ^ wheel;             //  ^————按位异或
//	printf("%d", tech);
//	return 0;
//}
//int main()
//{
//	int a = 10;            
//	//a = a + 10;               //》》》》》》》复合赋值操作符 
//	a += 10;    
//	a -= 3;// += -= *= |= ^= %= >>= <<= &= /=
//	printf("%d", a);
//	return 0;
//}
// >>>>>>>>>>>>>>>>>>>>2023-9-21凌晨 0：17<<<<<<<<<<<<<<<<<<<<<<<
//int main()
//{
//	int a = 19;
//	printf("%d\n", !a);         //单目操作符之  逻辑反操作符--！
//	return 0;                   
//	                            
//}                         //在C语言中 用0表示假 用非0表示真
//int main()
//{
//	int w = 0;
//	printf("%d", !w);
//	return 0;
//}
//int main()
//{
//	int a = 28;
//	int b = -a;
//	printf("%d", b);          //单目操作符之 —— + -
//	return 0;
//}
/*int main()
{
	int a = 9;
	//printf("%d\n", sizeof(a));
	//printf("%d", sizeof(int));     //单目操作符之 sizeof 计算变量/类型所占空间
	double c = 2.3;                                 单位为 字节
	//printf("%d\n", sizeof (double));
	//printf("%d",sizeof double/int);   X  error
	return 0;
}*/
//int main()
//{
//	int arr[10] = { 0 };
//	printf("%d", sizeof(arr));  //output=40
//	return 0;
//}
/*int main()
{
	int num = 0;                        //数组元素个数=数组总大小/每个元素大小
	int arr[] = {2,3,5,1,5,1,5,5,6,7,3,7,3,7,3,6,7};
	num = sizeof(arr) / sizeof(int);
	printf("num=%d\n", num);
	return 0;
}*/
////////////////////////////////>>>>>b站   P5：鹏哥不可错过的公开课
        //》》》》》》》》》》如何交换两个int变量的值，不能使用第三个变量
//int main()
//{
//	int a = 3;
//	int b = 5;
//	a = b;
//	
//	b != 5;
//	printf("a=%d\n", a);
//	printf("b=%d\n", b);
//
//	return 0;
//}
/*int main()
{
	int a = 3;
	int b = 5;
	int c = a;
	int d = b;             // 交换两个数用其他变量的情况
	b = c;
	a = d;
	printf("b=%d\n", b);
	printf("a=%d\n", a);
	return 0;
}*/
/*int main()
{
	int a = 3;
	int b = 5;
	printf("交换前：a=%d,b=%d\n", a, b);
	int c = 0;
	c = a;                            //交换俩个数 用一个变量
	a = b;
	b = c;
	printf("交换后：a=%d,b=%d\n", a, b);
	return 0;
}*/
//int main()
//{
//	int a = 3;
//	int b = 5;                      //自己做的，不用变量
//	printf("交换后：a=%d,b=%d", b, a);
//	return 0;
//}
/*#include<limits.h>            //  引头文件 
int main()
{
	int a = 3;
	int b = 5;
	INT_MAX;                              //可查看极限值
	printf("未交换：a=%d,b=%d\n", a, b);
	a = a + b;//a为和                         鹏哥教的1 用两变量的关系
	b = a - b;//b为原a
	a = a - b;//a为原b
	printf("交换后：a=%d,b=%d\n", a, b);
	
	return 0;      //????????Question  int溢出 int-4byte-32bit-...
}*/
/*int main()
{
	int a = 3;
	int b = 5;
	a = a ^ b;
	b = a ^ b;//b为原a                 //异或操作—思维 可读性不高
	a = a ^ b;//a为原b
	printf("交换后：a=%d,b=%d\n", a, b);
	return 0;
}*/
/*int main()
{
	int arr[9] = { 1,2,3,4,5,1,2,3,4 };
	int arr1[8] = { 1,2,3,4,1,2,3,4 };      自己写的find out the single
	int re[1] = {0};                               X  error  
    re[1] = arr - arr1;
	printf("re=%d\n", re[1]);
	return 0;
}*/
//》》》》》》》》》》》》》《find out the single one》《《《《《《《《《
/*int main()
{
	int arr[] = { 1,2,3,4,-5,1,2,3,4,7,9 };
	int num = sizeof(arr) / sizeof(arr[0]);   //calculate元素个数
	int single = 0;     // set up the single的位置
	for (single = 0; single < num; single++)
	{
		int count = 0;       // calculate the single出现的次数
		int j = 0;          // set up第二个数
		for (j = 0; j < num; j++)
		{
			if (arr[single] == arr[j])
			{
				count++;
			}
		}
		if (count == 1)
		{
			printf("single: %d\n", arr[single]);
			//break;                 ???????no break——可求多个single
		}
		   
	}
	return 0;             // 不能找出多个single ————暴力求解,复杂
}*/
/*int main()
{
	int arr[] = { 1,2,3,4,1,2,3,4,5,7 };
	int num = sizeof(arr) / sizeof(arr[0]);
	int j = 0;
	for (j = 0; j < num; j++)         myself : XXXX error
	{
		if (num [j] == 1))
			printf("single: %d\n", arr[j]);
	}
	return 0;
}*/
//int main()
//{
//	int arr[] = { 1,2,3,4,5,1,2,3,4,7 };
//	int num = sizeof(arr) / sizeof(arr[0]);
//
//	return 0;
//}
/*int main()
{
	int arr[] = { 1,2,3 };
	int bin[] = { 2,4,6 };
	int j = 0;
	for (j = 0; j < 3; j++)
	{
		int num = 0;
		int i = 0;                     //随便写写
		for (i = 0; i <3; i++)    //数组内的元素自由 add
		{
			
			num = arr[j] + bin[i];
			printf("num=%d\n", num);
		}
	}
	return 0;
}*/
/*int main()
{
	int arr[] = { 1,2,3 };
	int bin[] = { 0,7,1 };
	int i = 0;
	int j = 0;
	int num[] = { 0 };
	int k = 0;
	for (i = 0; i < 3; i++)
	{                              //????????怎样对应元素相加
		for (j = 0; j < 3; j++)           XXX error
		{                        
			num[k] = arr[i] + bin[j]; 
		}
	}

	printf("num=%d\n", num[k]);
	return 0;
}*/
/*int main()
{
	int arr[] = { 1,2,3,4,5,1,2,3,4 };
	int num = sizeof(arr) / sizeof(arr[0]);
	int sgl = 0;
	int i = 0;
	int j = 0;
	for (i = 0; i <= num; i++)
	{
		for (j = 0; j <= num; j++)           XXXX error
		{
			if (arr[i] ^ arr[j] == 0)          z自己写的
				printf("单身狗：%d\n", j);
		}
	}

	printf("单身狗：%d\n", sgl);
	return 0;
}*/
//int main()
//{
//	int arr[] = { 1,2,3,4,5,1,2,3,4 };
//	int num = sizeof(arr)/sizeof(arr[0]);
//	int i = 0;
//	int j = 0;
//	int s = 0;
//	i++;
//	j++;
//	s++;
//	if (arr[i] ^ arr[j] ^ arr[s] == i)
//	printf("%d\n", i);                   XXXXX error self
//	/*for (i = 0; i <= num; i++)
//	{
//		for (j = 0; j <= num; j++)
//		{
//			for (s = 0; s <= num; s++)
//			{
//				if (arr[s] ^ arr[i] ^ arr[j] == s)
//				{
//					printf("单身狗：%d\n", arr[s]);
//					break;
//				}
//			}
//		}
//	}*/
//	return 0;
//}
/*int main()       >>>>>>>>>>>>>>>用异或思想解决 找单身狗的题<<<<<<<<<<
{
	int arr[] = { 1,2,3,4,5,1,2,3,4};
	int num = sizeof(arr) / sizeof(arr[0]);
	int re = 0;
	int i = 0;
	for (i = 0; i < num; i++)
	{
		re = re ^ arr[i];            //有一个single的情况
	}                                  
	//if (i = num - 1)               //有局限，只有双数相同数能异或为0
		printf("单身狗：%d\n", re);        //也只能找一个单身狗

	return 0;
}*///》》》》》》》》》》》》》2013-9-23           review/revise
/*int main()
{
	int arr[] = { 1,2,3,4,5,1,2,3,4 };   //3^5^3=5    3^3^5=5
	int num = sizeof(arr) / sizeof(arr[0]);  
	int re = 0;
	int i = 0;
	for (i = 0; i < num; i++)               //复习
	{
		re = re ^ arr[i];                   //用异或解单身狗题
	}
	printf("single= %d\n",re);
	return 0;
}*/
/*int main()
{
	int arr[] = { 1,2,3,4,5,1,2,3,4 };
	int num = sizeof(arr) / sizeof(arr[0]);
	int i = 0;
	int j = 0;
	for (i = 0; i < num; i++)
	{
		int count = 0;//arr[i]出现次数
		for (j = 0; j < num; j++)
		{
			if (arr[i] == arr[j])
				count++;
		}
		if (count == 1)
			printf("single= %d\n", arr[i]);
	}

	return 0;
}*/
//>>>>>>>>>>>>>>>>>>>》》》》写程序，运行就在1min后关机，输入我是猪就取消
/*int main()
{
	char sen = 0;
	scanf("请输入暗号：%s", &sen);      XXXX  error
	if(sen="我是猪")
		turn off;
	return 0;
}*/ //》》》》》》》》》》》》》》》》写关机程序
#include<limits.h>
#include<stdlib.h>
#include<string.h>
/*int main()
{
	char input[20] = { 0 };     //存储数据
	system("shutdown -s -t 120");    //关机   cmd
	again:
	printf("注意，电脑将在两分钟内关机，若输入：我是猪，则取消关机\n");
	scanf("%s", input);
	if (strcmp(input, "我是猪") == 0)
	{
		system("shutdown -a");
	}
	else
	{
		goto again;
	}
	return 0;
}*/ //>>>>>>>>>>>>>>>>>>>>>>>>>>>>.2023-9-24  review/revist
//int main()
//{
//	char input[] = { 0 };
//	system("shutdown -s -t 120");
//	again:
//	printf("Attention!你的电脑将在2分钟内关机，若输入正确，则关机取消");
//	scanf("%s", input);
//	if (strcmp(input, "I'm a pig") == 0)
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}
//int main()
//{
//	int a = 9;
//	printf("a=%d\b", a);  // \b为退格符
//	return 0;
//}
// 。。。。。。。。。。。。。。。题目————用函数怎样求几个数的最大值
/*int main()
{                //先求两个数较大值
	int arr[] = { 2,5};
	if (arr[0] > arr[1])
	{
		printf("the larger one is:%d\n", arr[0]);
	}
	else
	{
		printf("the larger one is:%d\n", arr[1]);
	}

	return 0;
}*/
/*int CMP(int x, int y)              // >>>>>>>用函数求两个数较大值
{
	if (x > y)
		return x;
	else
		return y;
}
int main()
{
	int a = 5;
	int m = 9;
	int bigger = 0;
	bigger = CMP(a, m);
	printf("the bigger one is:%d\n", bigger);
	return 0;
}*/
/*int main()
{
	int x = 9;
	int y = 6;
	int z = 2;
	if (x > y)
	{
		if (z > x)
			printf("max=%d\n", z);
		else
			printf("max=%d\n", x);
	}
	else
	{
		if (y < z)
			 printf("max=%d\n", z);
		else
			 printf("max=%d\n", y);
	}
	return 0;
}*///硬算求三个数最大值         if语句
/*int MAX(int x, int y, int z)
{
	if (x > y)
	{
		if (z > x)
			return z;// printf("max=%d\n", z);
		else
			return x;// printf("max=%d\n", x);
	}
	else
	{
		if (y < z)
			return z;// printf("max=%d\n", z);
		else
			return y;// printf("max=%d\n", y);
	}
}
	int main()        //<<<<<<<<<<<用函数求三个数最大值  暴力求法
{
	int b = 7;
	int r = 3;
	int p = 0;
	int max = 0;
	max = MAX(b, r, p);
	printf("max=%d\n", max);
	return 0;
}*/
///////////////////////////////////2023-9-25  night
/*float MAX(float x, float y)
{
	if (x > y)
		return x;
	else
		return y;
}                                    //review/revise
int main()
{
	float a = 1.4;
	float b = 0.9;
	float max = 0;
	max = MAX(a, b);
	printf("max=%f\n", max);
	return 0;
}*/ 
//>>>>>>>>>>>compare the input numbers
/*int MIN(int x, int y)
{
	if (x < y)
		return x;
	else
		return y;
}
int main()
{
	int a = 0;
	int b = 0;
	int min = 0;
	scanf("%d%d", &a, &b);
	min = MIN(a, b);
	printf("min=%d\n", min);
	return 0;
}*/
//》》》》》》》》》》》》》》》sizeof操作符
//int main()
//{
//	int a = 98;
//	int arr[] = { 2,6,3,6,7,2};
//	float bin[] = { 2.4,3.5,8.5,9.6 };
//	printf("%d\n", sizeof(a));
//	printf("%d\n", sizeof a);
//	printf("%d\n", sizeof(int));
//	//printf("%d\n", sizeof int);          //error
//	printf("%d\n", sizeof(arr[3]));
//	printf("%d\n", sizeof(bin[0]));
//	printf("%d\n", sizeof(bin));         //calculate数组长度大小
//	printf("num=%d\n", sizeof(bin) / sizeof(bin[0]));//计算数组元素个数
//	return 0;
//}
/*int main()
{               //负数在内存存储是以二进制的补码
	int a = 0;
	int b = ~a;                ////>>>>>>>>>  ~————按位取反
	printf("b=%d\n", b);// int -4byte-32bit a=00000000000000000000000000000000
	return 0;              //~a =11111111111111111111111111111111<补码>
} */                         //    11111111111111111111111111111110<反码>
                               //^ ————符号位，0为正，1为负  
                           //    10000000000000000000000000000001<原码>
						   
//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>前后置++/--操作符《《《《《《《《《《《
/*int main()
{
	int a = 10;
	int b = a++;                //》》》》》》》》》》后置++   操作符
	printf("a=%d b=%d\n", a, b);                   //先使用，后自增
	int f = 20;
	int g = ++f;                //》》》》》》》》》》前置++ 操作符
	printf("f=%d g=%d\n", f, g);                   //先自增，后使用
	int r = 4;
	int t = r--;
	printf("r=%d t=%d\n", r, t);
	int i = 0;
	int k = --i;
	printf("i=%d k=%d\n", i, k);
	return 0;
}*/
//int main()
//{
//	int y = (double)3.14;        //>>>>>>>>>>>>>>>>  ()————强制类型转换
//	printf("y=%d\n", y);
//	return 0;
//}
//      》》》》》》关系操作符： >  >=  <  <=  !=  ==
/*int main()
{
	int q = 9;
	int b = 6;                        // 真——1 假——0
	int a = q && b;//   >>>>>>>>>>>>>>>>>>>>>逻辑与—— && (相乘)
	printf("a=%d\n", a);                    //区别 按位与——&（相交）
	int o = 1;                              //     按位或——| (相和）
	int r = 0;                              //   按位异或——^
	int d = o || r;
	printf("d=%d\n", d);
	return 0;
}*/
//》》》》》》》》》》》》》》》》》》》条件操作符 exp1  ? exp2 : exp3
//若1为真，执行2，2为整个的结果； 1为假，执行3，3为整个的结果
/*int main()
{
	int a = 19;
	int b = 32;
	a > b ? printf("max=%d", a) : printf("max=%d", b);
	return 0;
}*/
/*int main()
{
	int a = 8;
	int b = 9;
	int max = 0;
	max = (a > b ? a : b);
		printf("max=%d\n", max);
	return 0; 
}*/
/*int main()                   //用条件操作符 求两个数较大值
{
	int a = 0;
	int b = 0;
	int max = 0;
	scanf("%d%d", &a, &b);
	max = (a > b ? a : b);
	printf("max=%d\n", max);
	return 0;
}*/
//int main()
//{
//	int arr[] = { 0 };
//	printf("%d\n", arr[3]);    //  []————下标引用操作符
//	return 0;
//}
/*int sum = 0;
int a = 0;         //全局变量
int b = 0;
int ADD(int s, int m)
{
	sum = (a > b ? a : b);
}
int main()
{
	scanf("%d%d", &a, &b);
	sum = ADD(a, b);            // >>>>>>>>>()——函数调用操作符<<<<<<<<<<<<
	printf("sum=%d\n", sum);
	return 0;
}*/
//  >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>2023-9-26
//》》》》》》》》》》》》常见关键字《《《《《《《《《《《《《《《《《《
//auto  break  case  char  const  extern  continue  default  double  else
//enum  float  for  goto  if  int  long  register  return  short  signed
//sizeof  static  struct  switch typedef  union  unsigned  void  while volatile 
//int main()
//{
//	//int a = 0;         //a——局部变量（自动变量）   a出作用域就自动销毁
//	auto int a = 0;        //前面的auto 通常省略     
//	return 0;        // >>>>>>>>>>>>> auto————常用关键字<<<<<<<<<<<<<<
//}
// 
// 
// >>>>>>>>>>>>>>>>>>>>>>register————寄存器关键字<<<<<<<<<<<<<<<<<<<<<<<<<
// 随着计算机发展，内存的访问速度跟不上CPU的运行速度，则CPU先从寄存器中取，
//不够再一级级向下取  /  \
//                  /寄存器\     -空间小访问速度快
//               / 高速缓存  \              ———计算机存储数据的方式
//             /      内存    \
//            /      硬盘      \  -空间大速度慢  
//          /                    \
//                                  内存 5GB
//                                  硬盘 500GB
// int main()
//{
//	register int a = 0;  //————建议把a放进寄存器，a重要
//	return 0;
//}
//>>>>>>>>>>>>>>>>>>>>>>>signed 关键字 -unsigned <<<<<<<<<<<<<<<<<<<<<<<<<
//int main()
//{
//	//int a = -2;   // int <---> signed int     signed被省略
//	unsigned int a = -2;
//	//printf("%d", a);
//	return 0;       //int 被定义为有符合的变量
//}
//>>>>>>>>>>>>>>>>>>>>>>>typedef————类型重定义<<<<<<<<<<<<<<<<<<<<<<
/*int main()
{
	typedef unsigned int int_u;
	int_u a = -2;
	unsigned int b = -3;
	int c = -1;
	printf("a=%d\n", a);
	printf("b=%d\n", b);
	printf("c=%d\n", c);
	return 0;
}*/
//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>2023-9-27
/*int main()
{
	signed int a = -1;      //数据存储讲 -1的实际存储是二进制的111......1111
	                         //取反后全是 0，全0解释出的十进制就是0
	unsigned int b = -2;              // QQQQQQQQQQQQQ
	int c = ~a;
	int d = ~b;
	printf("c=%d\n", c);
	printf("d=%d\n", d);
	return 0;
}*/
//》》》》》》》》》》》》》》》key word————static《《《《《《《《

/*void test()            //    void代表empty    void函数无返回值
{
	int a = 1;        //局部变量a  --出定义域就销毁
	a++;
	printf("a=%d\n", a);         //result:a=2   x 5
}
int main()
{
	int i = 0;
	while (i < 5)
	{
		test();
		i++;
	}
	return 0;
}*/
/*void test()
{
	static int a = 1;      //!!!!!!!!!!!!有static 此时a为静态的局部变量
	a++;                       
	printf("a=%d\n", a);  //static用法 ①   修饰局部变量使其生命周期变长
}                                        //（作用域不变）
int main()
{
	int i = 0;
	while (i < 5)
	{
		test();
		i++;
	}
	return 0;
}*/
/*extern void test();
int main()
{
	int i = 0;
	while (i < 5)
	{
		test();
		i++;
	}
	return 0;
}*/
/*int main()
{
	extern gittt;              // static 用法 ②修饰全局变量  使其作用域
	printf("gittt=%d\n", gittt);   //让静态的全变只能在所在源文件内使用
	return 0;
}*/

/*extern int ADD(int, int);
int main()
{
	int a = 10;                     //(  modify function)
	int b = 20;       // static 用法 ③修饰函数 使其由外部链接属性->内部
	int sum = 0;
	//extern int ADD(int, int);
	sum = ADD(a, b);
	printf("sum=%d\n", sum);
	return 0;
}*/
//》》》》》》》》》》》》》#define  定义标识符常量 和 宏《《《《《《《《《《《
/*#define a 20
int main()
{
	printf("a=%d\n", a);    //#define  define标识符常量（constant）
	return 0;
}*/
/*int MAX(int x, int y)           >
{                                 >
	if (x > y)                    >
		return x;                 >
	else                          >
		return y;                 >
}
int main()                        >用函数（function）定义（define）
{
	int a = 10;
	int b = 20;
	int max = 0;                  >
	max = MAX(a, b);              >
	printf("max=%d\n", max);      >
	return 0;
}*/

/*#define MAX(x,y) (x>y?x:y)    // >>>>>#define 定义宏  --联动三目操作符
int main()
{
	int q = 40;
	int w = 30;
	int max = 0;
	max = MAX(q, w);
	printf("max=%d\n", max);
	return 0;
}*/
//#define MAX(x,y) (x<y?y:x)
//int main()
//{
//	int a = 9;
//	int b = 3;
//	int max = MAX(a, b);
//	printf("max=%d\n", max);
//	return 0;;
//}

/*#define MUL(x,y) (x*y)                  //宏的定义更简洁
int main()
{
	int a = 7;
	int b = 7;
	int mul = 0;
	mul = MUL(a, b);
	printf("mul=%d\n", mul);
	return 0;
}*/
/*#define ADD(x,y) (x+y)
int main()
{
	int a = 0;
	int b = 0;
	scanf("%d%d", &a, &b);
	int sum = 0;
	sum = ADD(a, b);
	printf("sum=%d\n", sum);
	return 0;
}*/
//>>>>>>>>>>>>>>>>>>>>>>>>>>>>2023-9-28
//             》》》》》》》  static --three usages      review/revise
/*void test()
{
	static int a = 0;
	a++;
	printf("a=%d\n", a);
}
int main()
{
	int i = 0;
	while (i < 7)
	{
		test();
		i++;
	}
	return 0;
}*/
/*int main()
{
	extern int sum;
	printf("sum=%d\n", sum);
	return 0;
}*/
/*extern ADD(int, int);
int main()
{
	int a = 7;
	int b = 3;
	int sum = 0;
	sum = ADD(a, b);
	printf("sum=%d\n", sum);
	return 0;
}*/
//                      》》》》》#define   two definitons
//#define sum 20
//int main()
//{
//	
//	printf("sum=%d\n", sum);
//	return 0;
//}
/*#define MAX(x,y) (x>y?x:y)
int main()
{
	int a = 0;
	int b = -2;
	int bigger = 0;
	bigger = MAX(a, b);
	printf("bigger=%d\n", bigger);
	return 0;
}*/
/*int MAX(int s, int m)
{
	s > m ? s : m;
}
int main()
{
	int q = 9;
	int w = 11;
	int max = 0;
	max = MAX(q, w);
	printf("max=%d\n", max);
	return 0;
}*/
//  内存    如何产生地址?????  一个内存空间大小为 1 byte  32位机器可访问4GB
// ________________________________
// |_______________________________| 1
// |_______________________________| 2         int a=4;
// |_______________________________| 3  √       apply 4 byte
// |_______________________________| 4   √
// |_______________________________| 5   √
// |_______________________________| 6
//   .............................
//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> pointer<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
//int main()
//{                            //如何存放？？？   存放在哪儿？？？
//	int a = 9;
//	printf("%p\n", &a);           //指针变量：用来存放地址的变量
//	int* p = &a;                    //指针类型为： int*
//	printf("%p\n", p);
//	return 0;
//}
/*int main()
{
	int q = 9;
	printf("%p\n", &q);
	int* p = &q;
	printf("%p\n", p);        // * ————解引用操作符
	*p = 12;                   // *p ————对p进行解析，找到p所指变量a 
	printf("解析后 q=%d\n", q);
	return 0;
}*/
/*int main()
{
	char qaq = 'q';
	char* p = &qaq;
	printf("%d\n", p);//address
	*p = 'u';
	printf("解析后 qaq=%c\n", qaq);
	return 0;
}*/
//int main()
//{
//	printf("%d\n", sizeof(int*));
//	printf("%d\n", sizeof(char*));//在32位机器上是 4 byte  （32根地址线）
//	printf("%d\n", sizeof(short*));//在64位机器上是 8 byte  （64根数据线）
//	printf("%d\n", sizeof(double*));
//	printf("%d\n", sizeof(float*));//全是8 byte
//	return 0;
//}
//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>2023-9-29-22:00
//int main()
//{
	/*int a = 7;
	printf("%p\n", &a);
	int* p = &a;
	printf("%p\n", p);
	*p = 3;
	printf("改后 a=%d\n", a);*/
	/*char at = 'f';
	printf("%p\n", &at);
	char* p = &at;
	printf("%p\n", p);
	*p = 'q';
	printf("改后 at=%c\n", at);*/
	/*char new = "abcd";
	printf("%p\n", &new);
	char* p = &new;
	printf("%p\n", p);
	*p = "abdd";
	printf("new=%s\n", new);*/             //QQQQQQQQQQQQQQQQQQQQqqqq

//	return 0;
//}
//int main()
//{
//	static int a = 9;
//	a = 10;
//	printf("a=%d\n", a);
//	return 0;                     //static 修饰的 variable可以改变
//}
/*int  test()
{
	int a = 2;
	int c = 0;
	static int b = 3;
	c += 1;
	b += 2;
	int add = a + b + c;                    //QQQQQQQQQQQQQQQQQQQqqqqqq 23
	return add;
}
int main()
{
	int i = 0;
	int sum = 0;
	int a = 2;
	for (i = 0; i < 5; i++)
	{
		sum = test();                    //这里得把test 的返回值赋给 sum
		printf("sum=%d\n", sum);
	}
	return 0;
}*/
//int main()
//{
//	int a = 3;                 // 地址为十六进制
//	printf("%p\n", &a);        //000000C037CFF744
//	return 0;
//}
//int main()
//{
//  double att = 3.14;
//  printf("%p\n", &att);
//  double *p= & att;
//  *p=5.62;
//  printf("%lf\n",att);
//  printf("%d\n",sizeof(p));      // X86--4byte   X64--8byte 
//	char arr[] = { 1,2,3 };
//	printf("%p\n", &arr);      //0000007F3791FA84  一个任意十六进制数
//	return 0;
//}

/*struct Book
{
	char name[30];
	int price;
};
int main()
{
	struct Book iss = { "初识C语言",55 };
	printf("name=%s\n", iss.name);
	printf("price=%d元\n", iss.price);
	iss.price = 45;
	printf("修改后的价格：%d元\n", iss.price);
	struct Book * p =  & iss;                 //struct Book*————指针类型
	printf("%p\n", *p);                       // p————指针变量
	printf("%p\n", iss);
	printf("name's address= %p\n", (* p).name);
	printf("price's address= %p\n", (* p).price);
	printf("%s\n", (*p).name);
	printf("%d\n", (*p).price);
	printf("%s\n", p->name);      //》》》》》》》简洁很多
	printf("%d\n", p->price);     //
	//printf("%s\n", iss.name);     >>>> error  error error error
	//printf("%d\n", iss.price);    >>>>

	return 0;
}*/

/*struct info
{
	char name[20];
	double tall;
	double weight;
	char career[20];               //char 里面必须存放东西
};
int main()
{
	struct info yang = { "Qinyayang",156,60,"student" };
	struct info* p = &yang;
	
	//*p->name = "c++";
	//yang.name= "c++";              //error   
	strcpy(yang.name, "c++");               //>>>>>>将c++拷贝到yang.name里去
	printf("new name: %s\n", yang.name);    //>>>>>>strcpy--<string.h>
	strcpy(yang.career, "scientist");
	printf("new tall : %s\n", yang.career);
	//printf("%s\n", *p->name);   //error  数组名的本质是地址
	printf("name=%s\n", p->name);
	printf("tall=%lf\n", p->tall);
	printf("weight=%lf\n", p->weight);
	printf("career=%s\n", p->career);

	printf("%p\n", p->name);
	printf("%p\n", p->tall);
	
	return 0;
}*/
//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>.2023-10-1
/*struct Mate
{
	char name[20];
	char sex[10];
	int score;

};
int main()
{
	struct Mate yang = { "Qinyayang","female",110 };
	struct Mate* p = &yang;
	//printf("odd name: %s\n", yang.name);
	printf("odd:%s\n", p->name);
	strcpy(yang.name, "Yaositu");
	printf("pre:%s\n", p->name);
	//printf("presant name: %s\n", yang.name);
	return 0;
}*/
//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>2023-10-2
//》》》》》》》》》》》》》》》分支语句与循环语句《《《《《《《《《《《《《《《
//int main()
//{
//	char input[20] = { 0 };
//	printf("你要好好学习吗？\n");
//	scanf("%s", &input);                  //QQQQQQQQQQQQQQQQQQQQq45
//	if(input == "yes")
//		printf("good job\n");
//	else
//		printf("loser\n");
//	return 0;
//}
//int main()
//{
//	int age = 0;
//	scanf("%d\n", age);
//	if (age < 15)
//		printf("不能玩跳楼机\n");        //QQQQQQQQQQQQQQQQQQQQQQQQQQQQq
//	else
//		printf("已成年，可以玩跳楼机\n");
//	return 0;
//}
/*int main()
{
	int age =0;
	scanf("%d", &age);
	if (age < 18)
		printf("为未成年\n");
	else if (age >= 18 && age < 28)
		printf("为青年\n");
	else if (age >= 28 && age < 50)
		printf("为壮年\n");
	else if (age >= 50 && age < 90)
		printf("为老年\n");
	else
		printf("为老不四\n");

	
	
	return 0;
}*/
/*int main()
{
	int tall = 156;
	if (tall < 150)
	{
		printf("身高不够\n");               //执行多个任务用代码块
		printf("不能玩跳楼机\n");
	}
	else
	{
		printf("身高够\n");
		printf("可以玩跳楼机\n");
	}
	return 0;
}*/
/*int main()
{
	int a = 0;
	int b = 2;
	if (a == 1)
	{
		if (b == 2)                //if 与它最近的未匹配的else匹配
			printf("hehe\n");
	}                               //可用{}将其分割开
	else
		printf("haha\n");
	return 0;
}*/
/*COMP(int x, int y)
{
	if (x > y)
		return x;
	else
		return y;
}
int main()
{
	int a = 3;
	int b = 9;
	int max = 0;
	max = COMP(a, b);
	printf("max=%d\n", max);
	return 0;
}*/
/*int main()
{                            //     const  variable
	int a = 5;                 //涉及常量和变量的比较——变量放后 常量放前
	if (5 == a)              //避免弄错 等号和赋值 = / ==
		printf("bingo!\n");
	else
		printf("error\n");
	return 0;
}*/
//》》》》》》》》》》》》》》Practicing《《《《《《《《《《《《《《《《
//1. How to judge if a count is odd
/*int main()
{
	int a = 0;
	scanf("%d", &a);
	printf("a=%d\n", a);
	if (a % 2 == 0)
	{
		printf("a 为偶数\n");
	}
	else
	{
		printf("a 为奇数\n");
	}
	return 0;
}*/
//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>2023-10-2
//2.   输出1~100的奇数
/*int main()
{
	int i = 0;
	for (i = 0; i <= 100; i++)                    // method    ONE
	{
		if (i % 2 == 1)
			printf("The odd: %d\n", i);
	}
	return 0;
}*/
/*int main()
{
	int i = 0;
	while (i <= 100)
	{
		if (i % 2 !=0)
			printf("the odd number is :%d\n", i);
		    i++;
	}
	return 0;
}*/
//》》》》》》》》》》》》switch--case语句多分支语句《《《《《《《《《《《
//》》》》》》》》》。。。。break  /  default。。。。。关键字》》》》》》》》
// int main()
//{
//	int day = 0;
//	scanf("%d",& day);
//	if (1 == day)
//		printf("today is Monday\n");
//	else if (2==day)
//		printf("today is Tuesday\n");
//	else if (3==day)
//		printf("today is Wednesday\n");       //用switch 语句简化
//	else if (4==day)
//		printf("today is Thursday\n");
//	else if (5==day)
//		printf("today is Friday\n");
//    else if (6==day)
//		printf("today is Saturday\n");
//    else if (7==day)
//		printf("today is Sunday\n");
//
//	return 0;
//}
/*int main()
{
	int day = 0;
	scanf("%d", &day);
	switch (day)
	{
	case 1:
		printf("星期1\n");
		break;
	case 2:                 //从case进去   没有出去的地方 出去要break
		printf("星期2\n");            
		break;
	case 3:
		printf("星期3\n");
		break;
	case 4:
		printf("星期4\n");
		break;
	case 5:
		printf("星期5\n");
		break;
	case 6:
		printf("星期6\n");
		break;
	case 7:
		printf("星期7\n");
		break;
	}
	return 0;
}*/
/*int main()
{
	int age = 0;
	scanf("%d", &age);
	switch (age)              //age 必须是整型
	{
	case 1+0:                   //case 后接整型常量表达式
		printf("child\n");
		break;
	case 2:
		printf("youth\n");
		break;
	case 3:
		printf("adult\n");
		break;
	case 4:
		printf("odd\n");
		break;
	}
	return 0;
}*/
//>>>>>>>>>>>>>>>>>>>>>>...Practice<<<<<<<<<<<<<<<,
// 输入1~5输出“工作日”    6~7输出“休息日”
/*int main()
{
	int day = 0;
	scanf("%d", &day);
	switch (day)
	{
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
		printf("今日为工作日\n");
		break;
	case 6:
	case 7:
		printf("今日为休息日\n");
		break;
	default:
		printf("输入错误\n");
		break;
	}
	return 0;
}*/
//写出数值
/*int main()
{
	int n = 1; int m = 2;
	switch (n)
	{
	case 1:m++;
	case 2:n++;
	case 3:
	{
		switch (n)
		{
		case 1:n++;
		case 2:m++; n++; break;
		}
	}
	case 4:m++; break;
	default: break;
	}
	printf("m=%d n=%d\n", m, n);
	return 0;
}*/