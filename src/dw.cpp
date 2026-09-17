#include "dw.h"

int sum_array(const int values[], int size) {
    int total = 0;
    for (int i = 0; i < size; i++) {
        total += values[i];
    }
    return total;
}
