#ifndef ALCOTRIP_EUCLIDIAN_H
#define ALCOTRIP_EUCLIDIAN_H

template<class T>
T get_greatest_common_divisor(T first, T second) {
    while (first != 0 && second != 0) {
        if (first > second) {
            first %= second;
        } else {
            second %= first;
        }
    }
    return first + second;
}

#endif //ALCOTRIP_EUCLIDIAN_H
