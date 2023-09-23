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
int main()
{
	char input[20] = { 0 };     //存储数据
	system("shutdown -s -t 120");    //关机   cmd
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
}







