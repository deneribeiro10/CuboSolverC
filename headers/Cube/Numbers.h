#ifndef NUMBERS_H
#define NUMBERS_H
    struct numbers {
        int value;
        int heuristic;
        int cost;
    };

    typedef struct numbers Numbers;
    int Heuristic(Numbers*);
    int* value2array(int);
    int array2value(int*);
#endif