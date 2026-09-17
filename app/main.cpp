#include <iostream>
#include "dw.h"

int main() {
    int values[]{1, 2, 3, 4, 5};

    int total{sum_array(values, 5)};

    std::cout << "Sum: " << total << std::endl;

    return 0;
}
