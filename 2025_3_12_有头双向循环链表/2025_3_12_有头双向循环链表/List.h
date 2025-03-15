#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

typedef int ListDateType;

typedef struct ListNode
{
	struct ListNode* next;
	struct ListNode* prev;
	ListDateType x;
}ListNode;

void ListIenit(ListNode);