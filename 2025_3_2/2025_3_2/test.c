#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
////��M��ͬ����ƻ������N��ͬ��������������е����ӿ��Ų��ţ��ʹ��ж����ֲ�ͬ�ķַ���
//// ����K��ʾ��5��1��1��1��5��1 ��ͬһ�ַַ���
//int sort(int, int);
//int main()
//{
//	int t = 0;
//	int i = 0;
//	int M = 0;
//	int N = 0;
//	scanf("%d", &t);//�������ݵĸ���0��t��20
//	for (i = 0; i < t; i++)
//	{
//		scanf("%d %d", &M, &N);
//		printf("%d", sort(M, N));
//	}
//
//}
//int sort(int M, int N)//Mƻ��,N����
//{
//	if (M == 0)
//		return 1;
//	if (N == 0)
//		return 0;
//	if (M < 0)
//		return 0;
//	return sort(M - N, N) + sort(M, N - 1);
//}
int main()
{
	int num = 0;
	scanf("%d", &num);
	int left = 1;
	int right = 100;
	while (left <= right)
	{
		if (num > (left + right) / 2)
		{
			left = (left + right) / 2;
			printf("%d ", left);
		}
		if (num < (left + right) / 2)
		{
			right = (left + right) / 2;
			printf("%d ", right);
		}
		if (num == ((left + right) / 2))
		{
			printf("%d ", num);
			printf("���ˣ�");
			break;
		}
		
			
	}
	
}