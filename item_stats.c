#include <stdio.h>
#include "item.h"
void print_statistics(const Item *items, size_t count) {
    size_t borrowed = 0;
    for (size_t i = 0; i < count; ++i) borrowed += items[i].borrowed != 0;
    printf("Total: %zu, Borrowed: %zu, Available: %zu\n", count, borrowed, count - borrowed);
}
