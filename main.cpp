#include <iostream>
#include "array_insert.h"
#include "utils.h"
#include "merge_sorted_arrays.h"
#include "second_min_array.h"

int main() {
    int array[] = {1, 2, 3, 4, 5};
    int array_size = std::size(array);
    std::cout << "Array before insert: " << std::endl;
    print_array(array, array_size);
    insert_subarray_into_array(array, array_size, 1, new int[2]{42, 89}, 2);
    std::cout << "Array after insert: " << std::endl;
    print_array(array, array_size);

    // Merge two sorted arrays
    int first[6] = {1, 3, 5, 7, 10, 13};
    int second[7] = {-5, 0, 1, 2, 9, 10, 15};
    int *merged = merge_two_sorted_arrays(first, std::size(first), second, std::size(second));
    std::cout << "Merged array: " << std::endl;
    print_array(merged, std::size(first) + std::size(second));
    delete[] merged;

    // Get second minimum of array
    int smin_array[10] = {5, 3, 0, 10, 16, -6, 0, -6, -10, 3};
    std::cout << "Second minimum of an array: " << get_second_minimum(smin_array, std::size(smin_array)) << std::endl;
    return 0;
}
