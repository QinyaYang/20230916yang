#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

/*int main()                                           // ��ʮ�����������ֵ
{
	//int arr[10] = { -3,-2,-1,0,1,2,3,4,5,6 };
	int arr[10] = { 1,2,3,4,5,-9,-3,-2,-1,0 };
	int max = arr[0];    //����arr[0]Ϊ���
	int i = 0;
	for (i = 0; i <= 10; i++)
	{
		if (arr[i] >= max)
			max = arr[i];
	}
	printf("zuidawei : %d\n", max);
	return 0;
}*/

//int main()                             //�ж�������
//{
//    int a = 0;
//    int b = 0;
//    int c = 0;
//    while (scanf("%d %d %d", &a, &b, &c) != EOF)
//    {
//        if (((a + b) > c) && ((a + c) > b) && ((b + c) > a))
//        {
//            if ((a == b) || (b == c) || (a == c))
//            {
//                if ((a == b) && (b == c) && (a == c))
//                {
//                    printf("Equilateral triangle!\n");
//                }
//                else
//
//                    printf("Isosceles triangle!\n");
//            }
//            else
//                printf("Ordinary triangle!\n");
//        }
//        else
//            printf("Not a triangle!\n");
//    }
//        return 0;
//    
//}
// 1*1=1                                        //  �žų˷���
// 1*2=2 2*2=4
// 1*3=3 2*3=6 3*3=9   ....
// 1*9=9 2*9=18 3*9=29 4*9=36 ... 9*9=81
//int main()
//{
//	int mul1 = 0;
//	int mul2 = 0;
//	int mul3 = 0;
//	int row = 0;
//	int col = 0;
//	for (row = 1; row < 10; row++)
//	{
//		for (col = 1; col < 10; col++)
//		{
//			mul1 = 1 * row;
//			mul2 = row * col;
//			if(row<col)
//				mul3 =
//		}
//	}
//	return 0;
//}
//int main()
//{
//	printf("%s", "aaa");
//	printf("%c", '\b');
//	return 0;
//}
//int main()
//{
//	/*char a[] = { 0 };
//	scanf("%c",&a);
//	printf("%c++++\n", a);*/
//	char arr[] = { 0 };
//	scanf("%c", &arr);
//	printf("%c", arr);
//	return 0;
//}
//int main()                   //  ���������������
//{
//	int a = 1;
//	int b = 2;
//	int emp = a;
//	a = b;
//	b = emp;
//	printf("%d %d", a, b);
//
//	return 0;
//}

/*int main()                  // ������������ ������С�����˳������
{                                          //һһ�ȴ�С �ٽ���
	int a = 0;
	int b = 0;
	int c = 0;                              //input : 1 2 3
	scanf("%d %d %d", &a, &b, &c);       // ԭʼ˳��  a b c
	if (a < b)
	{
		int emp = a;                     // b a c
		a = b;
		b = emp;
	}
	if (a < c)
	{                                    // b c a
		int emp = a;
		a = c;
		c = emp;
	}
	if (b < c)                          // c b a
	{
		int emp = b;
		b = c;
		c = emp;
	}
	
	//if (a < b)                            
	//{
	//	a = b;      // a = b = 2
	//	b = a;
	//}
	//if (a < c)
	//	a = c;    // a = c = 3        XXXXXXXXXXXXXXXXXXXX  error 
	//	c = a;                      
	//}
	//if (b < c)
	//{
	//	b = c;   // b = c = 3
	//	c = b;
	//}
	printf("%d %d %d", a, b, c);
	return 0;
}*/

//>>>>>>>>>>>>>>>>>>>>>>>>2023-11-17 test
//int main()
//{
//	int arr[][3] = { {0,,2},{},{3,4,5} };
//	return 0;
//}

//int main()
//{
//	char arr[] = "hello bit";
//	printf("%zd %zd", strlen(arr), sizeof(arr));
//	return 0;
//}

//int main()                                // ����10���� ����ƽ��ֵ
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	int add = 0;
//	double average = 0;
//	printf("<��ƽ��ֵ>������10������>");
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//		
//	}
//	for (i = 0; i < 10; i++)
//	{
//		add = add + arr[i];
//	}
//	average = add / 10.0;
//	printf("%lf\n", average);
//	return 0;
//}

//int main()
//{
//	char arr1[] = "abcdefg";
//  	char arr2[] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g' };
//	printf("%d %d\n", strlen(arr1), strlen(arr2));   // 7 58  ??????????
//	printf("%zd %zd\n", sizeof(arr1), sizeof(arr2)); // 8 7
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	scanf("%d", &i);
//	int arr[i][i] = { 0 };
//	return 0;
//}

#include <stdio.h>
 
//int main()                            // �� vs�ϲ����ñ䳤���飡��������
//{
//	int i = 0;
//	int j = i;
//	int num = 0;
//	while ((scanf("%d", &num)) != EOF)
//	{
//		i = j = num;                               // myself  error XXXXXXX
//		int arr[i][j];                 // ������ά��������
//		for (i = 0; i < num; i++)      // ��ά����ֻ���ڿռ��еĴ洢�� i��j��
//		{                              // ����������ĸ�ʽ��������
//			for (j = 0; j < num; j++)
//			{
//				if ((i + j) == (i - 1))
//				{
//					printf("*", arr[i][j]);
//				}
//				if (i == j)
//				{
//					printf("*", arr[i][j]);
//				}
//				else
//				{
//					printf(" ");
//				}
//			}
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int num = 0;
//	while ((scanf("%d", &num)) != EOF)
//	{
//		int i = 0;
//		int j = 0;
//		for (i = 0; i < num; i++)
//		{
//			for (j = 0; j < num; j++)
//			{
//				if ((i == j) || ((i + j) == (num - 1)))
//				{
//					printf("*");
//				}
//				else
//				{
//					printf(" ");
//				}
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}




//#include <stdio.h>                      // ���˵�˼·  ���ö�ά����
//int main()
//{
//	int n = 0;
//	while (scanf("%d", &n) != EOF)
//	{
//		for (int i = 0; i < n; i++)  //��ѭ��Ϊ��
//		{
//			for (int j = 0; j < n; j++) //��ѭ��Ϊ��
//			{
//				if (i == j || i + j == n - 1)
//					//��ؼ��ĵط�����б��Ϊ[i][i]����*�� ��б��Ϊ[i][n-1-j]����*��һ�д�ӡ1����2��*
//					printf("*");
//				else
//					printf(" ");
//			}
//			printf("\n"); //��ӡ��һ�У�����
//		}
//	}
//	return 0;
//}

//int main()              //QQQQQQQQQQQQQQQQQQQQq �ö�ά������ô��
//{
//	int num = 0;
//	int i = 0;
//	int j = 0;
//	while ((scanf("%d", &num)) != EOF)
//	{
//		for (i = 0; i < num; i++)
//		{
//			for (j = 0; j < (num + num - 1); j++)
//			{
//				if ((i == 0) || (i == (num - 1)))
//				{
//					if ((j % 2) != 0)
//					{
//						printf("*");
//					}
//					else
//					{
//						printf(" ");
//					}
//				}
//				else
//				{
//					if ((j == 1) || (j == (num + num - 2)))
//					{
//						printf("*");
//					}
//					else
//					{
//						printf(" ");
//					}
//				}
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int a[4] = { 1, 2, 3, 4 };            // �û��������������Ԫ��
//	int b[4] = { 5, 6, 7, 8 };
//	int c[4] = { 0 };
//	int i = 0;	
//	for (i = 0; i < 4; i++)
//	{
//		c[i] = a[i];
//		a[i] = b[i];
//		b[i] = c[i];
//	}
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d ", a[i]);
//	}
//	printf("\n");
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d ", b[i]);
//	}
//	return 0;
//}

#include <stdio.h>

//int main()
//{
//	int n = 0;                  //  ������  û�ö�ά����QQQQQQQQQQQQqq
//	int m = 0;
//	while (((scanf("%d", &n)) >= 1) && (scanf("%d", &n)) <= 10)
//	{
//		while (((scanf("%d", &m)) >= 1) && (scanf("%d", &m)) <= 10)
//		{
//			int a = n;
//			int b = m;
//			int arr[] = { 0 };
//			int num = 0;
//			for (n = 0; n < a; n++)
//			{
//				for (m = 0; m < b; m++)
//				{
//					scanf("%d", &arr[num]);
//					num++;
//				}
//			}
//			int aaa[] = { 0 };
//			for (m = 0; m < b; m++)
//			{
//				for (n = 0; n < a; n++)
//				{
//					int count = 0;
//					aaa[count] = arr[]        // ??????
//				}
//			}
//		}
//	}
//	return 0;
//}

int main()
{
	int i = 0;                               // �ö�ά������
	int j = 0;                       // �����⣬���쿴
	int arr[i][j];
	while (((scanf("%d", &i)) >= 1) && (scanf("%d", &i)) <= 10)
	{
		while (((scanf("%d", &j)) >= 1) && (scanf("%d", &j)) <= 10)
		{
			int a = i;
			int b = j;
			for (i = 0; i < a; i++)
			{
				for (j = 0; j < b; j++)
				{
					scanf("%d", &arr[i][j]);
				}
			}
			for (j = 0; j < b; j++)
			{
				for (i = 0; i < a; i++)
				{
					printf("%d ", arr[i][j]);
				}
				printf("\n");
			}
		}
	}
	return 0;
}