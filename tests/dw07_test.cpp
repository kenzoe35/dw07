#include <gtest/gtest.h>
#include "dw.h"

TEST(SumArray, HandlesPositiveValues) {
    int values[] = {1, 2, 3, 4, 5};
    EXPECT_EQ(sum_array(values, 5), 15);
}

TEST(SumArray, HandlesZeroSize) {
    int values[] = {0};
    EXPECT_EQ(sum_array(values, 0), 0);
}

TEST(SumArray, HandlesNegativeValues) {
    int values[] = {-1, -2, 3, 4};
    EXPECT_EQ(sum_array(values, 4), 4);
}
