#include <stdio.h>
#include <stdlib.h>
#include "List.h"

int main() {

    List *lista = node();
    lista->value = 0;
    lista->next = NULL;

    insertStart(&lista, 1);
    insertStart(&lista, 2);
    printList(lista);
    
    return 0;
}