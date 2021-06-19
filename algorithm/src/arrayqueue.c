#include "queue.h"

void queueInit(Queue *pq)
{
    pq->head = 0;
    pq->tail = 0;
    memset(pq->queArr, 0, sizeof(pq->queArr));
}

int enqueue(Queue *pq, QData data)
{
    if( nextQIndex(pq->tail) == pq->head ) { //point1
        log_err("Queue is Full!! \n");
        exit(-1);
    }

    pq->tail = nextQIndex(pq->tail);
    pq->queArr[pq->tail] = data;
    return TRUE;
}

QData dequeue(Queue *pq)
{
    if( isQEmpty(pq) ) {
        log_err("Queue is Empty!! \n");
        exit(-1);
    }
    pq->head = nextQIndex(pq->head); //point 2
    return pq->queArr[pq->head];
}

QData qpeek(Queue *pq)
{
    if( isQEmpty(pq) ) {
        log_err("Queue is Empty!! \n");
        exit(-1);
    }
    return pq->queArr[nextQIndex(pq->head)];
}

int isQEmpty(Queue *pq)
{
    return pq->head == pq->tail ? TRUE : FALSE;
}

int nextQIndex(int idx)
{
    return idx == (QUEUE_SIZE - 1)  ? 0 : (idx + 1);
}


