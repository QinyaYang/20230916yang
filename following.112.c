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
#include<math.h>
//int main()                   // 1/1 - 1/2 + 1/3 - 1/4 +...+1/99 - 1/100
//{
//    float i = 0;
//    float sum = 0;
//    float minus = 0;
//    for (i = 1 ; i <= 100 ; i++)
//    { 
//        
//        minus = pow((-1), (i + 1));
//        sum = (float)(sum + (minus*( 1 / (i+1) )));
//
//    }
//        printf("sum=%lf\n", sum);
//    return 0; 
//}
int main()
{
    float i = 0; 
    float sum = 0;
    for (i = 1; i <= 100; i + 2)
    {
        sum = (float)(sum + (1 / i) - (1 / (i + 1)));
        printf("sum = %d\n", sum);
    }
  //  printf("sum = %d\n", sum);
    return 0;
}