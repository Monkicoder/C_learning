#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
typedef struct slist
{
	int n;
	struct list* next;
}SLNode;//单链表
typedef struct list
{
	struct list* prev;
	struct list* next;
	int n;
}LNode;//双向带头循环链表

bool TASK_2()
{
	LNode* phead = NULL;
	int n = 0;
	LNode* tail = NULL;
	LNode* cur = NULL;
	int count = 0;
	while (scanf("%d", &n) == 1)
	{

		LNode* newnode = (LNode*)malloc(sizeof(LNode));
		count++;
		if (count >= 900)
		{
			return;
		}
		newnode->n = n;
		newnode->next = NULL;
		newnode->prev = NULL;
		if (phead == NULL)
		{
			phead = newnode;
			phead->next = phead;
			phead->prev = phead;
		}
		else
		{
			
			tail = phead->prev;
			newnode->prev = tail;
			tail->next = newnode;
			phead->prev = newnode;
			newnode->next = phead;
		}
		if (getchar() == '\n')
		{
			if (count == 1)
			{
				return true;
			}
			break;
		}
		getchar();
		getchar();
		getchar();
		n = 0;
	}
	tail = tail->next;
	cur = phead;
	while (cur != tail)
	{
		if (cur->n != tail->n)
		{
			return false;
			break;
		}
		cur = cur->next;
		tail = tail->prev;
	}
	if (cur->n == tail->n)
	{
		return true;
	}
}
int main()
{
	printf("%s", TASK_2() ? "true" : "false");
}

