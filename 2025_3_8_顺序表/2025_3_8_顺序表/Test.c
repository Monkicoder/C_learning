#include"Seqlist.h"

void SeqListInit(SL* psl)
{
	memset(psl->arr, 0, sizeof(SeqDateType) * MAX_SIZE);
	psl->size = 0;
}//��ʼ��

void SeqListPushBack(SL* psl, SeqDateType x)
{
	if (psl->size >= MAX_SIZE)
	{
		printf("����");
		return;
	};
	psl->arr[psl->size] = x;
	psl->size++;
}//β��

void SeqListPushFront(SL* psl, SeqDateType x)
{
	int end = psl->size - 1;
	while (end >= 0)
	{
		psl->arr[end + 1] = psl->arr[end];
		end--;
	}
	psl->arr[0] = x;
	psl->size++;
}//ͷ��

void SeqListPrint(SL* psl)
{
	int i = 0;
	for (i = 0; i < psl->size; i++)
	{
		printf("%d ", psl->arr[i]);
	}
}//���

void SeqListPopBack(SL* psl)
{
	psl->size--;
}//βɾ

void SeqListPopFront(SL* psl)
{
	int i = 0;
	for (i = 1; i < psl->size; i++)
	{
		psl->arr[i - 1] = psl->arr[i];
	}
	psl->size--;
}//ͷɾ
