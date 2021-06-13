#include "common.h"
#include "dbg.h"

int main(int argc, char *argv[])
{
    Stack stack;

    stackInit(&stack);

    push(&stack, 1);
    push(&stack, 2);
    push(&stack, 3);
    push(&stack, 4);
    push(&stack, 5);

    debug("=================");
    debug("Push [1, 2, 3, 4, 5] in Stack");
    debug("=================");
    debug("Pop %d ", pop(&stack));
    debug("Peek %d ", peek(&stack));
    debug("Pop %d ", pop(&stack));
    debug("Pop %d ", pop(&stack));
    debug("Peek %d ", peek(&stack));
    debug("Pop %d ", pop(&stack));
    debug("Pop %d ", pop(&stack));
    debug("=================");

}


