#include"SList.h"
void SListPrint(SListNode* phead)
{
	SListNode* cur = phead;
	while (cur != NULL)
	{
		printf("%d", cur->x);
		cur = cur->next;
	}
}
void SListPushBack(SListNode* phead, SLDateType x)
{
	SListNode* newnode =(SListNode*) malloc(sizeof(SListNode));
	newnode->next = NULL;
	newnode->x = x;
}