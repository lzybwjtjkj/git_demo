#include "item.h"
int add_item(Item *items, size_t *count, size_t capacity, int id, const char *name, int borrowed) {
    if (!items || !count || !name || *count >= capacity) return 0;
    for (size_t i = 0; i < *count; ++i) if (items[i].id == id) return 0;
    items[*count] = (Item){id, name, borrowed != 0};
    ++*count;
    return 1;
}
