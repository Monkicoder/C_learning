#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int a[10];
    int n = 0;
    int first;
    while (scanf("%d", &a[n]) == 1 && n < 10) {
        n++;
    }
    first = a[0];
    for (int i = 0; i < n - 1; i++) {
        a[i] = a[i + 1];
    }
    a[n - 1] = first;
    printf("Result:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
    return 0;
}


//#include<stdio.h>
//int main()
//{
//	int a[101][101] = { 0 };
//	int b[101][101] = { 0 };
//	int n = 0, m = 0,i = 0,j = 0;
//	scanf("%d %d", &n, &m);//mΪ��nΪ��
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < m; j++)
//		{
//			scanf("%d", &a[i][j]);
//		}
//	}//���鸳ֵ
//	for (i = 1; i < n - 1; i++)
//	{
//		for (j = 1; j < m - 1; j++)
//		{
//			b[i][j] = (a[i][j] + a[i + 1][j] + a[i][j + 1] + a[i - 1][j] + a[i][j - 1]) / 5;
//		}
//	}//���ü��������ż���ֵ
//	for (i = 1; i < n - 1; i++)
//	{
//		for (j = 1; j < m - 1; j++)
//		{
//			a[i][j] = b[i][j];
//		}
//	}
//	//�����������ֵ�滻ԭ�����ֵ
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < m; j++)
//		{
//			printf("%d ", a[i][j]);
//		}
//	}//�������
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int ch,count=0;
//	char str[500];
//	while((ch=getchar)!='.')
//	{	
//		str[count] = ch;
//		count++;
//	}
//
//}