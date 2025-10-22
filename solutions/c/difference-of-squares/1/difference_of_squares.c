#include "difference_of_squares.h"

unsigned int square(unsigned int number) {
    return number * number;
}

unsigned int sum_of_squares(unsigned int number) {
    unsigned int i = 0, sum = 0;

    for (i = 1; i <= number; i++) {
        sum += square(i);
    }
    return sum;
}

unsigned int square_of_sum(unsigned int number) {
    unsigned int i = 0, sum = 0;

    for (i = 1; i <= number; i++) {
        sum += i;
    }
    return square(sum);
}

unsigned int difference_of_squares(unsigned int number) {
    return square_of_sum(number) - sum_of_squares(number);
}
