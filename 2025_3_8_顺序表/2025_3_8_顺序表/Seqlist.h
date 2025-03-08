#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#define MAX_SIZE 20
typedef int SeqDateType;
typedef struct SeqList
{
	SeqDateType arr[MAX_SIZE];
	int size;//顺序表数据大小
}SL;


void SeqListInit(SL* psl);//初始化
void SeqListPushBack(SL* psl, SeqDateType x);//尾插
void SeqListPushFront(SL* psl, SeqDateType x);//头插
void SeqListPrint(SL* psl);//输出
void SeqListPopBack(SL* psl);//尾删
void SeqListPopFront(SL* psl);//头删