#include "deque.h"

void initDeque(Deque *pd) {
    pd->head = (Node*)malloc(sizeof(Node));
    pd->tail = (Node*)malloc(sizeof(Node));

    pd->head->next = pd->tail;
    pd->head->prev = NULL;

    pd->tail->next = NULL;
    pd->tail->prev = pd->head;
}

int isDEmpty(Deque *pd) { 
    return pd->head->next == pd->tail ? TRUE : FALSE;
}

void frontEnqueue(Deque *pd, Data data) { 
    Node *newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = pd->head->next;
    pd->head->next->prev = newNode;
    newNode->prev = pd->head;
    pd->head->next = newNode;
}

Data frontDequeue(Deque *pd) {
    if( isDEmpty(pd) ) exit(-1);

    Node *delNode = pd->head->next;
    Data delData = delNode->data;

    pd->head->next = delNode->next;
    delNode->next->prev = pd->head;

    free(delNode);
    delNode = NULL;

    return delData;
}

Data frontPeek(Deque *pd) { 
    if( isDEmpty(pd) ) exit(-1);
    return pd->head->next->data;
}

void rearEnqueue(Deque *pd, Data data) {
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->data = data;
    newNode->prev = pd->tail->prev;
    pd->tail->prev->next = newNode;
    newNode->next = pd->tail;
    pd->tail->prev = newNode;
}

Data rearDequeue(Deque *pd) {
    if( isDEmpty(pd) ) exit(-1);

    Node *delNode = pd->tail->prev;
    Data delData = delNode->data;

    pd->tail->prev = delNode->prev;
    delNode->prev->next = pd->tail;

    free(delNode);
    delNode = NULL;

    return delData;
}

Data rearPeek(Deque *pd) {
    if( isDEmpty(pd) ) exit(-1);
    return pd->tail->prev->data;
}

Node * nextNode(Node* node, int cnt) {
    if( node == NULL) return NULL;
    if( cnt == 0 ) return node;
    nextNode(node->next, cnt-1);
}

int selectPosEnqueue(Deque *pd, Data data, int pos) {
    Node *selectedNode = nextNode(pd->head->next, pos-1);
    if( !selectedNode ) return RC_ERR;

    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = selectedNode->next;
    newNode->next->prev = newNode;
    newNode->prev = selectedNode;
    selectedNode->next = newNode;
    return RC_NRM;
}



