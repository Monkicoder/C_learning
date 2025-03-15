#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
typedef int SLDateType;
typedef struct SListNode
{
	struct SListNode* next;
	SLDateType x;
}SListNode;
void SListPrint(SListNode* phead);//Êä³ö
void SListPushBack(SListNode* phead,SLDateType x);//Î²²å