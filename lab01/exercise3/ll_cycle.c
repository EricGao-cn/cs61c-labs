#include <stddef.h>
#include "ll_cycle.h"

int ll_has_cycle(node *head) {
    /* TODO: Implement ll_has_cycle */
    node* fast_ptr = head;
    node* slow_ptr = head;
    int turn = 0;
    while (fast_ptr != NULL) {
        fast_ptr = fast_ptr->next;
        if (turn % 2 == 1) {
            slow_ptr = slow_ptr -> next;
        }
        if (fast_ptr == slow_ptr) {
            return 1;
        }
        ++turn;
    }
    return 0;
}
