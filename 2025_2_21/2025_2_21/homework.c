#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//	char ch[500] = { '\0' };
//	int max = 0;
//	int count = 0;
//	int i = 0;
//	//I am a student.\n
//	gets(ch);
//	while (ch[i] != '.')
//	{
//		count++;
//		if (ch[i] == ' ')
//		{
//			if (count > max)
//			{
//				max = count;
//			}
//			count = 0;
//		}
//		i++;
//	}
//	printf("%d", max);
//}
//#include <stdio.h>  
//#include <string.h>  
//
//#define MAX_LENGTH 501 // 句子的最大长度  
//
//int main() {
//    char sentence[MAX_LENGTH];
//    char longest_word[MAX_LENGTH] = ""; // 存储最长的单词  
//    char word[MAX_LENGTH]; // 存储当前单词  
//    int max_length = 0; // 记录最长单词的长度  
//
//    // 输入句子  
//   
//    fgets(sentence, MAX_LENGTH, stdin);
//
//    
//    int len = strlen(sentence);
//    
//  
//    sentence[len - 1] = '\0';
//
//    // 通过空格分割句子  
//    char* token = strtok(sentence, " ");
//    while (token != NULL) {
//        // 检查当前单词的长度  
//        if (strlen(token) > max_length) {
//            max_length = strlen(token);
//            strcpy(longest_word, token); // 更新 longest_word  
//        }
//        // 获取下一个单词  
//        token = strtok(NULL, " ");
//    }
//
//    // 输出结果  
//    printf("%s\n", longest_word);
//    return 0;
//}
//#include <stdio.h>  
//#include <math.h>  
//
//#define MAX_SIZE 100  
//
//int main() {
//    int n, m;
//    int image[MAX_SIZE][MAX_SIZE];
//    int blurred_image[MAX_SIZE][MAX_SIZE];
//
//    // 输入图像大小  
//    scanf("%d %d", &n, &m);
//
//    // 输入灰度值  
//    for (int i = 0; i < n; i++) {
//        for (int j = 0; j < m; j++) {
//            scanf("%d", &image[i][j]);
//        }
//    }
//
//    // 处理模糊化，保持外层不变  
//    for (int i = 0; i < n; i++) {
//        for (int j = 0; j < m; j++) {
//            // 外层像素点不变  
//            if (i == 0 || i == n - 1 || j == 0 || j == m - 1) {
//                blurred_image[i][j] = image[i][j];
//            }
//            else {
//                // 中间像素点，计算新的灰度值  
//                int sum = image[i][j] + image[i - 1][j] + image[i + 1][j] + image[i][j - 1] + image[i][j + 1];
//                int average = (sum + 2) / 5; // 四舍五入，可以通过加2来实现  
//                blurred_image[i][j] = average;
//            }
//        }
//    }
//
//    // 输出模糊化后的图像  
//    for (int i = 0; i < n; i++) {
//        for (int j = 0; j < m; j++) {
//            printf("%d", blurred_image[i][j]);
//            if (j < m - 1) {
//                printf(" ");
//            }
//        }
//        printf("\n");
//    }
//
//    return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int year = 0;
//	int month = 0;
//	int day = 0;
//	scanf("%4d%2d%2d", &year, &month, &day);
//	printf("year=%d\n", year);
//	printf("month=%02d\n", month);
//	printf("day=%02d\n", day);
//	return 0;
//}

#include<stdio.h>
//int main()
//{
//	int num;
//	float eng, c, math;
//	scanf("%d;%f,%f,%f", &num, &c, &math, &eng);
//	printf("The each subject score of No. %d is %.2f, %.2f, %.2f.", num, c, math, eng);
//}

//int main()
//{
//	int arr[4];
//	int i = 0;
//	int max = 0;
//	for (i = 0; i < 4; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	//输入数据
//	max = arr[0];
//	for (i = 1; i < 4; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	//判断大小
//	pritnf("%d", max);
//	//输出结果
//	return 0;
//
//}
//int main()
//{
//	float a = 0.0f;//float初始化
//	double a = 0.0;//double初始化
//}
//1*2*3
//int main()
//{
//	int ret = 1;
//	int n = 0;
//	int i = 0;
//	int j = 0;
//	int sum = 0;
//	scanf("%d", &n);
//	for(j=1;j<=n;j++)
//	{
//		for (i = 1; i <= j; i++)
//		{
//			ret *= i;
//		}
//		sum += ret;
//		ret = 1;
//
//	}
//	
//	printf("%d", ret);
//





//**********************************************************************
//								阶乘和运算
//**********************************************************************
//int main()
//{
//	int i = 0;
//	int ret = 1;
//	int sum = 0;
//	for (i = 1; i <= 3  ; i++)
//	{
//		ret = ret * i;
//		sum += ret;
//	}//类似于函数递归
//}
//



//**********************************************************************
//								二分查找
//**********************************************************************
int main()
{
	int arr[10] = { 1, 2 ,3, 4, 5, 6, 7, 8, 9, 10 };
	//初始化数组
	int sz = 0;
	sz = sizeof(arr) / sizeof(arr[0]);
	//计算数组元素个数
	int n;
	printf("请输入待查找的数据>\n");
	scanf("%d", &n);
	//输入待查找数据
	int left = 0;
	int right = sz-1;
	int mid = 0;
	//初始化算法参数

	while (left <= right)
	{
		mid = (left + right) / 2;
		if (n > arr[mid])
		{
			left = mid + 1;
		}
		else if (n < arr[mid])
		{
			right = mid - 1;
		}
		else
		{
			printf("查到了，该值在%d处\n", mid);
			break;
		}
	}
	if (left > right)
	{
		printf("查不出该值！\n");
	}
	//实现算法结构
	return 0;
}