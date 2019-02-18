#ifndef ALCOTRIP_FIRST_NON_REPEAT_ELEM_H
#define ALCOTRIP_FIRST_NON_REPEAT_ELEM_H

template<class T>
int first_non_repeat(T array[], size_t array_size) {
    for (int i = 0; i < array_size; i++) {
        bool is_single = true;
        for (int j = 0; j < array_size; j++) {
            if (i == j) {
                continue;
            }
            if (array[i] == array[j]) {
                is_single = false;
                break;
            }
        }
        if (is_single) {
            return i;
        }
    }
    return -999;
}

#endif //ALCOTRIP_FIRST_NON_REPEAT_ELEM_H
