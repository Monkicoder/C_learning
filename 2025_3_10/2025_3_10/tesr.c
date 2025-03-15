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
//// 交换字符的辅助函数  
//void swap(char* x, char* y) {
//    char temp;
//    temp = *x;
//    *x = *y;
//    *y = temp;
//}
//
//// 递归生成排列的函数  
//void permute(char* str, int l, int r) {
//    int i;
//    if (l == r) { // 基本情况：只剩下一个字符，打印当前排列  
//        printf("%s\n", str);
//    }
//    else {
//        for (i = l; i <= r; i++) {
//            swap((str + l), (str + i)); // 交换字符  
//            permute(str, l + 1, r);      // 递归生成剩余字符的排列  
//            swap((str + l), (str + i)); // 回溯：恢复原始字符串  
//        }
//    }
//}
//
//int main() {
//    char str[7]; // 声明一个可以容纳最多 6 个字符的字符串的数组 + 空终止符  
//    scanf("%s", str); // 读取输入字符串  
//
//    int n = strlen(str); // 获取字符串的长度  
//    permute(str, 0, n - 1); // 调用排列函数，从索引 0 到 n-1  
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