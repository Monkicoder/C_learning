#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#define MAX_SIZE 100 
typedef int seq_type;
typedef struct seq_list
{
	seq_type arr[MAX_SIZE];
	int size;
}SL;
//处理，定义顺序表

void seq_list_in_it(SL* ps);//初始化顺序表，ps为顺序表的地址
void seq_list_push_back(SL* ps, seq_type x);//尾插顺序表，x为待插数据
void seq_list_push_front(SL* ps, seq_type x);//头插顺序表，x为待插数据
void seq_list_pop_back(SL* ps);//尾删顺序表
void seq_list_pop_front(SL* ps);//尾删顺序表
