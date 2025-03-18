#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
//typedef struct NumberType
//{
//	int i;
//	int j;
//}NumberType;
//typedef struct LinkNode
//{
//	 NumberType item;
//	struct LinkNode* next;
//}LinkNode;
//typedef struct LinkList
//{
//	int data;
//	struct LinkList* next;
//}LinkListNode;
//void GetLinkAndCalcSum(LinkNode* phead);
//void PushDataInList(LinkListNode* phead);
typedef struct List
{
	struct List* prev;
	struct List* next;
	int data;
}List;
void ReturnBoll(List* phead);