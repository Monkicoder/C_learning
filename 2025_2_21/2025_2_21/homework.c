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
//#define MAX_LENGTH 501 // ���ӵ���󳤶�  
//
//int main() {
//    char sentence[MAX_LENGTH];
//    char longest_word[MAX_LENGTH] = ""; // �洢��ĵ���  
//    char word[MAX_LENGTH]; // �洢��ǰ����  
//    int max_length = 0; // ��¼����ʵĳ���  
//
//    // �������  
//   
//    fgets(sentence, MAX_LENGTH, stdin);
//
//    
//    int len = strlen(sentence);
//    
//  
//    sentence[len - 1] = '\0';
//
//    // ͨ���ո�ָ����  
//    char* token = strtok(sentence, " ");
//    while (token != NULL) {
//        // ��鵱ǰ���ʵĳ���  
//        if (strlen(token) > max_length) {
//            max_length = strlen(token);
//            strcpy(longest_word, token); // ���� longest_word  
//        }
//        // ��ȡ��һ������  
//        token = strtok(NULL, " ");
//    }
//
//    // ������  
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
//    // ����ͼ���С  
//    scanf("%d %d", &n, &m);
//
//    // ����Ҷ�ֵ  
//    for (int i = 0; i < n; i++) {
//        for (int j = 0; j < m; j++) {
//            scanf("%d", &image[i][j]);
//        }
//    }
//
//    // ����ģ������������㲻��  
//    for (int i = 0; i < n; i++) {
//        for (int j = 0; j < m; j++) {
//            // ������ص㲻��  
//            if (i == 0 || i == n - 1 || j == 0 || j == m - 1) {
//                blurred_image[i][j] = image[i][j];
//            }
//            else {
//                // �м����ص㣬�����µĻҶ�ֵ  
//                int sum = image[i][j] + image[i - 1][j] + image[i + 1][j] + image[i][j - 1] + image[i][j + 1];
//                int average = (sum + 2) / 5; // �������룬����ͨ����2��ʵ��  
//                blurred_image[i][j] = average;
//            }
//        }
//    }
//
//    // ���ģ�������ͼ��  
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
//	//��������
//	max = arr[0];
//	for (i = 1; i < 4; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	//�жϴ�С
//	pritnf("%d", max);
//	//������
//	return 0;
//
//}
//int main()
//{
//	float a = 0.0f;//float��ʼ��
//	double a = 0.0;//double��ʼ��
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
//								�׳˺�����
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
//	}//�����ں����ݹ�
//}
//



//**********************************************************************
//								���ֲ���
//**********************************************************************
int main()
{
	int arr[10] = { 1, 2 ,3, 4, 5, 6, 7, 8, 9, 10 };
	//��ʼ������
	int sz = 0;
	sz = sizeof(arr) / sizeof(arr[0]);
	//��������Ԫ�ظ���
	int n;
	printf("����������ҵ�����>\n");
	scanf("%d", &n);
	//�������������
	int left = 0;
	int right = sz-1;
	int mid = 0;
	//��ʼ���㷨����

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
			printf("�鵽�ˣ���ֵ��%d��\n", mid);
			break;
		}
	}
	if (left > right)
	{
		printf("�鲻����ֵ��\n");
	}
	//ʵ���㷨�ṹ
	return 0;
}