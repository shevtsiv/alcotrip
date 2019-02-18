#include <iostream>
#include "array_insert.h"
#include "utils.h"
#include "merge_sorted_arrays.h"
#include "second_min_array.h"
#include "first_non_repeat_elem.h"

int main() {
    int array[] = {1, 2, 3, 4, 5};
    int array_size = std::size(array);
    std::cout << "Array before insert(Should be: [1, 2, 3, 4, 5]): " << std::endl;
    print_array(array, array_size);
    insert_subarray_into_array(array, array_size, 1, new int[2]{42, 89}, 2);
    std::cout << "Array after insert(Should be: [1, 42, 89, 2, 3]): " << std::endl;
    print_array(array, array_size);

    // Merge two sorted arrays
    int first[6] = {1, 3, 5, 7, 10, 13};
    int second[7] = {-5, 0, 1, 2, 9, 10, 15};
    int *merged = merge_two_sorted_arrays(first, std::size(first), second, std::size(second));
    std::cout << "Merged array(Should be: [-5, 0, 1, 1, 2, 3, 5, 7, 9, 10, 10, 13, 15]): " << std::endl;
    print_array(merged, std::size(first) + std::size(second));
    delete[] merged;

    // Get second minimum of array
    int smin_array[10] = {5, 3, 0, 10, 16, -6, 0, -6, -10, 3};
    int second_minimum_index = get_second_minimum(smin_array, std::size(smin_array));
    std::cout << "Second minimum of an array(Should be 5): " << second_minimum_index << std::endl;

    // Get first non repeat element of an array
    int first_non_repeat_array[10] = {1, 9, 4, 5, 2, 2, 9, 1, 43, 10};
    int first_non_repeat_element = first_non_repeat(first_non_repeat_array, std::size(smin_array));
    std::cout << "First non repeat element of an array(Should be 2): " << first_non_repeat_element << std::endl;
    int all_elem_repeat_array[8] = {0, 1, 2, 3, 0, 1, 2, 3};
    int should_be_negative = first_non_repeat(all_elem_repeat_array, std::size(all_elem_repeat_array));
    std::cout << "First non repeat element of an array(Should be -999): " << should_be_negative << std::endl;
    return 0;
}
