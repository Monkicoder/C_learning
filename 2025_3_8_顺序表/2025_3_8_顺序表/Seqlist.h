#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#define MAX_SIZE 20
typedef int SeqDateType;
typedef struct SeqList
{
	SeqDateType arr[MAX_SIZE];
	int size;//˳������ݴ�С
}SL;


void SeqListInit(SL* psl);//��ʼ��
void SeqListPushBack(SL* psl, SeqDateType x);//β��
void SeqListPushFront(SL* psl, SeqDateType x);//ͷ��
void SeqListPrint(SL* psl);//���
void SeqListPopBack(SL* psl);//βɾ
void SeqListPopFront(SL* psl);//ͷɾ