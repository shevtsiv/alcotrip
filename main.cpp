#include <iostream>
#include "array_insert.h"
#include "utils.h"
#include "merge_sorted_arrays.h"

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
    return 0;
}
