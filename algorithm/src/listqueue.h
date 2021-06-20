#ifndef __LIST_QUEUE_H__
#define __LIST_QUEUE_H__

#include "common.h"

typedef int QData;

typedef struct _node {
    QData data;
    struct _node *next;
} Node;

typedef struct _listqueue {
    Node *front;
    Node *rear;
} ListQueue;

typedef ListQueue Queue;

void queueInit(Queue *pq);
int enqueue(Queue *pq, QData data);
QData dequeue(Queue *pq);
QData qpeek(Queue *pq);
int isQEmpty(Queue *pq);

#endif

