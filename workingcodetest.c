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
// 1*1=1
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
int main()
{
	/*char a[] = { 0 };
	scanf("%c",&a);
	printf("%c++++\n", a);*/
	char arr[] = { 0 };
	scanf("%c", &arr);
	printf("%c", arr);
	return 0;
}