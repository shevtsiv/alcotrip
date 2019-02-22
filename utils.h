#ifndef ALCOTRIP_UTILS_H
#define ALCOTRIP_UTILS_H

template<class T>
void print_array(T array[], int array_size) {
    std::cout << "[";
    for (int i = 0; i < array_size; i++) {
        std::cout << array[i];
        if (i == array_size - 1)
            std::cout << "]";
        else
            std::cout << ", ";
    }
    std::cout << std::endl;
}

template<class T>
bool arrays_cmp(T *first_array, T *second_array, size_t size) {
    for (size_t i = 0; i < size; i++) {
        if (first_array[i] != second_array[i]) {
            return false;
        }
    }
    return true;
}

#endif //ALCOTRIP_UTILS_H
