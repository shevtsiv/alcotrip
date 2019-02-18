#ifndef ALCOTRIP_SECOND_MIN_ARRAY_H
#define ALCOTRIP_SECOND_MIN_ARRAY_H

template<class T>
int get_second_minimum(T array[], size_t array_size) {
    T min = array[0];
    for (int i = 1; i < array_size; i++) {
        if (array[i] < min) {
            min = array[i];
        }
    }
    int second_minimum_index = 0;
    for (int i = 1; i < array_size; i++) {
        if (array[i] < array[second_minimum_index] && array[i] != min) {
            second_minimum_index = i;
        }
    }
    return second_minimum_index;
}

#endif //ALCOTRIP_SECOND_MIN_ARRAY_H
