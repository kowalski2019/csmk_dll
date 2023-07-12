#include "csmkdll.h"

void doubleLinkedList_test(void);

int main(void)
{
    doubleLinkedList_test();
    return 0;
}

void doubleLinkedList_test(void)
{
    DoubleLinkedList *dllist = NULL;
    dll_append(&dllist,12);
    dll_append(&dllist,15);
    dll_append(&dllist,-34);
    dll_append(&dllist,-24);
    dll_append(&dllist,-64);
    printf("dllist size must be 5. size = %d\n",dll_size(dllist));
    dll_insert(&dllist,100,0);
    dll_insert(&dllist,50,5);
    dll_insert(&dllist,200,0);
    dll_insert(&dllist,45,8);
    //dll_print(&dllist);
    printf("dllist size must be 9. size = %d\n",dll_size(dllist));
    dll_remove(&dllist,0);
    dll_remove(&dllist,4);
    printf("dllist size must be 7. size = %d\n",dll_size(dllist));
    dll_print(&dllist);
    for(int i = 0; i < dll_size(dllist); i++){
        printf("dllist[%d] = %d\n",i,dll_get(dllist,i));
    }
    dll_clear(&dllist);
    printf("dllist size must be 0. size = %d\n",dll_size(dllist));
    dll_append(&dllist,26);
    dll_append(&dllist,52);
    printf("dllist size must be 2. size = %d\n",dll_size(dllist));
    dll_print(&dllist);
}
