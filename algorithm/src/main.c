#include "common.h"
#include "dbg.h"
#include "listqueue.h"

int main(int argc, char *argv[])
{
    Queue queue;

    queueInit(&queue);

    enqueue(&queue, 1);
    enqueue(&queue, 2);
    enqueue(&queue, 3);
    enqueue(&queue, 4);
    enqueue(&queue, 5);

    debug(" Dequeue %d ", dequeue(&queue));
    debug(" Dequeue %d ", dequeue(&queue));
    debug(" Dequeue %d ", dequeue(&queue));
    debug(" Dequeue %d ", dequeue(&queue));

    enqueue(&queue, 6);
    enqueue(&queue, 7);
    enqueue(&queue, 8);
    enqueue(&queue, 9);

    debug(" Dequeue %d ", dequeue(&queue));

    enqueue(&queue, 10);

    debug("=========================");

    debug(" Dequeue %d ", dequeue(&queue));
    debug(" Dequeue %d ", dequeue(&queue));
    debug(" Dequeue %d ", dequeue(&queue));
    debug(" Dequeue %d ", dequeue(&queue));
    debug(" Dequeue %d ", dequeue(&queue));

    enqueue(&queue, 100);
    debug(" Dequeue %d ", dequeue(&queue));

    return 0;
}


