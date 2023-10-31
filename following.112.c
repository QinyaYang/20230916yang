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
//int a = 100;
//int main()
//{
//	int a = 39;
//	printf("a=%d\n", a);            //局部变量优先
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;                     //>>>>>>>>>>>>>>>>>>牛客网作业题   
//	printf("请输入三个整数值:\n");
//	scanf("%zd %zd %zd", &a, &b, &c);
//	if (a > b)
//	{ 
//		if (b > c)
//			printf("%zd %zd %zd", a, b, c);
//		else
//			printf("%zd %zd %zd", a, c, &b);    //XXXXXXXX  all error  在下面
//	}
//	else if(a<b)             //a<b
//	{                       
//		if (c < a)
//			printf("%zd %zd %zd", &b, &a, &c);
//		else     //  
//			printf("%zd %zd %zd", &b, &c, &a);
//	}
//	else if (c > a)
//	{
//		if (a > b)
//			printf("%zd %zd %zd", &c, &a, &b);;
//		if(a<b)
//			printf("%zd %zd %zd", &c, &b, &a);
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	for (i = 1; i > 0 && i < 101; i++)     //>>>>>牛客网作业题
//	{
//		if (i % 3 == 0)
//			printf("1~100三的倍数有：%d\n", i);
//	}
//	return 0;
//}
//int main()
//{
//	int M = 0;
//	scanf("%zd", &M);
//	if (M % 5 == 0)                 //牛客网作业题
//		printf("YES\n");
//	else
//		printf("NO\n");
//	return 0;
//}
//int main()
//{
//	char arr[20] = {0};
//	scanf("%s", arr);
//	printf("%s\n", arr);
//	return 0;
//}
//int main()
//{
//    int a = 0;
//    int b = 0;
//    int shang = 0;
//    int yu = 0;
//    scanf("%d %d", &a, &b);
//    shang = a / b;
//    yu = a % b;
//    printf("%d %d", shang, yu);
//    return 0;
//}
//int main()
//{
//    int a = 0;
//    int b = 0;                       //牛客网作业题----不严谨
//    scanf("%d %d", &a, &b);
//    if (a > b)
//        printf("%d>%d\n",a,b);
//    else if (a < b)
//        printf("%d<%d\n",a,b);
//    else if (a == b)
//        printf("%d=%d\n",a,b);
//    return 0;
//}

/*int main()
{
    long long  a = 0;
    long long  b = 0;
    while (scanf("%ld %ld", &a, &b) != EOF)         //严谨
    {
        if (a > b)
            printf("%ld>%ld\n", a, b);             //%ld   long long 8byte
        else if (a < b)
            printf("%ld<%ld\n", a, b);
        else if (a == b)
            printf("%ld=%ld\n", a, b);
    }
    return 0;
}*/
//int main()
//{
//    int a = 0;
//    while (scanf("%d", &a) != EOF)         // !=EOF <--->  ==1
//    {
//        while (a > 0)
//        {
//            printf("*");
//            a--;
//        }
//        printf("\n");
//    }
//    return 0;
//}
/*int main()
{
    int iq = 0;
    again:
    scanf("%d", &iq);            //实现多组输入可用 goto  和again 
    while (iq > 0)
    {
        if (iq >= 140)
            printf("Genius\n");
        else
            printf("\n");
        goto again;
    }
   
    return 0;
}*/
//int main()
//{
//    int iq = 1;
//    while (iq > 0)
//    {
//        scanf("%d", &iq);         //通常不这样写
//        if (iq >= 140)
//            printf("Genius\n");
//        else
//            printf("\n");
//    }
//    return 0;
//}
/*int main()
{
    int a = 0;
    int b = 0;
    int c = 0;
    while (scanf("%d %d %d", &a, &b, &c) != EOF)
    {
        if (a > b)
        {
            if (c > a)
                printf("%d %d %d", c, a, b);
            else
            {
                if (c > b)
                    printf("%d %d %d", a, c, b);
                else
                    printf("%d %d %d", a, b, c);
            }
        }
        else if (a < b)
        {
            if (c > b)
                printf("%d %d %d", c, b, a);
            else
            {
                if (a < c)
                    printf("%d %d %d", b, c, a);
                else
                    printf("%d %d %d", b, a, c);
            }
        }
        
    }

        return 0;
}*/
//int main()
//{
//    printf("     **\n");
//    printf("     **\n");
//    printf("************\n");
//    printf("    *  *\n");
//    printf("    *  *\n");
//    return 0;
//}
//int main()                         //3 的倍数相加
//{
//    int i = 0; 
//    int sum = 0;
//    for (i = 1; i <= 100; i++)
//    {
//        if (i % 3 == 0)               // 3 6 9
//
//            sum += i;               //QQQQQQQQQQQQQQQQQQQQQQQQQQQQqqqqqq
//    }
//    printf("%d\n", sum);
//    
//    return 0;
//}
//int main()
//{
//    char arr[20] = { "abc" };
//    char att[20] = { "abc" };           //==  ——比较的是两个对象的内存地址
//    if (arr == att)
//        printf("hehe\n");
//    return 0;
//}
//int main()
//{
//    char a = { 'a' };             // 比较数字实际上比较的是整型这个变量
//    char b = { 'a' };             //而字符串比较的是指针
//    if (a == b)
//        printf("hehe\n");
//     return 0;
//}
/*int main()
{
    int a = 0;
    int b = 0;
    int c = 0;
    while(scanf("%d %d %d", &a, &b, &c) != EOF)
    {                                                  // 判断三角形v 
        if (((a + b) > c) && ((a + c) > b) && ((b + c) > a))
        {
            if ((a == b) && (b == c))         //QQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQqqqqq
            {
                if ((a == b) && (a == c) && (b == c))
                printf("Isosceles triangle!\n");
                else 
                printf("Equilateral triangle!\n");
            }
            else
                printf("Ordinary  triangle!\n");
        }
        else
            printf("Not a triangle\n");
    }
    return 0;
}*/
//int main()
//{                                       // 10个整数中最大值
//    int arr[9] = { 0 };     
//    scanf("%d %d %d %d %d %d %d %d %d %d", &arr[0], &arr[1], &arr[2], &arr[3], &arr[4], &arr[5], & arr[6], arr[7], arr[8], arr[9]);
//    int biggest = 0;
//    biggest = MAX(arr);
//    printf("biggest= %d", biggest);
//    return 0;
//}
/*int main()
{                                      //  99乘法表
    int row = 0;
    int a = 0;
    int b = 0;
    int mul = 0;
    for (row = 1; row < 10; row++)
    {
        for (a = 1; a < 10; a++)
        {
            for (b = 1; b < 10&& b>=a; b++)
            {
                mul = a * b;
                printf("%d = %d * %d\n", mul, a, b);
            }
        }
    }
    return 0;
}*/
//int main()                     // 1~100 的整数中出现了多少个数字9
//{
//    int i = 0;
//    for (i = 1; i <= 100; i++)
//    {
//
//    }
//    return 0;
//}
//int main()                         //打印1000~2000年的闰年
//{                                  //         1.n/400==0
//    int year = 0;                  //         2.n/4==0 且 n/100!=0
//     for (year = 1000; year <= 2000; year++)
//    {
//         if (((year % 400) == 0) || (((year % 4) == 0) && ((year % 100) != 0)))
//         
//             printf("闰年为: %d", year);
//         
//    }
//    return 0;
//}
//#include<powerbase.h>
//int main()
//{
//    int i = 0;
//    int u = 0;
//    int sum = 0;
//    int a = 0;
//    for (i = 1; i <= 100; i++)
//    {
//        for (u = 1; u <= 100; u++)
//        {
//            a = pow((-1),(i++));
//            // sum += a*(i / u);
//        }
//    }
//    sum += a * (i / u);
//    printf("sum=%d\n", sum);
//    return 0;
//}
//int main()                          // 求1~100 的所有整数出现了多少数字 9
//{
//    int a = 0;
//    int num = 0;
//    for (a = 1; a <= 100; a++)  // 09 19 29 ...89 90 91 92 93...98 99
//    {
//        if (a % 10 == 9)        // 09 19 29 39...79 89 99
//        {
//            if (a / 10 == 9)  //99
//            {
//                num++;
//                num++;
//            }
//            else         //09 19 29 ...89                        
//            {
//                num++;
//            }
//        }
//        else
//        {
//            if (a / 10 == 9)  //90 91 92 93..98
//            {
//                num++;
//            }
//        }
//    }
//    printf("num=%d\n", num);
//    return 0;
// }
//#include<math.h>
//int main()                   // 1/1 - 1/2 + 1/3 - 1/4 +...+1/99 - 1/100
//{
//    float i = 0;
//    float sum = 0;
//    float minus = 0;
//    for (i = 1 ; i <= 50 ; i++ )
//    { 
//        minus = pow((-1), (i + 1));
//        sum = (float) (sum + (minus * (1 / i)));  
//    }
//    printf("sum=%lf\n", sum);
//    return 0; 
//}
//int main()
//{
//    float i = 0; 
//    float sum = 0;
//    for (i = 1; i <= 100; i + 2)
//    {
//        sum = (float)(sum + (1 / i) - (1 / (i + 1)));
//    }
//    printf("sum = %d\n", sum);
//  //  printf("sum = %d\n", sum);
//    return 0;
//}
//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> do-while   先执行后判断  至少执行一次
//int main()
//{
//    int i = 0;                          // do-while    print 1~10
//    i = 1;
//    printf("print 1~10\n");
//    do
//    {
//        printf("%d ", i);
//        i++;
//    } while (i <= 10);
//    return 0;
//}
//int main()
//{
//    int i = 0;
//    for (i = 1; i <= 10; i++)
//    {
//        printf("%d ", i);
//    }
//    return 0;
//}
//int main()
//{
//    int i = 1;
//    while (i <= 10)
//    {
//        printf("%d ", i);
//        i++;
//    }
//    return 0;
//}
//int main()
//{
//    int a = 0;
//    int num = 0;
//    scanf("%d", &a);  //1234
//    while (a > 0)
//    {
//        num++;
//        a = a / 10;
//    }
//    printf("%d",num);
//    return 0;
//}
//int main()                        
//{
//    int a = 0;                // >>>>>>>>>>>>> do-while 求input 正整数的位数
//    int num = 0;
//    if ((scanf("%d", &a)) != EOF)
//    {
//        for (num = 1; num < 32; num++)
//        {
//            a = a / 10;
//            if (a == 0)
//            {
//                break;
//            }
//        }
//        printf("%d", num);
//    }
//    return 0;
//}
//int main()
//{
//    int num = 0;
//    int a = 0;
//    if ((scanf("%d", &a)) != EOF)
//    {
//        do
//        {
//            num++;
//            a = a / 10;
//        } while (a > 0);
//        printf("%d\n", num);
//    }
//    return 0;
//}
//int main()
//{
//    int i = 0;
//    while (i <= 10)
//    {
//        i++;
//        if (i == 5)
//            continue;
//        printf("%d ", i);
//    }
//    return 0;
//}
//int main()
//{
//    int i = 0;
//    for (i = 1; i <= 10; i++)
//    {
//        if (i == 5)
//            continue;        //与break互换
//        printf("%d ", i);
//    }
//    return 0;
//}
//int main()
//{
//    int i = 0;
//    for (i = 1; i <= 10; )      //>>>>>
//    {                           //>>>>>
//        if (i == 5)             //>>>>>  死循环
//            continue;           //>>>>>
//        printf("%d ", i);
//        i++;
//    }
//    return 0;
//}
//int main()
//{
//    int i = 1;
//    for (; i <= 10; i++)
//    {
//        if (i == 5)
//            continue;
//        printf("%d ", i);
//    }
//    return 0;
//}
//int main()
//{
//    int i = 1;
//    for (; ; i++)             //  for 循环三部分均能省略
//    {
//        if (i == 99)
//            break;
//        printf("%d ", i);
//    }
//    return 0;
//}
//int main()
//{
//    int i = 1;
//    do                                        //>>>>>>
//    {                                         //>>>>>>  死循环
//        if (i == 5)                           //>>>>>>
//            continue;    //break;             //>>>>>>
//        printf("%d ", i);
//        i++;
//    } while (i <= 10);
//    return 0;
//}
//int main()                     // print 100~200之间的合数
//{
//    int i = 0;
//    int j = 0;
//    
//    for (i = 100; i <= 200; i++)
//    {
//        for (j = 2; j < i; j++)
//        {
//            if ((i % j) == 0)
//            {
//                printf("%d ", i);           // print 合数 ①
//                break;
//            }
//        }
//    }
//    return 0;
//}
//int main()                     // print 100~200之间的质数（素数）
//{
//    int i = 0;
//    int count = 0;
//    for (i = 100; i <= 200; i++)
//    {
//        int flag = 1;      //假设 i 是素数
//        int j = 0;
//        for (j = 2; j < i; j++)
//        {
//            if ((i % j) == 0)
//            {
//                flag = 0;  //i 不是素数                                // print 质数 ②
//                break;
//            }
//        }  
//        if (flag == 1)      // i 依然为素数时
//        {
//            printf("%d ", i);
//            count++;
//        }
//    }
//    printf("count: %d", count);
//    return 0;
//}
//int main()
//{
//    int a = 0, b = 0;
//    for (a = 1, b = 1; a <= 100; a++)
//    {
//        if (b >= 20) break;
//        if (b % 3 == 1)
//        {
//            b = b + 3;
//            continue;
//        }
//        b = b - 5;
//    }
//    printf("%d\n", a);
//    return 0;
//}
//计算100~200的素数           //>>>>>>>>>>>review /revise
#include<math.h>
//int main()
//{
//    int i = 0;
//    int j = 0;          
//    int count = 0;                   // 存在 i % j == 0      i / (2~i-1)能整除
//    for (i = 101; i <= 200; i+=2)  //优化①——奇数才可能是素数
//    {
//        int test = 1;                  //每次产生一个i都设 i 为素数
//        for (j = 2; j < sqrt(i); j++)
//        {
//            if ((i % j) == 0)
//            {
//                test = 0;                  // i 不为素数的情况
//                break;
//            }
//        }
//        if (test == 1)
//        {
//            printf("%d ", i);
//            count++;
//        }
//    }
//    printf("count: %d", count);
//    return 0;
//}
//int main()
//{
//    printf("haha\n");
//    goto test;                              //  goto 语句——跳转到同一函数的标号处
//    printf("hehehehe\n");
//test:
//    printf("pig you are\n");
//    return 0;
//}
//int main()
//{
//    int i = 0;
//    int j = 0;
//    int count = 0;
//    for (i = 0; i < 5; i++)
//    {
//        for (j = 0; j < 5; j++)
//        {
//            printf("hehe! ");
//            count++;
//        }
//    }
//    printf("count = %d\n", count);
//    return 0;
//}
//int main()
//{
//    int i = 0;
//    int j = 0;
//    int count = 0;
//    for ( ; i < 5; i++)
//    {
//        for ( ; j < 5; j++)           // j == 5后就一直是5了，因为for语句的初始化部分是空
//        {
//            printf("hehe! ");
//            count++;
//        }
//    }
//    printf("count = %d\n", count);
//    return 0;
//}
//》》》》》》》》》》》》》》》》》》》》猜数字游戏
//  1. print a menu
//  2. chose a mode
// 
// 
//int main()
//{
//    int input = 0;
//    
//        while((scanf("%d", &input)) != EOF)          // 也可实现多次输入 ，但不好
//    {
//        printf("****************************\n");
//        printf("********** 1. PLAY *********\n");
//        printf("********** 0. EXIT *********\n");
//        printf("****************************\n");
//
//        printf("Please chose your mode: >");
//
//        switch (input)
//        {
//        case 1:
//            printf("Play\n");
//            break;
//        case 0:
//            printf("Exit\n");
//            break;
//        default:
//            break;
//        }
//    }
//    return 0;
//}
 #include<math.h>
#include<time.h>
#include<stdlib.h>
/*void menu()
{
    printf("****************************\n");
    printf("********** 1. PLAY *********\n");
    printf("********** 0. EXIT *********\n");
    printf("****************************\n");
}
//   分装— 猜数字游戏的实现
void game()
{
    //srand((unsigned int)time(NULL));——只能有一次

    int ret = rand() % 100 + 1;//  1. 生成随机数 1~100
    printf("%d\n", ret);
    int guess = 0;             //  2. 猜数字
    int count = 5;  //共有五次玩的机会
    while (count)                  //while ((scanf("%d", &guess)) != EOF)  //不好设置值
    {
        printf("你还有%d次机会\n", count);
        printf("请猜一个数字:>");
        scanf("%d", &guess);
        if (guess < ret)
        {
            printf("抱歉，你猜小了\n");
            //count--;
            //continue;
        }
        else if (guess > ret)
        {
            printf("抱歉，你猜大了\n");
            //count--;
            //continue;
        }
        else if (guess == ret)
        {
            printf("恭喜你，猜对了！！！\n");
            //count--;
            break;
        }
        count--;
    }
    if (count == 0)
    {
        printf("次数用完，游戏结束\n");
        printf("正确的数字是：%d\n", ret);
    }
}
int main()
{
    int input = 0;
    
    srand((unsigned int)time(NULL));   //种子每次只设置一次—— main function
    do
    { 
         menu();
    printf("Please chose your mode: >");
    scanf("%d", &input);
    {
        //srand((unsigned int)time(NULL));             //不能放在这儿，只用一次放main 里
        switch (input)
        {
        case 1:
            printf("猜数字游戏\n");
            game();
            break;
        case 0:
            printf("退出游戏\n");
            break;
        default:
            printf("选择错误\n");
            break;
        }
    }
    } while (input);     // 非0 再进入，0 退出
    return 0;
}*/

#include<stdlib.h>
#include<math.h>
#include<time.h>
// int main()
//{                        //>>>>>>>>>>>>>>>>>>>>随机值的生成 -- srand & time
//    /*RAND_MAX;
//	printf("max= %d\n", RAND_MAX);   
//	
//    srand((unsigned int)time(NULL));*/     // srand function & time function
//    srand(1);
//    int o = rand();      //生成随机数( 0 ~ RAND_MAX(32767))
//	
//    o = rand();             
//    printf("%d\n", o);     
//    o = rand();             
//    printf("%d\n", o);         // rand 生成的是伪随机数,是以"种子"为基准值算法生成
//    o = rand();            
//    printf("%d\n", o);
//    o = rand();             
//    printf("%d\n", o);
//    o = rand();
//    printf("%d\n", o);
//	return 0;
//}
//>>>>>>>>>>>>>>>>>>>>>.2022.10.30
//int main()                      // 给定两个数，求两者的最大公约数   4 6 —> 12
//{
//    int a = 0;
//    int b = 0;
//    printf("请输入两个值，以求最大公约数:\n");
//    scanf("%d %d", &a, &b);
//
//   
//    return 0;
//}
//int main()
//{
//    int score[60] = { 0 };                // 没有就默认 0 补齐
//    char arr[5] = {'a','b','c','d'};     // 其余的默认用 0 补齐
//    double eee[5] = { 3.14, 2.5 };
//    int table[10] = { 0,1,2,3,4,5,6,7,8,9 };
//    /*printf("%d\n", score[34]);
//    printf("%c\n", arr[0]);
//    printf("%lf\n", eee[0]);*/
//    int n = 0;
//    for (n = 4; n >= 4 && n <= 7; n++)
//    {
//        printf("%d\n", table[n]);
//
//    }
//    return 0;
//}
//int main()                               // 向创建的数组[] 输入数据 
//{
//    int arr[10] = { 0 };
//    int n = 0;
//    for (n = 0; n <= 9; n++)
//    {
//        scanf("%d", &arr[n]);
//    }
//    //printf("%d\n", arr[3]);   //输出单个数组元素  
//    for (n = 0; n <= 9; n++)
//    {
//        printf("%d ", arr[n]);        //多个
//    }
//    return 0;
//}
//int main()
//{
//    int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
//    int n = 0;
//    //printf("%p", &arr[0]);                 // 取单个的地址
//    for (n = 0; n <= 9; n++)
//    {
//        printf("&arr[%d] = %p\n", n, &arr[n]);      // &--取地址
//    }                                               //%p--打印地址
//    return 0;
//}
//int main()
//{
//   int arr[] = { 1,2,3,6,2,7,23,52,14,72,16,27,86,36,84,26};
//   int sz = sizeof(arr) / sizeof(arr[0]);
//   int n = 0;
//
//    printf("all space: %zd\n", sizeof(arr));
//    printf("each space: %zd\n", sizeof(arr[0]));
//    printf("nummber: %d\n", sz);
//    for (n = 0; n < sz; n++)
//    {
//        printf("&arr[%d]: %p\n", n, &arr[n]);
//    }
//    for (n = 0; n < sz; n++)
//    {
//        printf("%d ", arr[n]);             // ??????????????  最后一个数有问题
//    }
//    return 0;
//}
//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>2023-10-31   Halloween
//int main()
//{
//    //int arr[3][5] = { 0 };
//    int arr[4][6] = { 1,2,3,4,5,6,7,8,9,0 };         // two dimensions array
//    int i = 0;                                            
//    int j = 0;
//    for (i = 0; i < 4; i++)
//    {
//        for (j = 0; j < 6; j++)
//        {
//            printf("%d ", arr[i][j]);
//        }
//    }
//    return 0;
//}
//int main()
//{
//    int arr[2][3] = { 1, 2, 3, 4, 5, 6, 7, 8}; //  error -- array不能超过初始设定项
//    return 0; 
//}
//int main()
//{
//    int arr[4][6] = { 1,2,3,4,5,6,7,8,9,0 };         
//    int eee[4][4] = { {1,2},{3,4,5},{6} };       // 二维array 按照行initialization
//    printf("%d\n", arr[2][5]);
//    printf("%d\n", eee[0][1]);
//    return 0;
//}
//int main()
//{
//    int club[3][5] = { 0 };
//    scanf("%d", &club[2][2]);
//    return 0;
//}
int main()
{
    int arr[3][5] = { 0 };            // 给二维array 输入值并打印出
    int i = 0;
    int j = 0;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 5; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 5; j++)
        {
            printf("%d ", arr[i][j] );
            printf("&arr[%d][%d] : %p\n", i, j, &arr[i][j]);
        }
    }
    return 0;
}