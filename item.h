#ifndef ITEM_H
#define ITEM_H
#include <stddef.h>
typedef struct { int id; const char *name; int borrowed; } Item;
int add_item(Item *items, size_t *count, size_t capacity, int id, const char *name, int borrowed);
void print_statistics(const Item *items, size_t count);
#endif
