#ifndef ALCOTRIP_MERGE_SORTED_ARRAYS_H
#define ALCOTRIP_MERGE_SORTED_ARRAYS_H

template<class T>
T *merge_two_sorted_arrays(T first[], size_t first_size, T second[], size_t second_size) {
    int insert_index = 0, i = 0, j = 0;
    T *final_array = new int[first_size + second_size];
    while (i < first_size && j < second_size) {
        if (first[i] < second[j]) {
            final_array[insert_index++] = first[i++];
        } else {
            final_array[insert_index++] = second[j++];
        }
    }

    while (i < first_size) {
        final_array[insert_index++] = first[i++];
    }
    while (j < second_size) {
        final_array[insert_index++] = second[j++];
    }
    return final_array;
}

#endif //ALCOTRIP_MERGE_SORTED_ARRAYS_H
