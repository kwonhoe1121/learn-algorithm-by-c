#include "common.h"
#include "dbg.h"
#include "deque.h"

int main(int argc, char *argv[])
{
    Deque deque;

    initDeque(&deque);

    frontEnqueue(&deque, 1);
    frontEnqueue(&deque, 2);
    frontEnqueue(&deque, 3);

    rearEnqueue(&deque, 4);
    rearEnqueue(&deque, 5);

    debug("frontDequeue!! expected [3, 2, 1, 4, 5]");
    debug("frontPeek!! %d", frontPeek(&deque));
    while( !isDEmpty(&deque) ) {
        debug("%d", frontDequeue(&deque));
    }

    frontEnqueue(&deque, 1);
    frontEnqueue(&deque, 2);
    frontEnqueue(&deque, 3);

    rearEnqueue(&deque, 4);
    rearEnqueue(&deque, 5);

    debug("rearDequeue!! expected [5, 4, 1, 2, 3]");
    debug("rearPeek!! %d", rearPeek(&deque));
    while( !isDEmpty(&deque) ) {
        debug("%d", rearDequeue(&deque));
    }

    frontEnqueue(&deque, 1);
    frontEnqueue(&deque, 2);
    frontEnqueue(&deque, 3);

    rearEnqueue(&deque, 4);
    rearEnqueue(&deque, 5);

    selectPosEnqueue(&deque, 10, 2);
    debug("selectPosEnqueue 2 pos add 10!! expected [3, 10, 2, 1, 4, 5]");
    while( !isDEmpty(&deque) ) {
        debug("%d", frontDequeue(&deque));
    }
    
    return 0;
}


