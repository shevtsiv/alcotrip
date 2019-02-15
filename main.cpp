#include <iostream>

template<class T>
void insert_subarray_into_array(T array[], int array_size, int insert_index, T sub_array[], int subarray_size);

template<class T>
void shift_array_elements_by(T array[], int array_size, int shift_by, int start_from);

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

template<class T>
void insert_subarray_into_array(T array[], int array_size, int insert_index, T sub_array[], int subarray_size) {
    shift_array_elements_by(array, array_size, subarray_size, insert_index);
    for (int i = insert_index, k = 0; i < insert_index + subarray_size && k < subarray_size; i++, k++) {
        array[i] = sub_array[k];
    }
}

template<class T>
void shift_array_elements_by(T array[], int array_size, int shift_by, int start_from) {
    for (int i = array_size; i > start_from; i--) {
        array[i] = array[i - shift_by];
    }
}

// Utility functions
template<class T>
void print_array(T array[], int array_size) {
    for (int i = 0; i < array_size; i++) {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;
}
