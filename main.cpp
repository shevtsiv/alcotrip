#include <iostream>
#include "array_insert.h"

template<class T>
void print_array(T array[], int array_size);

int main() {
    int array[] = {1, 2, 3, 4, 5};
    int array_size = std::size(array);
    std::cout << "Array before insert: " << std::endl;
    print_array(array, array_size);
    insert_subarray_into_array(array, array_size, 1, new int[1]{42}, 1);
    std::cout << "Array after insert: " << std::endl;
    print_array(array, array_size);
    return 0;
}

// Utility functions
template<class T>
void print_array(T array[], int array_size) {
    for (int i = 0; i < array_size; i++) {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;
}
