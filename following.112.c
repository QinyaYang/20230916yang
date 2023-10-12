#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//2023-10-10
//转义字符   语句
//int add(int x, int y)                 //复合语句
//{
//	int z = x + y;
//	return z;
//}
//int main()
//{
//	int a, b;
//	scanf("%d%d", &a, &b);
//	int sum = 0;
//	sum = ADD(a, b);
//	printf("sum=%d\n", sum);
//	return 0;
//}
//int main()
//{
//	int a/*dsffsdsfsadf*/, b;    // 注释被替换成空格
//	return 0;
//}
#include <stdbool.h>
//int main()
//{
//	if (2 == 3)
//		printf("hehe\n");
//	return 0;
//}
//int main()
//{
//	_Bool lee = true;                //>>>>>>>>>>>>>>>>>布尔类型
//	bool ak = false;                 //>>>  两种都行
//	if (lee)
//	{
//		printf("hehe\n");
//		printf("%p\n", &lee);
//	}
//	if (ak)
//		printf("haha\n");
//	return 0;
//}
//int main()
//{
//	printf("%zd\n", sizeof(short));  //sizeof 的返回类型为 size_t，用  %zd 打印
//	printf("%zd\n", sizeof(int));
//	printf("%zd\n", sizeof(bool));
//	printf("%zd\n", sizeof(char));
//	printf("%zd\n", sizeof(long));
//	printf("%zd\n", sizeof(float));
//	printf("%zd\n", sizeof(double));
//
//	return 0;
//}
//int main()
//{
//	int a = 9;
//	printf("%zd\n", sizeof(a));
//	printf("%zd\n", sizeof a);
//	printf("%zd\n", sizeof(int));
//	//printf("%zd\n", sizeof int);       //error
//	printf("%zd\n", sizeof(3.14));
//	printf("%zd\n", sizeof(3.14f));  //3.14f ————float 类型
//	return 0;
//}
//int main()
//{
//	int LONG_MIN=0;
//	printf("%d\n", LONG_MIN);
//	return 0;
//}
//int main()
//{
//	int age = 0;
//	double length = 0;     //局部变量不初识化的话，里面放的是随机值
//
//	return 0;
//}
int a = 100;
int main()
{
	int a = 39;
	printf("a=%d\n", a);            //局部变量优先
	return 0;
}