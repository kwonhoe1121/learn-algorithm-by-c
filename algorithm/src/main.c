#include "common.h"
#include "linkedlist.h"

int main(int argc, char *argv[])
{
    List list;
    LData data;

    initList(&list);

    //삽입
    insertList(&list, 1);
    insertList(&list, 2);
    insertList(&list, 3);
    insertList(&list, 4);
    insertList(&list, 5);
    insertList(&list, 6);
    insertList(&list, 7);
    insertList(&list, 8);
    insertList(&list, 9);
    insertList(&list, 10);

    //리스트 데이터 총 개수
    debug("listCount! %d", countList(&list));

    //참조(조회)
    if(firstList(&list, &data)) {
        debug("firstList! %d ", data);
        while(nextList(&list, &data)){
            debug("nextList!! %d ", data);
        }
    }

    //삭제
    if(firstList(&list, &data)) {
        if(data == 3) {
            deleteList(&list);
            debug("delete data 3!");
        }
        else {
            while(nextList(&list, &data)){
                if(data == 3) {
                    deleteList(&list);
                    debug("delete data 3!");
                    break;
                }
            }
        }
    }

    debug("listCount after delete data 3 ! %d", countList(&list));

    //참조(조회)
    printAllOfList(&list);
    printReverseAllOfList(&list);

    return 0;
}


