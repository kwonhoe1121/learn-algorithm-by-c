#include "linkedlist.h"

void initList(List *plist) { 
    Node *dummyNode = (Node *)malloc(sizeof(Node));
    dummyNode->next = NULL;

    plist->head = dummyNode;
    plist->numOfData = 0;
}

int firstList(List *plist, LData *data) {
    if(!plist->head->next) return FALSE;

    plist->cur = plist->head->next;
    plist->before = plist->head;
    *data = plist->cur->data;
    
    return TRUE;
}

int nextList(List *plist, LData *data) { 
    if(!plist->cur->next) return FALSE;

    plist->before = plist->cur;
    plist->cur = plist->cur->next;
    *data = plist->cur->data;

    return TRUE;
}

void insertList(List* plist, LData data) {
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode->data = data;

    newNode->next = plist->head->next;
    plist->head->next = newNode;
    plist->numOfData += 1;
}

LData deleteList(List *plist) { 
    Node *delNode = plist->cur;
    LData delData = delNode->data;

    plist->before->next = plist->cur->next;
    plist->cur = plist->before;
    plist->numOfData -= 1;
    free(delNode);
    delNode = NULL;

    return delData;
}

int countList(List *plist) {
    return plist->numOfData;
}

void showNextNode(Node *node){
    if(node == NULL) return;
    printf("%d ", node->data);
    showNextNode(node->next);
}

void showReverseNextNode(Node *node){
    if(node == NULL) return;
    showReverseNextNode(node->next);
    printf("%d ", node->data);
}

void printAllOfList(List *plist) {
    printf("[ ");
    showNextNode( plist->head->next );
    printf("] \n");
}

void printReverseAllOfList(List *plist) {
    printf("[ ");
    showReverseNextNode( plist->head->next );
    printf("] \n");
}


