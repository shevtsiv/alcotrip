#ifndef ALCOTRIP_SECOND_MIN_ARRAY_H
#define ALCOTRIP_SECOND_MIN_ARRAY_H

template<class T>
T get_second_minimum(T array[], size_t array_size) {
    T min = array[0];
    for (int i = 1; i < array_size; i++) {
        if (array[i] < min) {
            min = array[i];
        }
    }
    T second_min = array[0];
    for (int i = 1; i < array_size; i++) {
        if (array[i] < second_min && array[i] != min) {
            second_min = array[i];
        }
    }
    return second_min;
}

#endif //ALCOTRIP_SECOND_MIN_ARRAY_H
