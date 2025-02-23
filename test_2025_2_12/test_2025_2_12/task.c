#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//小飞机问题
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for(j=0;j<2;j++)
//	{
//		for (i = 0; i < 5; i++)
//			printf(" ");
//		printf("**");
//		printf("\n");
//	}
//	for (j = 0; j < 2; j++)
//	{
//		for (i = 0; i < 12; i++)
//			printf("*");
//		printf("\n");
//	}
//	for (j = 0; j < 2; j++)
//	{
//		for (i = 0; i < 4; i++)
//			printf(" ");
//		printf("*  *");
//		printf("\n");
//	}
//
//}
// 
// 
// 
// 
// 
// 判断是否能被5整除
//int main()
//{
//	int M;
//	scanf("%d", &M);
//	if (M % 5 == 0)
//		printf("YES");
//	else
//		printf("NO");
//}
// 
// 
// 
// 
//输出学生信息
//int main()
//{
//	printf("Name    Age    Gender\n");
//	printf("---------------------\n");
//	printf("Jack    18     man\n");
//	return 0;
//}
// 
// 
// 
//int main()
//{
//	printf("I lost my cellphone!");
//}



//int main()
//{
//	int a = 40;
//	int c = 212;
//	printf("%d", (-8 + 22)*a - 10 + c / 2);
//}





int main()
{
	int n = 0,y=0;
	scanf("%d", &n);
	if (n < 0)
		y = 1;
	else if (n == 0)
		y = 0;
	else
		y = -1;
	printf("%d", y);

}