#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0, right = sz-1;
//	int n=0;
//	int mid = 0;
//	scanf("%d", &n);
//	while(left<=right)
//	{
//		//mid = (left + right) / 2;
//		//Ϊ��ֹ����ɸ�Ϊ
//		mid = left + (right - left) / 2;
//		if (n > arr[mid])
//		{
//			left = mid + 1;
//		}
//		else if (n < arr[mid])
//		{
//			right = mid-1;
//
//		}
//		else
//		{
//			printf("�ҵ���Ϊ%d", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("û�ҵ�");
//	}
//	
//}
//int main()
//{
//	char ch_1[11] = "##########";
//	char ch_2[11] = "I am steve";
//	int sz = sizeof(ch_1) / sizeof(ch_1[0]);
//	int i = 0;
//	for (i=0;i<=4;i++)
//	{
//		printf("%c", ch_2[i]);
//	}
//	for()
//}



//��Ļչ��


#include<windows.h>
#include<stdlib.h>
int main()
{
	char ch_1[] = "I am STEVE!";
	char ch_2[] = "###########";
	int right = strlen(ch_2) - 1;
	int left = 0;
	int i = 0;
	while (left <= right)
	{
		ch_2[left] = ch_1[left];
		ch_2[right] = ch_1[right];
		printf("%s", ch_2);
		Sleep(1000);//Sleep()����������ͣ���������ʱ��Ϊms������ͷ�ļ�<windows.h>
		system("cls");//system()������������ϵͳ�������ͷ�ļ�<stdlib.h>
		left++;
		right--;
	}
	printf("%s", ch_2);
}