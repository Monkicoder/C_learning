#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	int i = 0;
//	int m = 0;
//	int n = 0;
//	char ch[7];
//	gets(ch);
//	int len = strlen(ch);
//	char ch1[7];
//	char ch2[7];
//	strcpy(ch1, ch);
//	for (i = 0; i < len; i++)
//	{
//		int temp = 0;
//		temp = ch1[0];
//		ch1[0] = ch1[i];
//		ch1[i] = temp;
//		puts(ch1);
//		strcpy(ch2, ch1);
//		for (m = 1; m < len - 1; m++)
//		{
//			for (n = m + 1; n < len; n++)
//			{
//				int temp = 0;
//				temp = ch1[m];
//				ch1[m] = ch1[n];
//				ch1[n] = temp;
//				puts(ch1);
//				strcpy(ch1, ch2);
//			}
//		}
//		strcpy(ch1, ch);
//	}
//}


//#include <stdio.h>  
//#include <string.h>  
//
//// �����ַ��ĸ�������  
//void swap(char* x, char* y) {
//    char temp;
//    temp = *x;
//    *x = *y;
//    *y = temp;
//}
//
//// �ݹ��������еĺ���  
//void permute(char* str, int l, int r) {
//    int i;
//    if (l == r) { // ���������ֻʣ��һ���ַ�����ӡ��ǰ����  
//        printf("%s\n", str);
//    }
//    else {
//        for (i = l; i <= r; i++) {
//            swap((str + l), (str + i)); // �����ַ�  
//            permute(str, l + 1, r);      // �ݹ�����ʣ���ַ�������  
//            swap((str + l), (str + i)); // ���ݣ��ָ�ԭʼ�ַ���  
//        }
//    }
//}
//
//int main() {
//    char str[7]; // ����һ������������� 6 ���ַ����ַ��������� + ����ֹ��  
//    scanf("%s", str); // ��ȡ�����ַ���  
//
//    int n = strlen(str); // ��ȡ�ַ����ĳ���  
//    permute(str, 0, n - 1); // �������к����������� 0 �� n-1  
//
//    return 0;
//}



#include<stdio.h>
int main()
{
	int sum = 0;
	int n = 0;
	while (getchar() != '\n')
	{
		scanf("%d", &n);
		sum += n;

	}
	printf("%d", sum);
}