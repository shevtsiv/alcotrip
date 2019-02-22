#ifndef ALCOTRIP_ARRAY_INSERT_H
#define ALCOTRIP_ARRAY_INSERT_H

template<class T>
void shift_array_elements_by(T array[], int array_size, int shift_by, int start_from);

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

#endif //ALCOTRIP_ARRAY_INSERT_H
