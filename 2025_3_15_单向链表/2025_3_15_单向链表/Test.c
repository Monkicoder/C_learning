#include "SList.h"
void Test()
{
	SLTNode* phead = NULL;
	SLTPushBack(&phead, 1);
	SLTPushBack(&phead, 1);
	SLTPushBack(&phead, 4);
	SLTPushBack(&phead, 5);
	SLTPushBack(&phead, 1);
	SLTPushBack(&phead, 4);
	SLTPopBack(&phead);
	SLTPopBack(&phead);
	SLTPopBack(&phead);
	SLTPopBack(&phead);
	SLTPopBack(&phead);
	
	SLTPrint(phead);
}
int main()
{
	Test();
}