#pragma once
#include<stdio.h>
#include<stdlib.h>
#define _CRT_SECURE_NO_WARNINGS
typedef int SLTDateType;
typedef struct SListNode
{
	SLTDateType date;
	struct SListNode* next;
}SLTNode;
void SLTPushBack(SLTNode** pphead, SLTDateType x);
void SLTPopBack(SLTNode** pphead);
void SLTPrint(SLTNode* phead);