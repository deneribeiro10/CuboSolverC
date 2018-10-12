#include "List.h"
#include <stdio.h>
#include <stdlib.h>

List *node() {
    return (List *) malloc(sizeof(List));
}

void insertStart(List **l, int val) {
    List *n = node();
    n->value = val;
    n->next = *l;
    *l = n;
}

void insertEnd(List *l, int val) {
    List *p = l;
    while(p != NULL) {
        p = p->next;
    }
    p = node();
    p->next = NULL;
    p->value = val;
}

void printList(List *l) {
    for(List *p = l; p != NULL; p = p->next) {
        printf("%d\n", p->value);
    }
}