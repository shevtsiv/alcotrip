int get_numerical_root(unsigned long long number) {
    int sum = 0;
    while (number > 0) {
        sum += number % 10;
        number /= 10;
    }
    while (sum / 10 > 0) {
        int temp_sum = 0;
        while (sum > 0) {
            temp_sum += sum % 10;
            sum /= 10;
        }
        sum = temp_sum;
    }
    return sum;
}
