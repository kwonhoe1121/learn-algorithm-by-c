#include "stack.h"

void stackInit(Stack *ps)
{
    ps->curPos = -1;
}
    
int push(Stack *ps, SData data)
{
    if( ps->curPos == (STACK_SIZE-1) ) {
        debug("Stack is Full!!");
        return RC_ERR;
    }

    ps->stackArr[++(ps->curPos)] = data;
    return RC_NRM;
}

SData pop(Stack *ps)
{
    if( isEmpty(ps) ) {
        debug("Stack is Empty!!");
        exit(-1);
    }
    return ps->stackArr[(ps->curPos)--];
}

SData peek(Stack *ps){
    if( isEmpty(ps) ) {
        debug("Stack is Empty!!");
        exit(-1);
    }
    return ps->stackArr[ps->curPos];
}

int isEmpty(Stack *ps){
    return ps->curPos < 0 ? TRUE : FALSE;
}


