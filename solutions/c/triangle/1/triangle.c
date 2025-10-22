#include "triangle.h"


int is_equilateral(triangle_t sides) {
    double side1 = sides.a;
    double side2 = sides.b;
    double side3 = sides.c;

    if (!is_valid(sides)) {
        return 0;
    }

    if (side1 == side2 && side2 == side3) {
        return 1;
    }
    return 0;
}

int is_isosceles(triangle_t sides) {
    double side1 = sides.a;
    double side2 = sides.b;
    double side3 = sides.c;

    if (!is_valid(sides)) {
        return 0;
    }

    if (side1 == side2 
        || side2 == side3 
        || side3 == side1) {
        return 1;
    }
    return 0;
}

int is_scalene(triangle_t sides) {
    double side1 = sides.a;
    double side2 = sides.b;
    double side3 = sides.c;

    if (!is_valid(sides)) {
        return 0;
    }

    if (side1 != side2 && side2 != side3 && side3 != side1) {
        return 1;
    }
    return 0;
}

int is_valid(triangle_t sides) {
    if (sides.a <= 0 || sides.b <= 0 || sides.c <= 0) {
        return 0;
    }
    if (sides.a + sides.b < sides.c 
        || sides.a + sides.c < sides.b 
        || sides.b + sides.c < sides.a) {
        return 0;
    }
    return 1;
}


