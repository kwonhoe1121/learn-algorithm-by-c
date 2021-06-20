#include "common.h"
#include "liststack.h"

int main(int argc, char *argv[])
{
    Stack stack;
    int i;

    stackInit(&stack);
    for(i=0; i<10; i+=1){
        push(&stack, i+1);
    }

    debug("liststack peek: %d", peek(&stack));
    debug("liststack peek: %d", peek(&stack));

    debug("liststack pop: stack [10, 9, 8, 7, 6, 5, 4, 3, 2, 1]");
    for(i=0; i<10; i+=1){
        debug(" %d ", pop(&stack));
    }

    return 0;
}


