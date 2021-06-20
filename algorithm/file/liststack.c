#include "liststack.h"

void stackInit(Stack *ps) { 
    initList(&ps->listStack);
}

int push(Stack *ps, Data data) {
    insertList(&ps->listStack, data);
}

Data pop(Stack *ps) { 
    if( isEmpty( ps ) ) exit(-1);
    Data firstData;
    firstList(&ps->listStack, &firstData);
    return deleteList(&ps->listStack);
}

Data peek(Stack *ps) { 
    if( isEmpty( ps ) ) exit(-1);
    Data firstData;
    firstList(&ps->listStack, &firstData);
    return firstData;
}

int isEmpty(Stack *ps) {
    return countList(&ps->listStack) == 0 ? TRUE : FALSE;
}

