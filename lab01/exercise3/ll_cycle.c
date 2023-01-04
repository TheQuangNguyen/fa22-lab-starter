#include <stddef.h>
#include "ll_cycle.h"

int ll_has_cycle(node *head) {
    /* TODO: Implement ll_has_cycle */
    node *slow_ptr = head;
    node *fast_ptr = head;

     do {
        for (size_t i = 0; i < 2; i++) {
            if (fast_ptr == NULL) {
                return 0;
            }
            fast_ptr = fast_ptr->next;
        }
        slow_ptr = slow_ptr->next;
    } while (fast_ptr != slow_ptr);

    return 1;
}
