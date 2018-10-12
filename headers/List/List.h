#ifndef LIST_H
#define LIST_H
    struct list {
        int value;
        struct list *next;
    };

    typedef struct list List;
    List* node();
    void insertStart(List**, int);
    void insertEnd(List*, int);
    void printList(List*);
#endif