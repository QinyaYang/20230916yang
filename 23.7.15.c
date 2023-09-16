#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>

//int main()
//{
//	printf("hehe\n");
//	
//	printf("hehe\n");*/
//
//	return 0;
//}
//int main()
//{
//	char a = 'A';            char 用法
//	printf("%c",a);          %c  打印字符
//	return 0;
//}
//int main()
//{
//	int age = 18;
//	int aged = age + 1;
//	printf("%d", aged);       //%d 打印十进制数据
//	return 0;
//}
//int main()
//{
//   // long num = 100;
//   //short num = 100;
//	int num = 100;              //没有明显差别    有申请的内存空间不同
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
//	printf("%d\n", sizeof(long));          向内存申请的空间不同
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

//int num1 = 3;              全局变量
//int main()
//                                        当两者名字same，以局部为先
//{
//	int num1 = 2;            局部变量
//	printf("%d\n", num1);
//	return 0;
//}
//int q = 10;
//int main()
//{
//	printf("q=%d\n",q);            全局变量的用处，在代码块外
//	return 0;
//}
//int main()
//{
//	{
//		int q = 14;                局部变量的范围，仅限所在代码块
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
//	//                          最后是  int sum=0也可放这里    （c语言语法规定）
//	scanf("%d%d", &q, &w);     //如果不行，改为scanf_s   被认为是safe的
//	int sum = 0;
//	sum = q + w;
//
//	printf("%d\n", sum);
//	return 0;
//}
//int main()
//{
//	{
//		int num = 4;         局部变量作用域
//	}                        全局变量作用域非常广
//	return 0;
//}
//int main()
//{
//	extern int gogo;          extern用于申明引入外部
//	printf("%d\n", gogo);     全局变量很广，可从另外源文件引入
//	return 0;
//}
//2023.7.17
//2023.7.19从这开始
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
//	num = 8;                         const 具有常属性    此时num为const修饰的常变量
//	printf("%d", num);
//	return 0;
//}
//int main()
//{
//	const int n = 19;
//	int arr[n] = { 0 };           数组长度必须为常量，就算是有const修饰的常变量no
//	return 0;
//}

//int main()
//{
//#define max 10                     #define 定义的标识符常量
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
//	printf("%d\n", female);      0   枚举常量的值不可改变 
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
//	                                   //通过枚举类型创建的变量可以改变
//	/*red = 3;     */                  //枚举常量不能被修改
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
//	char arr2[] = { 'a','b','c','\0'};         // '\0'也可直接写0
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//
//	return 0;
//}
//int main()
//{
//	char arr1[] = { "abc" };
//	char arr2[] = { 'a','b','c' };           //没有字符串的结束标志，会随机出现值
//	printf("%d\n", strlen(arr1));
//	printf("%d\n", strlen(arr2));
//	return 0;
//}
//int main()
//{
//	printf("c.\test\32\test.c");                   //转义字符 、\\t
//	return 0;
//}
//int main()
//{
//	printf("(are you ok??)");                   //??+_  在旧编译器里为三字母词
//	return 0;                                    //会解析成]    了解
//}
//int main()
//{
//	printf("%c\n", '\'');                     让'不是一对''中的一个
//	return 0;
//}
//int main()
//{
//	/*printf("%d\n", strlen("c.\test\32\test.c"));   */    //  \32是两个八进制数字
//	printf("c.\test\32\test.c");
//	return 0;
//}                           2023-7-30 开始
//int main()
//{
//	/*printf("%d\n", strlen("c.\test\32\test.c"));*/
//	/*printf("%d\n", strlen("\x61"));    */               // \x某某为两个十二进制数字
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
//	printf("\"\n");                           打印字符双引号和单引号
//	return 0;
//}
//int main()
//{
//	int input = 0;
//	printf("加入比特\n");
//	printf("你要好好学习吗？(1/0)>: \n");
//		scanf("%d", &input);                    选择语句
//		if (input == 1)
//			printf("好offer\n");
//		else
//			printf("卖烤红薯");
//	return 0;
//}
//int main()
//{
//	int input = 0;
//	printf("加入比特");
//	printf("你要好好学习吗？(1/9) >: ");       //  8.2  review
//	scanf("%d", &input);
//	if (input == 1)
//		printf("好offer");
//	else
//		printf("卖红薯");
//	return 0;
//}
//int main()
//{
//	int choice = 0;
//	printf("让我们来看一看\n");
//	printf("你有自己的主见吗?(1/0)>: ");               选择语句
//	scanf("%d", & choice);
//	if (choice == 1)
//		printf("有美好未来");
//	else
//		printf("渣渣灰了");
//	return 0;
//}
//int main()
//{
//	printf("加入比特");
//	int line = 0;
//	while (line < 20000)
//	{                                        while 循环语句
//		printf("敲代码:%d\n", line);
//		line++;
//	}
//	printf("好offer");
//	return 0;
//}
int main()
{
	int money = 0;
	printf("呜呜呜多久才能找对象？");
	while (money < 50000)
	{
		printf("赚钱ing:%d\n", money);
		money++;
	}
	printf("我可以养npy啦！");
	return 0;
}
