#ifndef _SEQLIST_H_
#define _SEQLIST_H_

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

// ˳���Ķ�̬�洢
typedef int SLDataType;
typedef struct SeqList
{
	SLDataType* array; // ָ��̬���ٵ�����
	size_t size; // ��Ч���ݸ���
	size_t capicity; // �����ռ�Ĵ�С
}SeqList;
// ������ɾ��Ľӿ�
void SeqListInit(SeqList* psl, size_t capacity);//�ÿ�
void SeqListDestory(SeqList* psl);//ɾ��
void CheckCapacity(SeqList* psl);//���ٿռ�
void SeqListPushBack(SeqList* psl, SLDataType x);//β��
void SeqListPopBack(SeqList* psl);//βɾ
void SeqListPushFront(SeqList* psl, SLDataType x);//ͷ��
void SeqListPopFront(SeqList* psl);//β��
int SeqListFind(SeqList* psl, SLDataType x);//����Ԫ��ʱ�临�Ӷ�O(n)
void SeqListInsert(SeqList* psl, size_t pos, SLDataType x);//�м��
void SeqListErase(SeqList* psl, size_t pos);//�м�ɾ
void SeqListRemove(SeqList* psl, SLDataType x);//ɾԪ��
void SeqListModify(SeqList* psl, size_t pos, SLDataType x);//��Ԫ��
void SeqListPrint(SeqList* psl);//��ӡ
// ��չ������ʵ��
void SeqListBubbleSort(SeqList* psl);//ð������
int SeqListBinaryFind(SeqList* psl, SLDataType x);//���ֲ���(�򵥷���˼��)ʱ�临�Ӷ�O(logn)
// ����Ҫ��ʱ�临�Ӷȣ�O(N) �ռ临�Ӷ� O(1)
void SeqListRemoveAll(SeqList* psl, SLDataType x);//ȥ��
#endif //_SEQLIST_H_