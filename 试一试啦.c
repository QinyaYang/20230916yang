#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h> 
#include<string.h>
//���ÿ⺯��   standard input output

//2023.9.16
//int main()                        //int��ʾmain�������÷���һ������ֵ
//{                                //�������
//	printf("hello,world!");     //main�������������ڣ�only one)
//	printf("hehe\n");
//	return 0;
//}
//int main()
//{
//	char a = 'A';                   //charΪ�ַ���������--���ڴ�����һ��ռ�
//	printf("%c\n",a);               //%c ������ӡ�ַ�����
//	/*int age = 18;                     //int����  short  long  long long float double
//	printf("%d\n", age);  */            //%d���� ��ӡ����
//	double money = 12.14;                //doubleΪ˫���ȸ�����   floatΪ�����ȸ�����
//	printf("%lf\n",money);               //%f ������ӡ������
//	                                     //%p   %s�ַ���
//	return 0;                 //
//                               +++++++����ռ䲻ͬ�������ڴ����ģ���������ռ�          
//}
//int main()
//{
//	printf("%d\n", sizeof(int));          //4  �ֽ�byte   ����bit   1byte=8bit
//	printf("%d\n", sizeof(short));        //2          һ��bit��һ����������
//	printf("%d\n", sizeof(char));         //1
//	printf("%d\n", sizeof(long));         //4 or 8
//	printf("%d\n", sizeof(long long));    //8
//	printf("%d\n", sizeof(float));        //4
//	printf("%d\n", sizeof(double));       //8
//	return 0;
//}
//int main()
//{
//	//short a = 999999999999999;    //ERROR----int short��ռ2�ֽ�16bit-2��16�η���������С��ƥ�� 
//	//printf("%d\n", a);
//	double weigh = 130.06;
//	printf("%lf\n", weigh);
//	return 0;
//}
//2023-9-17
//int age2= 31;                            //ȫ�ֱ���  ������{}֮��
//int main()
//{
//	int age1 = 18;                      //�ֲ�����   ������{}��
//	printf("%d\n", age1);               //ȫ�ֱ����;ֲ��������־�����ͬ����ͬʱ�ֱ�����
//	return 0;                           //���ɹ��棬������
//}
//int age = 18;                         //ȫ�ֱ������Ķ����ɵ���
//int main()
//{
//	printf("%d\n", age);
//	return 0;
//}
//int main()
//{
//	{
//		int width = 18;                �ֲ������ľ�����
//	}
//	printf("%d\n", width);                      
//	return 0;
//}
//float width = 3.6;                   ȫ�ֱ����ġ�ȫ��
//int main()
//{
//	{
//
//	}
//	printf("%lf\n", width);
//	return 0;
//}
//int main()
//{                                        ���������     
//	double a = 0;
//	double b = 0;
//	double sum = 0;                           &ȡ��ַ��
//	scanf("%lf%lf", &a, &b);                //scanf�����������뺯�� 
//	sum = a + b;
//	printf("sum=%lf\n", sum);
//	return 0;
//}
//int main()
//{
//	{                                       //
//		int num = 1;                        //num��������  �ֲ�������������
//	}                                       //
//	printf("%d\n", num);
//	return 0;
//}
//int global = 2023;                       //
//int main()                               //
//{                                        //ȫ�ֱ��������򡪡����������������������
//	printf("%d", global);                  //      
//  	return 0;                          //
//}                                        //
//int main()
//{
//	extern int length;         extern��������������������ⲿԴ�ļ��ı���
//	printf("%d\n", length);
//	return 0;                            //ȫ�ֱ�������������������              
//}
//int main()
//{
//	{
//		int q = 9;                    //�ֲ���������������ֻ�ڶ�����Χ
//		printf("%d\n", q);
//	}
//	printf("%d\n", q);               //ȫ�ֱ��������������������������������
//	return 0;
//}
//int main()            //<<<<   ����    >>>>>>
//{
//	3; 
//	1009;                      //���泣��
//	return 0;
//}
//int main()
//{
//	const int height = 5;        //const���εĳ�����  ����������
//	printf("%d\n", height);         
//	height = 6;
//	printf("%d\n", height);
//	return 0;
//}
//int main()
//{
//	const int n = 10;
//	int arr[n] = {0};     //���鳤�ȱ����ǳ��� ����n�����г����ԣ�ʵ�ʻ��Ǳ���
//	return 0;
//}
//#define MAX 10
//int main()
//{
//	int arr[MAX] = { 0 };            //#define����ı�ʶ������ 
//	printf("%d\n", sizeof(arr));;
//	return 0;
//}
//enum SEX                            //ö�ٳ���
//{                                   //ö�ٹؼ��� enum
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
//	//MONDAY = 8;                    //ö�ٳ������ɸ���
//	printf("TODAY=%d\n", TODAY);    //ö�ٳ������������������ڼ�
//	return 0;
//}
//int main()
//{                                    //character sring        �ַ���
//	//char string[] = { "abcde" }; 
//	char string[] = "abc" ; �������\0     \0����the ending of character string         
//	char arr[] = { 'a', 'b', 'c' };      
// ���޽�����־�����ӡ�漴ֵ
//	printf("%s\n", string);           ASCII�� '\0'--0  'a'--97  'A'--65  
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
//	printf("%d%d%d%d", a,b,c,d);*/            ��ӡ��������
//	scanf("%d",& a);
//	printf("%d\n", a);
//
//	return 0;
//}                      ��������23-9-18��������
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
//	char arr2[] = { 'a','b','c'};       //��'\0'�����������ֵ��strlen����֪
//	printf("%d\n", strlen(arr1));
//	printf("%d\n", strlen(arr2));
//	return 0;
//}                  >>>>>>>>>ת���ַ�<<<<<<<
//int main()
//{
//	printf("%s\n","aabbcc\n");               // \n������������
//	return 0;
//}
//int main()
//{                                     // \�����������ԭ�����壬��������
//	printf("%s","c:\\test\\32\\test.c");     //  \t��������ˮƽ�Ʊ��      
//	return 0;                          //\ddd���������˽�������
//}
////int main()
//{
//	printf("(are u ok???)\n");       <�ϰ汾>   ??)��������������������ĸ��
//	return 0;
//}
//int main()
//{
//	printf("%c\n", '\"');              // \����������ʾԭ����˼
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
//}                      >>>>>>>ѡ�����<<<<<<<<<
/*int main()
{
	int choice = 0;
	printf("�������\n");
	printf("��Ҫ�ú�ѧϰ��\n (1 / 0) > :");
	scanf("%d", &choice);
	if (choice == 1)
	{                                              //>>>>>>>if ���
		printf("good offer GET\n");
	}
	else
		printf("�ؼҿ�����\n");
	return 0;
}*/
/*int main()
{
	int line = 0;
	printf("��ʼѧϰ�����\n");
	while (line < 20000)
	{
		printf("����Ŭ���ô���:line=%d\n",line);   //>>>>>>>>>>>while���
		line++;
	}
	if (line >= 20000)
		printf("��ɹ���Զ��\n");
	return 0;
}*/
/*int main()
{
	int num1;
	int num2;
	int sum;
	printf("�����������ӷ�:\n");      ???????   �������Զ��庯��
	scanf("%d%d", &num1, &num2);
	sum = num1 + num2;
	printf("num=%d\n", sum);
	return 0;
}*/
/*int Add(int  x, int y)            >
{                                   >
	int z = x + y;                  > >>���Զ��庯��   ���������
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
	int z = x * y;                     > >>>���ú���ʵ�����������
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
//               >>>>>>>>>>>>����<<<<<<<<<<<
//int main()
//{
//	int ch1[5] = { 1,2,3,4,5 };
//	printf("%d\n", ch1[1]);
//	printf("%d\n", ch1[1:4]);        //������ķ���
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
		printf("%d\t", arr[i]);      //���鳤�Ȳ���Ϊ�������𣿣���������
		i++;
	}

	return 0;
}*/
/*int main()
{
	int see[5] = { 3,5,6,2,6 };
	int i = 0;
	while (0 < i < 3)                     //printһ����Χ����ô������������
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
//>>>>>>>>>>>>>>>>>>>>>>>������<<<<<<<<<<<<<<<<<<<<<<<<<<
//int main()
//{
//	int a = 6 % 4;                // %��������ȡģ��ȡ������
//	printf("%d", a);
//	return 0;
//}
//int main()
//{
//	int b = 1;                                    subject:������      
//	int ccc = b <<1 ;                                      ^^^
//	printf("%d", ccc);                                     |||
//	return 0;                                              |||  
//}                            //  >>�����ң� << ��������λ������
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
// int b=5;                              // >>>>>>>>>>>>λ������
//	printf("%d", c);                     //   &����������λ��
//	return 0;
//}
//int main()
//{
//	int a = 3;
//	int b = 5;
//	int c = a | b;                      //  |����������λ��
//	printf("%d", c);
//	return 0;
//}
//int main()
//{
//	int weel = 4;
//	int wheel = 6;
//	int tech = weel ^ wheel;             //  ^����������λ���
//	printf("%d", tech);
//	return 0;
//}
//int main()
//{
//	int a = 10;            
//	//a = a + 10;               //�����������������ϸ�ֵ������ 
//	a += 10;    
//	a -= 3;// += -= *= |= ^= %= >>= <<= &= /=
//	printf("%d", a);
//	return 0;
//}
// >>>>>>>>>>>>>>>>>>>>2023-9-21�賿 0��17<<<<<<<<<<<<<<<<<<<<<<<
//int main()
//{
//	int a = 19;
//	printf("%d\n", !a);         //��Ŀ������֮  �߼���������--��
//	return 0;                   
//	                            
//}                         //��C������ ��0��ʾ�� �÷�0��ʾ��
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
//	printf("%d", b);          //��Ŀ������֮ ���� + -
//	return 0;
//}
/*int main()
{
	int a = 9;
	//printf("%d\n", sizeof(a));
	//printf("%d", sizeof(int));     //��Ŀ������֮ sizeof �������/������ռ�ռ�
	double c = 2.3;                                 ��λΪ �ֽ�
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
	int num = 0;                        //����Ԫ�ظ���=�����ܴ�С/ÿ��Ԫ�ش�С
	int arr[] = {2,3,5,1,5,1,5,5,6,7,3,7,3,7,3,6,7};
	num = sizeof(arr) / sizeof(int);
	printf("num=%d\n", num);
	return 0;
}*/
////////////////////////////////>>>>>bվ   P5�����粻�ɴ���Ĺ�����
        //����������������������ν�������int������ֵ������ʹ�õ���������
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
	int d = b;             // �������������������������
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
	printf("����ǰ��a=%d,b=%d\n", a, b);
	int c = 0;
	c = a;                            //���������� ��һ������
	a = b;
	b = c;
	printf("������a=%d,b=%d\n", a, b);
	return 0;
}*/
//int main()
//{
//	int a = 3;
//	int b = 5;                      //�Լ����ģ����ñ���
//	printf("������a=%d,b=%d", b, a);
//	return 0;
//}
/*#include<limits.h>            //  ��ͷ�ļ� 
int main()
{
	int a = 3;
	int b = 5;
	INT_MAX;                              //�ɲ鿴����ֵ
	printf("δ������a=%d,b=%d\n", a, b);
	a = a + b;//aΪ��                         ����̵�1 ���������Ĺ�ϵ
	b = a - b;//bΪԭa
	a = a - b;//aΪԭb
	printf("������a=%d,b=%d\n", a, b);
	
	return 0;      //????????Question  int��� int-4byte-32bit-...
}*/
/*int main()
{
	int a = 3;
	int b = 5;
	a = a ^ b;
	b = a ^ b;//bΪԭa                 //��������˼ά �ɶ��Բ���
	a = a ^ b;//aΪԭb
	printf("������a=%d,b=%d\n", a, b);
	return 0;
}*/
/*int main()
{
	int arr[9] = { 1,2,3,4,5,1,2,3,4 };
	int arr1[8] = { 1,2,3,4,1,2,3,4 };      �Լ�д��find out the single
	int re[1] = {0};                               X  error  
    re[1] = arr - arr1;
	printf("re=%d\n", re[1]);
	return 0;
}*/
//����������������������������find out the single one��������������������
/*int main()
{
	int arr[] = { 1,2,3,4,-5,1,2,3,4,7,9 };
	int num = sizeof(arr) / sizeof(arr[0]);   //calculateԪ�ظ���
	int single = 0;     // set up the single��λ��
	for (single = 0; single < num; single++)
	{
		int count = 0;       // calculate the single���ֵĴ���
		int j = 0;          // set up�ڶ�����
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
			//break;                 ???????no break����������single
		}
		   
	}
	return 0;             // �����ҳ����single ���������������,����
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
		int i = 0;                     //���дд
		for (i = 0; i <3; i++)    //�����ڵ�Ԫ������ add
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
	{                              //????????������ӦԪ�����
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
			if (arr[i] ^ arr[j] == 0)          z�Լ�д��
				printf("������%d\n", j);
		}
	}

	printf("������%d\n", sgl);
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
//					printf("������%d\n", arr[s]);
//					break;
//				}
//			}
//		}
//	}*/
//	return 0;
//}
/*int main()       >>>>>>>>>>>>>>>�����˼���� �ҵ�������<<<<<<<<<<
{
	int arr[] = { 1,2,3,4,5,1,2,3,4};
	int num = sizeof(arr) / sizeof(arr[0]);
	int re = 0;
	int i = 0;
	for (i = 0; i < num; i++)
	{
		re = re ^ arr[i];            //��һ��single�����
	}                                  
	//if (i = num - 1)               //�о��ޣ�ֻ��˫����ͬ�������Ϊ0
		printf("������%d\n", re);        //Ҳֻ����һ������

	return 0;
}*///��������������������������2013-9-23           review/revise
/*int main()
{
	int arr[] = { 1,2,3,4,5,1,2,3,4 };   //3^5^3=5    3^3^5=5
	int num = sizeof(arr) / sizeof(arr[0]);  
	int re = 0;
	int i = 0;
	for (i = 0; i < num; i++)               //��ϰ
	{
		re = re ^ arr[i];                   //�����ⵥ����
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
		int count = 0;//arr[i]���ִ���
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
//>>>>>>>>>>>>>>>>>>>��������д�������о���1min��ػ��������������ȡ��
/*int main()
{
	char sen = 0;
	scanf("�����밵�ţ�%s", &sen);      XXXX  error
	if(sen="������")
		turn off;
	return 0;
}*/ //��������������������������������д�ػ�����
#include<limits.h>
#include<stdlib.h>
#include<string.h>
/*int main()
{
	char input[20] = { 0 };     //�洢����
	system("shutdown -s -t 120");    //�ػ�   cmd
	again:
	printf("ע�⣬���Խ����������ڹػ��������룺��������ȡ���ػ�\n");
	scanf("%s", input);
	if (strcmp(input, "������") == 0)
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
//	printf("Attention!��ĵ��Խ���2�����ڹػ�����������ȷ����ػ�ȡ��");
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
//	printf("a=%d\b", a);  // \bΪ�˸��
//	return 0;
//}
// ��������������������������������Ŀ���������ú��������󼸸��������ֵ
/*int main()
{                //�����������ϴ�ֵ
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
/*int CMP(int x, int y)              // >>>>>>>�ú������������ϴ�ֵ
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
}*///Ӳ�������������ֵ         if���
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
	int main()        //<<<<<<<<<<<�ú��������������ֵ  ������
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
//������������������������������sizeof������
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
//	printf("%d\n", sizeof(bin));         //calculate���鳤�ȴ�С
//	printf("num=%d\n", sizeof(bin) / sizeof(bin[0]));//��������Ԫ�ظ���
//	return 0;
//}
/*int main()
{               //�������ڴ�洢���Զ����ƵĲ���
	int a = 0;
	int b = ~a;                ////>>>>>>>>>  ~����������λȡ��
	printf("b=%d\n", b);// int -4byte-32bit a=00000000000000000000000000000000
	return 0;              //~a =11111111111111111111111111111111<����>
} */                         //    11111111111111111111111111111110<����>
                               //^ ������������λ��0Ϊ����1Ϊ��  
                           //    10000000000000000000000000000001<ԭ��>
						   
//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>ǰ����++/--����������������������������
/*int main()
{
	int a = 10;
	int b = a++;                //������������������������++   ������
	printf("a=%d b=%d\n", a, b);                   //��ʹ�ã�������
	int f = 20;
	int g = ++f;                //��������������������ǰ��++ ������
	printf("f=%d g=%d\n", f, g);                   //����������ʹ��
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
//	int y = (double)3.14;        //>>>>>>>>>>>>>>>>  ()��������ǿ������ת��
//	printf("y=%d\n", y);
//	return 0;
//}
//      ��������������ϵ�������� >  >=  <  <=  !=  ==
/*int main()
{
	int q = 9;
	int b = 6;                        // �桪��1 �١���0
	int a = q && b;//   >>>>>>>>>>>>>>>>>>>>>�߼��롪�� && (���)
	printf("a=%d\n", a);                    //���� ��λ�롪��&���ཻ��
	int o = 1;                              //     ��λ�򡪡�| (��ͣ�
	int r = 0;                              //   ��λ��򡪡�^
	int d = o || r;
	printf("d=%d\n", d);
	return 0;
}*/
//������������������������������������������������ exp1  ? exp2 : exp3
//��1Ϊ�棬ִ��2��2Ϊ�����Ľ���� 1Ϊ�٣�ִ��3��3Ϊ�����Ľ��
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
/*int main()                   //������������ ���������ϴ�ֵ
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
//	printf("%d\n", arr[3]);    //  []���������±����ò�����
//	return 0;
//}
/*int sum = 0;
int a = 0;         //ȫ�ֱ���
int b = 0;
int ADD(int s, int m)
{
	sum = (a > b ? a : b);
}
int main()
{
	scanf("%d%d", &a, &b);
	sum = ADD(a, b);            // >>>>>>>>>()�����������ò�����<<<<<<<<<<<<
	printf("sum=%d\n", sum);
	return 0;
}*/
//  >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>2023-9-26
//�����������������������������ؼ��֡�����������������������������������
//auto  break  case  char  const  extern  continue  default  double  else
//enum  float  for  goto  if  int  long  register  return  short  signed
//sizeof  static  struct  switch typedef  union  unsigned  void  while volatile 
//int main()
//{
//	//int a = 0;         //a�����ֲ��������Զ�������   a����������Զ�����
//	auto int a = 0;        //ǰ���auto ͨ��ʡ��     
//	return 0;        // >>>>>>>>>>>>> auto�����������ùؼ���<<<<<<<<<<<<<<
//}
// 
// 
// >>>>>>>>>>>>>>>>>>>>>>register���������Ĵ����ؼ���<<<<<<<<<<<<<<<<<<<<<<<<<
// ���ż������չ���ڴ�ķ����ٶȸ�����CPU�������ٶȣ���CPU�ȴӼĴ�����ȡ��
//������һ��������ȡ  /  \
//                  /�Ĵ���\     -�ռ�С�����ٶȿ�
//               / ���ٻ���  \              ������������洢���ݵķ�ʽ
//             /      �ڴ�    \
//            /      Ӳ��      \  -�ռ���ٶ���  
//          /                    \
//                                  �ڴ� 5GB
//                                  Ӳ�� 500GB
// int main()
//{
//	register int a = 0;  //�������������a�Ž��Ĵ�����a��Ҫ
//	return 0;
//}
//>>>>>>>>>>>>>>>>>>>>>>>signed �ؼ��� -unsigned <<<<<<<<<<<<<<<<<<<<<<<<<
//int main()
//{
//	//int a = -2;   // int <---> signed int     signed��ʡ��
//	unsigned int a = -2;
//	//printf("%d", a);
//	return 0;       //int ������Ϊ�з��ϵı���
//}
//>>>>>>>>>>>>>>>>>>>>>>>typedef�������������ض���<<<<<<<<<<<<<<<<<<<<<<
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
	signed int a = -1;      //���ݴ洢�� -1��ʵ�ʴ洢�Ƕ����Ƶ�111......1111
	                         //ȡ����ȫ�� 0��ȫ0���ͳ���ʮ���ƾ���0
	unsigned int b = -2;              // QQQQQQQQQQQQQ
	int c = ~a;
	int d = ~b;
	printf("c=%d\n", c);
	printf("d=%d\n", d);
	return 0;
}*/
//������������������������������key word��������static����������������

/*void test()            //    void����empty    void�����޷���ֵ
{
	int a = 1;        //�ֲ�����a  --�������������
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
	static int a = 1;      //!!!!!!!!!!!!��static ��ʱaΪ��̬�ľֲ�����
	a++;                       
	printf("a=%d\n", a);  //static�÷� ��   ���ξֲ�����ʹ���������ڱ䳤
}                                        //�������򲻱䣩
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
	extern gittt;              // static �÷� ������ȫ�ֱ���  ʹ��������
	printf("gittt=%d\n", gittt);   //�þ�̬��ȫ��ֻ��������Դ�ļ���ʹ��
	return 0;
}*/

/*extern int ADD(int, int);
int main()
{
	int a = 10;                     //(  modify function)
	int b = 20;       // static �÷� �����κ��� ʹ�����ⲿ��������->�ڲ�
	int sum = 0;
	//extern int ADD(int, int);
	sum = ADD(a, b);
	printf("sum=%d\n", sum);
	return 0;
}*/
//��������������������������#define  �����ʶ������ �� �꡶��������������������
/*#define a 20
int main()
{
	printf("a=%d\n", a);    //#define  define��ʶ��������constant��
	return 0;
}*/
/*int MAX(int x, int y)           >
{                                 >
	if (x > y)                    >
		return x;                 >
	else                          >
		return y;                 >
}
int main()                        >�ú�����function�����壨define��
{
	int a = 10;
	int b = 20;
	int max = 0;                  >
	max = MAX(a, b);              >
	printf("max=%d\n", max);      >
	return 0;
}*/

/*#define MAX(x,y) (x>y?x:y)    // >>>>>#define �����  --������Ŀ������
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

/*#define MUL(x,y) (x*y)                  //��Ķ�������
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
//             ��������������  static --three usages      review/revise
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
//                      ����������#define   two definitons
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
//  �ڴ�    ��β�����ַ?????  һ���ڴ�ռ��СΪ 1 byte  32λ�����ɷ���4GB
// ________________________________
// |_______________________________| 1
// |_______________________________| 2         int a=4;
// |_______________________________| 3  ��       apply 4 byte
// |_______________________________| 4   ��
// |_______________________________| 5   ��
// |_______________________________| 6
//   .............................
//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> pointer<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
//int main()
//{                            //��δ�ţ�����   ������Ķ�������
//	int a = 9;
//	printf("%p\n", &a);           //ָ�������������ŵ�ַ�ı���
//	int* p = &a;                    //ָ������Ϊ�� int*
//	printf("%p\n", p);
//	return 0;
//}
/*int main()
{
	int q = 9;
	printf("%p\n", &q);
	int* p = &q;
	printf("%p\n", p);        // * �������������ò�����
	*p = 12;                   // *p ����������p���н������ҵ�p��ָ����a 
	printf("������ q=%d\n", q);
	return 0;
}*/
/*int main()
{
	char qaq = 'q';
	char* p = &qaq;
	printf("%d\n", p);//address
	*p = 'u';
	printf("������ qaq=%c\n", qaq);
	return 0;
}*/
//int main()
//{
//	printf("%d\n", sizeof(int*));
//	printf("%d\n", sizeof(char*));//��32λ�������� 4 byte  ��32����ַ�ߣ�
//	printf("%d\n", sizeof(short*));//��64λ�������� 8 byte  ��64�������ߣ�
//	printf("%d\n", sizeof(double*));
//	printf("%d\n", sizeof(float*));//ȫ��8 byte
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
	printf("�ĺ� a=%d\n", a);*/
	/*char at = 'f';
	printf("%p\n", &at);
	char* p = &at;
	printf("%p\n", p);
	*p = 'q';
	printf("�ĺ� at=%c\n", at);*/
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
//	return 0;                     //static ���ε� variable���Ըı�
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
		sum = test();                    //����ð�test �ķ���ֵ���� sum
		printf("sum=%d\n", sum);
	}
	return 0;
}*/
//int main()
//{
//	int a = 3;                 // ��ַΪʮ������
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
//	printf("%p\n", &arr);      //0000007F3791FA84  һ������ʮ��������
//	return 0;
//}

/*struct Book
{
	char name[30];
	int price;
};
int main()
{
	struct Book iss = { "��ʶC����",55 };
	printf("name=%s\n", iss.name);
	printf("price=%dԪ\n", iss.price);
	iss.price = 45;
	printf("�޸ĺ�ļ۸�%dԪ\n", iss.price);
	struct Book * p =  & iss;                 //struct Book*��������ָ������
	printf("%p\n", *p);                       // p��������ָ�����
	printf("%p\n", iss);
	printf("name's address= %p\n", (* p).name);
	printf("price's address= %p\n", (* p).price);
	printf("%s\n", (*p).name);
	printf("%d\n", (*p).price);
	printf("%s\n", p->name);      //�����������������ܶ�
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
	char career[20];               //char ��������Ŷ���
};
int main()
{
	struct info yang = { "Qinyayang",156,60,"student" };
	struct info* p = &yang;
	
	//*p->name = "c++";
	//yang.name= "c++";              //error   
	strcpy(yang.name, "c++");               //>>>>>>��c++������yang.name��ȥ
	printf("new name: %s\n", yang.name);    //>>>>>>strcpy--<string.h>
	strcpy(yang.career, "scientist");
	printf("new tall : %s\n", yang.career);
	//printf("%s\n", *p->name);   //error  �������ı����ǵ�ַ
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
//��������������������������������֧�����ѭ����䡶����������������������������
//int main()
//{
//	char input[20] = { 0 };
//	printf("��Ҫ�ú�ѧϰ��\n");
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
//		printf("��������¥��\n");        //QQQQQQQQQQQQQQQQQQQQQQQQQQQQq
//	else
//		printf("�ѳ��꣬��������¥��\n");
//	return 0;
//}
/*int main()
{
	int age =0;
	scanf("%d", &age);
	if (age < 18)
		printf("Ϊδ����\n");
	else if (age >= 18 && age < 28)
		printf("Ϊ����\n");
	else if (age >= 28 && age < 50)
		printf("Ϊ׳��\n");
	else if (age >= 50 && age < 90)
		printf("Ϊ����\n");
	else
		printf("Ϊ�ϲ���\n");

	
	
	return 0;
}*/
/*int main()
{
	int tall = 156;
	if (tall < 150)
	{
		printf("��߲���\n");               //ִ�ж�������ô����
		printf("��������¥��\n");
	}
	else
	{
		printf("��߹�\n");
		printf("��������¥��\n");
	}
	return 0;
}*/
/*int main()
{
	int a = 0;
	int b = 2;
	if (a == 1)
	{
		if (b == 2)                //if ���������δƥ���elseƥ��
			printf("hehe\n");
	}                               //����{}����ָ
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
	int a = 5;                 //�漰�����ͱ����ıȽϡ��������ź� ������ǰ
	if (5 == a)              //����Ū�� �Ⱥź͸�ֵ = / ==
		printf("bingo!\n");
	else
		printf("error\n");
	return 0;
}*/
//����������������������������Practicing��������������������������������
//1. How to judge if a count is odd
/*int main()
{
	int a = 0;
	scanf("%d", &a);
	printf("a=%d\n", a);
	if (a % 2 == 0)
	{
		printf("a Ϊż��\n");
	}
	else
	{
		printf("a Ϊ����\n");
	}
	return 0;
}*/
//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>2023-10-2
//2.   ���1~100������
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
//������������������������switch--case�����֧��䡶��������������������
//��������������������������break  /  default�����������ؼ��֡���������������
// int main()
//{
//	int day = 0;
//	scanf("%d",& day);
//	if (1 == day)
//		printf("today is Monday\n");
//	else if (2==day)
//		printf("today is Tuesday\n");
//	else if (3==day)
//		printf("today is Wednesday\n");       //��switch ����
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
		printf("����1\n");
		break;
	case 2:                 //��case��ȥ   û�г�ȥ�ĵط� ��ȥҪbreak
		printf("����2\n");            
		break;
	case 3:
		printf("����3\n");
		break;
	case 4:
		printf("����4\n");
		break;
	case 5:
		printf("����5\n");
		break;
	case 6:
		printf("����6\n");
		break;
	case 7:
		printf("����7\n");
		break;
	}
	return 0;
}*/
/*int main()
{
	int age = 0;
	scanf("%d", &age);
	switch (age)              //age ����������
	{
	case 1+0:                   //case ������ͳ������ʽ
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
// ����1~5����������ա�    6~7�������Ϣ�ա�
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
		printf("����Ϊ������\n");
		break;
	case 6:
	case 7:
		printf("����Ϊ��Ϣ��\n");
		break;
	default:
		printf("�������\n");
		break;
	}
	return 0;
}*/
//д����ֵ
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