#ifndef __ARRAY_QUEUE_H__
#define __ARRAY_QUEUE_H__

#include "common.h"

#define QUEUE_SIZE 8

/**
 * Circular Queue 구현 시 메모리 공간 1를 비워둔다.
 * point1 - enqueue 시 조건
 * point2 - dequeue 시 nextQIndex(pq-head) 인덱스의 값 pop
 *      => head 인덱스 값은 항상 빈 값을 유지.
 */

typedef int QData;

typedef struct _arrayqueue {
    int head;
    int tail;
    QData queArr[QUEUE_SIZE];
} ArrayQueue;

typedef ArrayQueue Queue;

void queueInit(Queue *pq);
int enqueue(Queue *pq, QData data);
QData dequeue(Queue *pq);
QData qpeek(Queue *pq);
int isQEmpty(Queue *pq);
int nextQIndex(int idx);

#endif

