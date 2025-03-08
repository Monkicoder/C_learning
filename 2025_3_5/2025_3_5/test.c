#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main()
//{
//	int n=0;
//	scanf("%d", &n);
//	int bio[50];
//	int i = 0;
//	//十进制转二进制
//	while (n!=1)
//	{
//		bio[i] = n % 2;
//		n = n / 2;
//		i++;
//	}
//	bio[i] = 1;
//	int j = 0;
//	for (j = 0; j < i; j++)
//	{
//		printf("%d", bio[j]);
//	}
//}
//
#include <stdio.h>  

//void printBinary(int n)
//{
//    unsigned int mask = 1 << 31; 
//    int started = 0; 
//
//    for (int i = 0; i < 32; i++) {
//        if (n & mask)
//        {
//            printf("1");
//            started = 1;  
//        }
//        else
//        {
//            if (started) 
//            {
//                printf("0");
//            }
//        }
//        mask >>= 1;  
//    }
//
//    if (!started) { // 如果 n 是 0  
//        printf("0");
//    }
//}
//
//int main() {
//    int N;
//
//    // 获取用户输入  
//    printf("请输入一个十进制整数（-32767 到 32767）：");
//    scanf("%d", &N);
//
//    // 检查输入范围  
//    if (N < -32767 || N > 32767) {
//        printf("输入的整数超出范围，请输入 -32767 到 32767 之间的整数。\n");
//        return 1; // 退出程序  
//    }
//
//    // 输出二进制表示  
//    printf("二进制：");
//    printBinary(N);
//    printf("\n");
//
//    // 输出八进制表示  
//    printf("八进制：%o\n", N);
//
//    // 输出十六进制表示  
//    printf("十六进制：%X\n", N);
//
//    return 0;
//}
//#include <stdio.h>  
//#include <stdlib.h>  
//
//#define MAX_N 100 // 最大步数限制  
//
//// 函数来计算不同的走法  
//long long count_unique_paths(int n) {
//    // dp 数组，数组大小为 (n + 1) * (2 * n + 1) * (2 * n + 1)  
//    long long dp[n + 1][2 * n + 1][2 * n + 1];
//
//    // 初始化 dp 数组  
//    for (int i = 0; i <= n; i++) {
//        for (int j = 0; j <= 2 * n; j++) {
//            for (int k = 0; k <= 2 * n; k++) {
//                dp[i][j][k] = 0;
//            }
//        }
//    }
//
//    // 初始状态  
//    dp[0][n][n] = 1; // 步数为 0，坐标为 (0, 0)  
//
//    // 动态规划填表  
//    for (int steps = 1; steps <= n; steps++) {
//        for (int x = 0; x <= 2 * n; x++) {
//            for (int y = 0; y <= 2 * n; y++) {
//                // 只能从当前格子向北、东或西移动  
//                if (x > 0) {
//                    dp[steps][x][y] += dp[steps - 1][x - 1][y]; // 西  
//                }
//                if (y < 2 * n) {
//                    dp[steps][x][y] += dp[steps - 1][x][y + 1]; // 北  
//                }
//                if (x < 2 * n) {
//                    dp[steps][x][y] += dp[steps - 1][x + 1][y]; // 东  
//                }
//            }
//        }
//    }
//
//    // 最终统计所有步数为 n 时的走法总和  
//    long long total_paths = 0;
//    for (int x = 0; x <= 2 * n; x++) {
//        for (int y = 0; y <= 2 * n; y++) {
//            total_paths += dp[n][x][y];
//        }
//    }
//
//    return total_paths;
//}
//
//int main() {
//    int n;
//
//    printf("请输入允许的步数 n：");
//    scanf("%d", &n);
//
//    if (n < 0 || n > MAX_N) {
//        printf("步数 n 应当在 0 到 %d 之间。\n", MAX_N);
//        return 1;
//    }
//
//    long long result = count_unique_paths(n);
//    printf("总的不同走法数为：%lld\n", result);
//
//    return 0;
//}

//#include<stdlib.h>
//#include<stdio.h>
//
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int* a =(int*)malloc(sizeof(int) * (n+1));
//	int* b = (int*)malloc(sizeof(int) * (n + 1));
//	int* c = (int*)malloc(sizeof(int) * (n + 1));
//	int* d = (int*)malloc(sizeof(int) * (n + 1));
//	if (a != NULL && b != NULL && c != NULL && d != NULL)
//	{
//		a[1] = 1;
//		b[1] = 1;
//		c[1] = 1;
//		d[1] = a[1] + a[2] + a[3];//第一次走
//		int i = 0;
//		for (i = 2; i <= n; i++)
//		{
//			a[i] = a[i - 1] + b[i - 1] + c[i - 1];
//			b[i] = b[i - 1] + a[i - 1];
//			c[i] = a[i - 1] + c[i - 1];
//
//		}
//		d[n] = a[n] + b[n] + c[n];
//		printf("%d", d[n]);
//	}
//	free(a);
//	free(b);
//	free(c);
//	free(d);
//
//}


//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int arr[100][2];
//	int i = 0;
//	for (i = 1; i <= n; i++)
//	{
//		scanf("%d %d", &arr[i][0], &arr[i][1]);
//	}
//	int p, q, temp_1, temp_2;
//	for (p = 1; p <= n - 1; p++)
//	{
//		for (q = 1; q <= n - 1 - p; q++)
//		{
//			if (arr[q][0] > arr[q + 1][0])
//			{
//				temp_1 = arr[q][0];
//				arr[q][0] = arr[q + 1][0];
//				arr[q + 1][0] = temp_1;
//				temp_2 = arr[q][1];
//				arr[q][1] = arr[q + 1][1];
//				arr[q + 1][1] = temp_2;
//			}
//
//		}
//	}
//
//	for (i = 1; i <= n - 1; i++)
//	{
//		if (arr[i][0] == arr[i + 1][0])
//		{
//			int k = 0;
//			for (k = i; k <= n - 1; k++)
//			{
//				arr[k][0] = arr[k + 1][0];
//				arr[k][1] += arr[k + 1][1];
//			}
//			n--;
//			i--;
//		}
//	}
//	for (i = 1; i <= n; i++)
//	{
//		printf("%d %d ", arr[i][0], arr[i][1]);
//	}
//
//
//}


//#include <stdio.h>  
//#include <stdlib.h>  
//
//void decimalToBinary(int decimalNumber);
//void decimalToOctal(int decimalNumber);
//void decimalToHexadecimal(int decimalNumber);
//
//int main()
//{
//    int N;
//    scanf("%d", &N);
//    decimalToBinary(N);
//    printf("%o\n", N); 
//    printf("%X\n", N);
//
//    return 0;
//}
//void decimalToBinary(int decimalNumber)
//{
//    if (decimalNumber == 0) {
//        printf("0");
//        return;
//    }
//
//    int binary[16]; 
//    int i = 0;
//    int isNegative = 0;
//
//    if (decimalNumber < 0) {
//        isNegative = 1;
//        decimalNumber = abs(decimalNumber);
//    }
//
//    while (decimalNumber > 0) {
//        binary[i] = decimalNumber % 2;
//        decimalNumber = decimalNumber / 2;
//        i++;
//    }
//
//    if (isNegative) {
//        printf("-"); 
//    }
//
//    for (int j = i - 1; j >= 0; j--) {
//        printf("%d", binary[j]);
//    }
//}
//
//
//void decimalToOctal(int decimalNumber) {
//    printf("%o", decimalNumber);
//}
//
//
//void decimalToHexadecimal(int decimalNumber) {
//    printf("%X", decimalNumber);
//}
//#include <stdio.h>  
//#include <stdlib.h>   
//int compare_odd(const void* a, const void* b)
//{
//    return (*(int*)b - *(int*)a); 
//}
//
//int compare_even(const void* a, const void* b)
//{
//    return (*(int*)a - *(int*)b);
//}
//
//int main()
//{
//    int n;
//    scanf("%d", &n);
//
//    int arr[100];
//    int odds[100], evens[100];
//    int odd_count = 0, even_count = 0;
//    for (int i = 0; i < n; i++)
//    {
//        scanf("%d", &arr[i]);
//        if (arr[i] % 2 == 0)
//        {
//            evens[even_count++] = arr[i];
//        }
//        else
//        {
//            odds[odd_count++] = arr[i];
//        }
//    }
//
//
//    qsort(odds, odd_count, sizeof(int), compare_odd);
//    qsort(evens, even_count, sizeof(int), compare_even);
//
//
//    for (int i = 0; i < odd_count; i++) {
//        printf("%d ", odds[i]);
//    }
//    for (int i = 0; i < even_count; i++) {
//        printf("%d", evens[i]);
//        if (i < even_count - 1) {
//            printf(" ");
//        }
//    }
//    printf("\n");
//
//    return 0;
//}

//#include <stdio.h>  
//#include <stdlib.h>  
//void decimalToBinary(int n)
//{
//    unsigned int num;
//    if (n < 0)
//    {
//        num = abs(n);
//        printf("%dturn into2: -", n);
//    }
//    else {
//        num = n;
//        printf("%dturn into2: ", n);
//    }
//
//    if (num == 0) {
//        printf("0");
//        return;
//    }
//
//    int binary[16];
//    int i = 0;
//
//    while (num > 0) {
//        binary[i] = num % 2;
//        num = num / 2;
//        i++;
//    }
//
//
//    for (int j = i - 1; j >= 0; j--) {
//        printf("%d", binary[j]);
//    }
//}
//
//
//void decimalToOctal(int n) {
//    printf("%dturn into8: %o", n, n);
//}
//
//    void decimalToHexadecimal(int n)    
//    {
//        printf("%dturn into16: %X", n, n);
//    }
//
//    int main() {
//        int N;
//
//
//        scanf("%d", &N);
//
//
//        decimalToBinary(N);
//        printf("\n");
//        decimalToOctal(N);
//        printf("\n");
//        decimalToHexadecimal(N);
//        printf("\n");
//
//        return 0;
//    }


int main()
{
	int n = 0;
	scanf("%d", &n);
	int arr[100000] = { 0 };
	int i = 0;
	int p = 0; 
	int q = 0;
	for (i = 0; i < n; i++)
	{
		scanf("%d %d", &p,&q);
		arr[p] += q;
	}
	for (i = 0; i < 100000; i++)
	{
		if (arr[i] != 0)
		{
			printf("%d %d\n", i, arr[i]);
		}
	}
	
}