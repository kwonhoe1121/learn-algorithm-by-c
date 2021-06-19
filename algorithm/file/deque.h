#ifndef __DEQUE_H__
#define __DEQUE_H__

#include "common.h"

typedef int Data;

typedef struct _node {
    Data data;
    struct _node *next;
    struct _node *prev;
} Node;

typedef struct _deque {
    Node *head;
    Node *tail;
} Deque;

void initDeque(Deque *pd);
int isDEmpty(Deque *pd);

void frontEnqueue(Deque *pd, Data data);
Data frontDequeue(Deque *pd);
Data frontPeek(Deque *pd);

void rearEnqueue(Deque *pd, Data data);
Data rearDequeue(Deque *pd);
Data rearPeek(Deque *pd);

int selectPosEnqueue(Deque *pd, Data data, int pos);

#endif

