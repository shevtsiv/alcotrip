#ifndef ALCOTRIP_UTILS_H
#define ALCOTRIP_UTILS_H

template<class T>
void print_array(T array[], int array_size);

template<class T>
void print_array(T array[], int array_size) {
    for (int i = 0; i < array_size; i++) {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;
}

#endif //ALCOTRIP_UTILS_H
