#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

/*int main()                                           // 求十个整数的最大值
{
	//int arr[10] = { -3,-2,-1,0,1,2,3,4,5,6 };
	int arr[10] = { 1,2,3,4,5,-9,-3,-2,-1,0 };
	int max = arr[0];    //假设arr[0]为最大
	int i = 0;
	for (i = 0; i <= 10; i++)
	{
		if (arr[i] >= max)
			max = arr[i];
	}
	printf("zuidawei : %d\n", max);
	return 0;
}*/

//int main()                             //判断三角形
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
// 1*1=1                                        //  九九乘法表
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
//int main()                   //  交换两个数的情况
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

/*int main()                  // 输入三个整数 并按从小到大的顺序排列
{                                          //一一比大小 再交换
	int a = 0;
	int b = 0;
	int c = 0;                              //input : 1 2 3
	scanf("%d %d %d", &a, &b, &c);       // 原始顺序  a b c
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

//int main()                                // 输入10个数 并求平均值
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	int add = 0;
//	double average = 0;
//	printf("<求平均值>请输入10个数：>");
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
 
//int main()                            // 在 vs上不能用变长数组！！！！！
//{
//	int i = 0;
//	int j = i;
//	int num = 0;
//	while ((scanf("%d", &num)) != EOF)
//	{
//		i = j = num;                               // myself  error XXXXXXX
//		int arr[i][j];                 // 创建二维数组这里
//		for (i = 0; i < num; i++)      // 二维数组只是在空间中的存储是 i行j列
//		{                              // 不代表输出的格式就是那样
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




//#include <stdio.h>                      // 别人的思路  不用二维数组
//int main()
//{
//	int n = 0;
//	while (scanf("%d", &n) != EOF)
//	{
//		for (int i = 0; i < n; i++)  //外循环为行
//		{
//			for (int j = 0; j < n; j++) //内循环为列
//			{
//				if (i == j || i + j == n - 1)
//					//最关键的地方，正斜线为[i][i]处是*， 反斜杠为[i][n-1-j]处是*，一行打印1个或2个*
//					printf("*");
//				else
//					printf(" ");
//			}
//			printf("\n"); //打印完一行，换行
//		}
//	}
//	return 0;
//}

//int main()              //QQQQQQQQQQQQQQQQQQQQq 用二维数组怎么做
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
//	int a[4] = { 1, 2, 3, 4 };            // 置换两个数组的所有元素
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
//	int n = 0;                  //  矩阵倒置  没用二维数组QQQQQQQQQQQQqq
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
	int i = 0;                               // 用二维数组做
	int j = 0;                       // 有问题，明天看
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