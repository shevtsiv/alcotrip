#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include <iostream>
#include "array_insert.h"
#include "utils.h"
#include "merge_sorted_arrays.h"
#include "second_min_array.h"
#include "first_non_repeat_elem.h"

using namespace testing;

TEST(InsertSubArrayToArray, SimpleInsert) {
    int array[] = {1, 2, 3, 4, 5};
    int array_size = std::size(array);
    ASSERT_THAT(array, ElementsAre(1, 2, 3, 4, 5));
    insert_subarray_into_array(array, array_size, 1, new int[2]{42, 89}, 2);
    ASSERT_THAT(array, ElementsAre(1, 42, 89, 2, 3));
}

TEST(MergeTwoSortedArrays, SimpleMerge) {
    int first[6] = {1, 3, 5, 7, 10, 13};
    int second[7] = {-5, 0, 1, 2, 9, 10, 15};
    int *merged = merge_two_sorted_arrays(first, std::size(first), second, std::size(second));
    int should_be[std::size(first) + std::size(second)] = {-5, 0, 1, 1, 2, 3, 5, 7, 9, 10, 10, 13, 15};
    ASSERT_TRUE(arrays_cmp(merged, should_be, std::size(should_be)));
    delete[] merged;
}

TEST(GetSecondMinimumOfArray, SimpleGet) {
    int array[10] = {5, 3, 0, 10, 16, -6, 0, -6, -10, 3};
    int second_minimum_index = get_second_minimum(array, std::size(array));
    ASSERT_EQ(second_minimum_index, 5);
}

TEST(GetFirstNonRepeatElementOfArray, SimpleGetFirst) {
    int array[10] = {1, 9, 4, 5, 2, 2, 9, 1, 43, 10};
    int first_non_repeat_element = first_non_repeat(array, std::size(array));
    ASSERT_EQ(first_non_repeat_element, 2);
}

TEST(GetFirstNonRepeatElementOfArray, AllElementsRepeat) {
    int array[8] = {0, 1, 2, 3, 0, 1, 2, 3};
    int should_be_negative = first_non_repeat(array, std::size(array));
    ASSERT_EQ(should_be_negative, -999);
}

int main(int argc, char **argv) {
    InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
