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
//��������˳���

void seq_list_in_it(SL* ps);//��ʼ��˳���psΪ˳���ĵ�ַ
void seq_list_push_back(SL* ps, seq_type x);//β��˳���xΪ��������
void seq_list_push_front(SL* ps, seq_type x);//ͷ��˳���xΪ��������
void seq_list_pop_back(SL* ps);//βɾ˳���
void seq_list_pop_front(SL* ps);//βɾ˳���
