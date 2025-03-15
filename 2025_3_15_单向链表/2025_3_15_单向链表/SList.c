#include "SList.h"
void SLTPushBack(SLTNode** pphead,SLTDateType x)
{
	SLTNode* newnode = (SLTNode*)malloc(sizeof(SLTNode));
	newnode->date = x;
	newnode->next = NULL;
	if (*pphead == NULL)
	{
		*pphead = newnode;
	}
	else
	{
		SLTNode* cur = *pphead;
		while (cur->next != NULL)
		{
			cur = cur->next;
		}
		cur->next = newnode;
	}
	
}
void SLTPrint(SLTNode* phead)
{
	SLTNode* cur;
	cur = phead;
	while (cur)
	{
		printf("%d->", cur->date);
		cur = cur->next;
	}
	printf("NULL");
}
void SLTPopBack(SLTNode** pphead)
{
	SLTNode* prev = NULL;
	SLTNode* cur = *pphead;
	if (*pphead == NULL)
	{
		return;
	}
	else if (cur->next == NULL)
	{
		*pphead = NULL;
	}
	else
	{
		while (cur->next != NULL)
		{
			prev = cur;
			cur = cur->next;

		}
		free(cur);
		prev->next = NULL;
	}
	
}