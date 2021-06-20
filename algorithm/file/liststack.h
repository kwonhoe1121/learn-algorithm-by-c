#ifndef __LIST_STACK_H__
#define __LIST_STACK_H__

#include "common.h"
#include "linkedlist.h"

typedef int Data;

typedef struct _liststack
{
    List listStack;
} ListStack;

typedef ListStack Stack;

void stackInit(Stack *ps);
int push(Stack *ps, Data data);
Data pop(Stack *ps);
Data peek(Stack *ps);
int isEmpty(Stack *ps);

#endif
