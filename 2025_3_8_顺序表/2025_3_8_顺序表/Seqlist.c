#include"Seqlist.h"
int main()
{
	SL test_sl;
	SeqListInit(&test_sl);
	SeqListPushFront(&test_sl, 4);
	SeqListPushFront(&test_sl, 1);
	SeqListPushFront(&test_sl, 1);
	SeqListPushBack(&test_sl, 5);
	SeqListPushBack(&test_sl, 1);
	SeqListPushBack(&test_sl, 4);
	SeqListPrint(&test_sl);
	printf("\n");
	SeqListPopFront(&test_sl);
	SeqListPrint(&test_sl);
}