#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//2023-10-10
//ת���ַ�   ���
//int add(int x, int y)                 //�������
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
//	int a/*dsffsdsfsadf*/, b;    // ע�ͱ��滻�ɿո�
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
//	_Bool lee = true;                //>>>>>>>>>>>>>>>>>��������
//	bool ak = false;                 //>>>  ���ֶ���
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
//	printf("%zd\n", sizeof(short));  //sizeof �ķ�������Ϊ size_t����  %zd ��ӡ
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
//	printf("%zd\n", sizeof(3.14f));  //3.14f ��������float ����
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
//	double length = 0;     //�ֲ���������ʶ���Ļ�������ŵ������ֵ
//
//	return 0;
//}
//int a = 100;
//int main()
//{
//	int a = 39;
//	printf("a=%d\n", a);            //�ֲ���������
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;                     //>>>>>>>>>>>>>>>>>>ţ������ҵ��   
//	printf("��������������ֵ:\n");
//	scanf("%zd %zd %zd", &a, &b, &c);
//	if (a > b)
//	{ 
//		if (b > c)
//			printf("%zd %zd %zd", a, b, c);
//		else
//			printf("%zd %zd %zd", a, c, &b);    //XXXXXXXX  all error  ������
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
//	for (i = 1; i > 0 && i < 101; i++)     //>>>>>ţ������ҵ��
//	{
//		if (i % 3 == 0)
//			printf("1~100���ı����У�%d\n", i);
//	}
//	return 0;
//}
//int main()
//{
//	int M = 0;
//	scanf("%zd", &M);
//	if (M % 5 == 0)                 //ţ������ҵ��
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
//    int b = 0;                       //ţ������ҵ��----���Ͻ�
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
    while (scanf("%ld %ld", &a, &b) != EOF)         //�Ͻ�
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
    scanf("%d", &iq);            //ʵ�ֶ���������� goto  ��again 
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
//        scanf("%d", &iq);         //ͨ��������д
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
//int main()                         //3 �ı������
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
//    char att[20] = { "abc" };           //==  �����Ƚϵ�������������ڴ��ַ
//    if (arr == att)
//        printf("hehe\n");
//    return 0;
//}
//int main()
//{
//    char a = { 'a' };             // �Ƚ�����ʵ���ϱȽϵ��������������
//    char b = { 'a' };             //���ַ����Ƚϵ���ָ��
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
    {                                                  // �ж�������v 
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
//{                                       // 10�����������ֵ
//    int arr[9] = { 0 };     
//    scanf("%d %d %d %d %d %d %d %d %d %d", &arr[0], &arr[1], &arr[2], &arr[3], &arr[4], &arr[5], & arr[6], arr[7], arr[8], arr[9]);
//    int biggest = 0;
//    biggest = MAX(arr);
//    printf("biggest= %d", biggest);
//    return 0;
//}
/*int main()
{                                      //  99�˷���
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
//int main()                     // 1~100 �������г����˶��ٸ�����9
//{
//    int i = 0;
//    for (i = 1; i <= 100; i++)
//    {
//
//    }
//    return 0;
//}
//int main()                         //��ӡ1000~2000�������
//{                                  //         1.n/400==0
//    int year = 0;                  //         2.n/4==0 �� n/100!=0
//     for (year = 1000; year <= 2000; year++)
//    {
//         if (((year % 400) == 0) || (((year % 4) == 0) && ((year % 100) != 0)))
//         
//             printf("����Ϊ: %d", year);
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
//int main()                          // ��1~100 ���������������˶������� 9
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
//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> do-while   ��ִ�к��ж�  ����ִ��һ��
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
//    int a = 0;                // >>>>>>>>>>>>> do-while ��input ��������λ��
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
//            continue;        //��break����
//        printf("%d ", i);
//    }
//    return 0;
//}
//int main()
//{
//    int i = 0;
//    for (i = 1; i <= 10; )      //>>>>>
//    {                           //>>>>>
//        if (i == 5)             //>>>>>  ��ѭ��
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
//    for (; ; i++)             //  for ѭ�������־���ʡ��
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
//    {                                         //>>>>>>  ��ѭ��
//        if (i == 5)                           //>>>>>>
//            continue;    //break;             //>>>>>>
//        printf("%d ", i);
//        i++;
//    } while (i <= 10);
//    return 0;
//}
//int main()                     // print 100~200֮��ĺ���
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
//                printf("%d ", i);           // print ���� ��
//                break;
//            }
//        }
//    }
//    return 0;
//}
//int main()                     // print 100~200֮���������������
//{
//    int i = 0;
//    int count = 0;
//    for (i = 100; i <= 200; i++)
//    {
//        int flag = 1;      //���� i ������
//        int j = 0;
//        for (j = 2; j < i; j++)
//        {
//            if ((i % j) == 0)
//            {
//                flag = 0;  //i ��������                                // print ���� ��
//                break;
//            }
//        }  
//        if (flag == 1)      // i ��ȻΪ����ʱ
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
//����100~200������           //>>>>>>>>>>>review /revise
#include<math.h>
//int main()
//{
//    int i = 0;
//    int j = 0;          
//    int count = 0;                   // ���� i % j == 0      i / (2~i-1)������
//    for (i = 101; i <= 200; i+=2)  //�Ż��١��������ſ���������
//    {
//        int test = 1;                  //ÿ�β���һ��i���� i Ϊ����
//        for (j = 2; j < sqrt(i); j++)
//        {
//            if ((i % j) == 0)
//            {
//                test = 0;                  // i ��Ϊ���������
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
//    goto test;                              //  goto ��䡪����ת��ͬһ�����ı�Ŵ�
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
//        for ( ; j < 5; j++)           // j == 5���һֱ��5�ˣ���Ϊfor���ĳ�ʼ�������ǿ�
//        {
//            printf("hehe! ");
//            count++;
//        }
//    }
//    printf("count = %d\n", count);
//    return 0;
//}
//������������������������������������������������Ϸ
//  1. print a menu
//  2. chose a mode
// 
// 
//int main()
//{
//    int input = 0;
//    
//        while((scanf("%d", &input)) != EOF)          // Ҳ��ʵ�ֶ������ ��������
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
//   ��װ�� ��������Ϸ��ʵ��
void game()
{
    //srand((unsigned int)time(NULL));����ֻ����һ��

    int ret = rand() % 100 + 1;//  1. ��������� 1~100
    printf("%d\n", ret);
    int guess = 0;             //  2. ������
    int count = 5;  //���������Ļ���
    while (count)                  //while ((scanf("%d", &guess)) != EOF)  //��������ֵ
    {
        printf("�㻹��%d�λ���\n", count);
        printf("���һ������:>");
        scanf("%d", &guess);
        if (guess < ret)
        {
            printf("��Ǹ�����С��\n");
            //count--;
            //continue;
        }
        else if (guess > ret)
        {
            printf("��Ǹ����´���\n");
            //count--;
            //continue;
        }
        else if (guess == ret)
        {
            printf("��ϲ�㣬�¶��ˣ�����\n");
            //count--;
            break;
        }
        count--;
    }
    if (count == 0)
    {
        printf("�������꣬��Ϸ����\n");
        printf("��ȷ�������ǣ�%d\n", ret);
    }
}
int main()
{
    int input = 0;
    
    srand((unsigned int)time(NULL));   //����ÿ��ֻ����һ�Ρ��� main function
    do
    { 
         menu();
    printf("Please chose your mode: >");
    scanf("%d", &input);
    {
        //srand((unsigned int)time(NULL));             //���ܷ��������ֻ��һ�η�main ��
        switch (input)
        {
        case 1:
            printf("��������Ϸ\n");
            game();
            break;
        case 0:
            printf("�˳���Ϸ\n");
            break;
        default:
            printf("ѡ�����\n");
            break;
        }
    }
    } while (input);     // ��0 �ٽ��룬0 �˳�
    return 0;
}*/

#include<stdlib.h>
#include<math.h>
#include<time.h>
// int main()
//{                        //>>>>>>>>>>>>>>>>>>>>���ֵ������ -- srand & time
//    /*RAND_MAX;
//	printf("max= %d\n", RAND_MAX);   
//	
//    srand((unsigned int)time(NULL));*/     // srand function & time function
//    srand(1);
//    int o = rand();      //���������( 0 ~ RAND_MAX(32767))
//	
//    o = rand();             
//    printf("%d\n", o);     
//    o = rand();             
//    printf("%d\n", o);         // rand ���ɵ���α�����,����"����"Ϊ��׼ֵ�㷨����
//    o = rand();            
//    printf("%d\n", o);
//    o = rand();             
//    printf("%d\n", o);
//    o = rand();
//    printf("%d\n", o);
//	return 0;
//}
//>>>>>>>>>>>>>>>>>>>>>.2022.10.30
//int main()                      // �����������������ߵ����Լ��   4 6 ��> 12
//{
//    int a = 0;
//    int b = 0;
//    printf("����������ֵ���������Լ��:\n");
//    scanf("%d %d", &a, &b);
//
//   
//    return 0;
//}
//int main()
//{
//    int score[60] = { 0 };                // û�о�Ĭ�� 0 ����
//    char arr[5] = {'a','b','c','d'};     // �����Ĭ���� 0 ����
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
//int main()                               // �򴴽�������[] �������� 
//{
//    int arr[10] = { 0 };
//    int n = 0;
//    for (n = 0; n <= 9; n++)
//    {
//        scanf("%d", &arr[n]);
//    }
//    //printf("%d\n", arr[3]);   //�����������Ԫ��  
//    for (n = 0; n <= 9; n++)
//    {
//        printf("%d ", arr[n]);        //���
//    }
//    return 0;
//}
//int main()
//{
//    int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
//    int n = 0;
//    //printf("%p", &arr[0]);                 // ȡ�����ĵ�ַ
//    for (n = 0; n <= 9; n++)
//    {
//        printf("&arr[%d] = %p\n", n, &arr[n]);      // &--ȡ��ַ
//    }                                               //%p--��ӡ��ַ
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
//        printf("%d ", arr[n]);             // ??????????????  ���һ����������
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
//    int arr[2][3] = { 1, 2, 3, 4, 5, 6, 7, 8}; //  error -- array���ܳ�����ʼ�趨��
//    return 0; 
//}
//int main()
//{
//    int arr[4][6] = { 1,2,3,4,5,6,7,8,9,0 };         
//    int eee[4][4] = { {1,2},{3,4,5},{6} };       // ��άarray ������initialization
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
    int arr[3][5] = { 0 };            // ����άarray ����ֵ����ӡ��
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