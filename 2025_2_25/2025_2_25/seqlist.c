#include "seqlist.h"
void seq_list_in_it(SL* ps)
{
	memset(ps->arr, 0, sizeof(seq_type) * MAX_SIZE);
	ps->size = 0;
}