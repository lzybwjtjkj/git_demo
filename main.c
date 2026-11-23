#include <stdio.h>
#include "item.h"
int main(void) {
    Item items[10]; size_t count = 0;
    add_item(items, &count, 10, 1, "Umbrella", 0);
    add_item(items, &count, 10, 2, "Calculator", 1);
    add_item(items, &count, 10, 3, "Lamp", 0);
    printf("Items entered: %zu\n", count);
    print_statistics(items, count);
    return 0;
}
