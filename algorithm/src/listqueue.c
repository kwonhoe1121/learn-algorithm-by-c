#include "listqueue.h"

void queueInit(Queue *pq) { 
    pq->front = NULL;
    pq->rear = NULL;
}

int enqueue(Queue *pq, QData data) {
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->next = NULL; 
    newNode->data = data;

    if( isQEmpty(pq) ) {
        pq->front = newNode;
        pq->rear = newNode;
    } else {
        pq->rear->next = newNode;
        pq->rear = newNode;
    }

    return TRUE;
}

QData dequeue(Queue *pq) {
    if( isQEmpty(pq) ) exit(-1);

    Node *delNode = pq->front;
    QData delData = delNode->data;

    pq->front = pq->front->next;

    free(delNode);
    delNode = NULL;

    return delData;
}

QData qpeek(Queue *pq) { 
    if( isQEmpty(pq) ) exit(-1);
    return pq->front->data;
}

int isQEmpty(Queue *pq) {
    return pq->front == NULL ? TRUE : FALSE;
}

