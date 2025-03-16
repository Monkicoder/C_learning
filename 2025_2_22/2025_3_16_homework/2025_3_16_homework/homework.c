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
SLNode* TASK_1()
{
	SLNode* phead = NULL;
	SLNode* cur = phead;

	int ListNodeNum = 0;
	scanf("%d", &ListNodeNum);
	for (int i = 0; i < ListNodeNum; i++)
	{
		SLNode* newnode = (SLNode*)malloc(sizeof(SLNode));
		newnode->next = NULL;
		scanf("%d", &newnode->n);
		if (phead == NULL)
		{
			phead = newnode;
			cur = phead;

		}
		else
		{
			cur->next = newnode;
			cur = cur->next;

		}
	}
	unsigned int k = 0;
	scanf("%d", &k);
	SLNode* prev = phead;
	cur = phead;
	if (k > ListNodeNum || k <= 0)
	{
		//prev = NULL;
		return prev;
	}
	else
	{
		for (int j = 0; j < k; j++)
		{
			cur = cur->next;
		}
		while (cur)
		{
			prev = prev->next;
			cur = cur->next;
		}
		printf("%d", prev->n);
	}


}
//题目一
bool TASK_2()
{
	int num = 0;
	
	int n[900] = {0};
	int i = 0;
	while (scanf("%d", &n[i++]) == 1)
	{

		if (getchar() == '\n')
		{
			break;
		}
		getchar();
		getchar();
		getchar();
	}
	printf("%d", n[i]);
}
int main()
{
	TASK_2();
}







