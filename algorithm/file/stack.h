#ifndef __STACK_H__
#define __STACK_H__

#include "common.h"

#define STACK_SIZE 8

typedef int SData;

typedef struct _stack
{
    int curPos;
    SData stackArr[STACK_SIZE];
} Stack;

void stackInit(Stack *ps);
int push(Stack *ps, SData data);
SData pop(Stack *ps);
SData peek(Stack *ps);
int isEmpty(Stack *ps);

#endif

