#ifndef __LINKED_LIST_H__
#define __LINKED_LIST_H__

#include "common.h"

typedef int LData;

typedef struct _node {
    LData data;
    struct _node *next;
} Node;

typedef struct _linkedlist {
    Node *head;
    Node *cur;
    Node *before;
    int numOfData;
} LinkedList;

typedef LinkedList List;

void initList(List *plist);
int firstList(List *plist, LData *data);
int nextList(List *plist, LData *data);
void insertList(List* plist, LData data);
LData deleteList(List *plist);
int countList(List *plist);

void printAllOfList(List *plist);
void printReverseAllOfList(List *plist);

#endif

