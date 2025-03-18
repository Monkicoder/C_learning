#include "homework.h"
//LinkNode* GetLink(LinkNode* phead)//pheadÎª¿ÕÍ·Ö¸Õë
//{
//	int n = 0;
//	LinkNode* cur = NULL;
//	while (scanf("%d %d", &n) == 1)
//	{
//		LinkNode* newnode = (LinkNode*)malloc(sizeof(LinkNode));
//		newnode->number = n;
//		newnode->next = NULL;
//		if (phead == NULL)
//		{
//			phead = newnode;
//			cur = phead;
//		}
//		else
//		{
//			cur->next = newnode;
//			cur = cur->next;
//		}
//		if (getchar() == '\n')
//		{
//			break;
//		}
//		getchar();
//		getchar();
//		getchar();
//	}
//	return phead;
//}
//int FindMiddleNumber(LinkNode* phead)
//{
//	LinkNode* fast = phead;
//	LinkNode* slow = phead;
//	while (fast->next != NULL)
//	{
//		fast = fast->next->next;
//		slow = slow->next;
//	}
//	return slow->number;
//}
//void GetLinkAndCalcSum(LinkNode* phead)
//{
//	int i = 0;
//	int j = 0;
//	LinkNode* cur = NULL;
//	for (int k = 0; k < 10; k++)
//	{
//		scanf("%d %d", &i, &j);
//		LinkNode* newnode = (LinkNode*)malloc(sizeof(LinkNode));
//		newnode->item.i = i;
//		newnode->item.j = j;
//		newnode->next = NULL;
//		if (phead == NULL)
//		{
//			phead = newnode;
//			cur = phead;
//		}
//		else
//		{
//			cur->next = newnode;
//			cur = cur->next;
//		}
//	}
//	cur = phead;
//	int sum_i = 0;
//	int sum_j = 0;
//	for (int k = 0; k < 10; k++)
//	{
//		sum_i += cur->item.i;
//		sum_j += cur->item.j;
//		cur = cur->next;
//	}
//	printf("%d+%di", sum_i, sum_j);
//}
//void PushDataInList(LinkListNode* phead)
//{
//	int n = 0;
//	int data = 0;
//	int k = 0;
//	LinkListNode* cur = NULL;
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &data);
//		LinkListNode* newnode = (LinkListNode*)malloc(sizeof(LinkListNode));
//		newnode->data = data;
//		newnode->next = NULL;
//		if (phead == NULL)
//		{
//			phead = newnode;
//			cur = phead;
//		}
//		else
//		{
//			cur->next = newnode;
//			cur = cur->next;
//		}
//	}
//	scanf("%d", &k);
//	LinkListNode* prev = NULL;
//	cur = phead;
//	while (cur)
//	{
//		if (cur == phead&& cur->data == k)
//		{
//				LinkListNode* care = cur;
//				cur = cur->next;
//				free(care);
//		}
//		if (cur->data == k)
//		{
//			prev->next = cur->next;
//			free(cur);
//			cur = prev->next;
//		}
//		else
//		{
//			prev = cur;
//
//			cur = cur->next;
//		}
//	}
//	cur = phead;
//	while (cur)
//	{
//		printf("%d ", cur->data);
//		cur = cur->next;
//	}
//}
void ReturnBoll(List* phead)
{
	List* cur = NULL;
	int n = 0;
	while (scanf("%d", &n) == 1)
	{
		List* newnode = (List*)malloc(sizeof(List));
		newnode->data = n;
		newnode->next = NULL;
		newnode->prev = NULL;
		if (phead == NULL)
		{
			phead = newnode;
			cur = phead;
		}
		else
		{
			newnode->prev = cur;
			newnode->next = cur;
			cur->next = newnode;
			cur->prev = newnode;
			cur = cur->next;
		}
			if (getchar() == '\n')
		{
			break;
		}
		getchar();
		getchar();
		getchar();
	}
}