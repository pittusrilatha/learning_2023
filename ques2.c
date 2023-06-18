2. Write a program to swap any type of data passed to an function.

Topics to be covered
- Pointers
- Type Casting

#include <stdio.h>

void swap(void *a, void *b, size_t size) {
    char temp[size];

    char *ptrA = (char *)a;
    char *ptrTemp = temp;
    for (size_t i = 0; i < size; i++) {
        *ptrTemp++ = *ptrA++;
    }

    char *ptrB = (char *)b;
    ptrA = (char *)a;
    for (size_t i = 0; i < size; i++) {
        *ptrA++ = *ptrB++;
    }

    ptrTemp = temp;
    ptrB = (char *)b;
    for (size_t i = 0; i < size; i++) {
        *ptrB++ = *ptrTemp++;
    }
}

int main() {
    int a = 5;
    int b = 10;

    printf("Before swap: a = %d, b = %d\n", a, b);

    swap(&a, &b, sizeof(int));

    printf("After swap: a = %d, b = %d\n", a, b);

    double x = 2.5;
    double y = 7.8;

    printf("Before swap: x = %lf, y = %lf\n", x, y);

    swap(&x, &y, sizeof(double));

    printf("After swap: x = %lf, y = %lf\n", x, y);

    return 0;
}