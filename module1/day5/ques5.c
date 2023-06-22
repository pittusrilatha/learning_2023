5. Write a program to demonstrate the swapping the fields of two structures using pointers

#include <stdio.h>

struct Point {
    int x;
    int y;
};

void swapPoints(struct Point* p1, struct Point* p2) {
   
    int tempX = p1->x;
    p1->x = p2->x;
    p2->x = tempX;

   
    int tempY = p1->y;
    p1->y = p2->y;
    p2->y = tempY;
}

int main() {
    struct Point point1, point2;

    printf("Enter x coordinate for Point 1: ");
    scanf("%d", &point1.x);
    printf("Enter y coordinate for Point 1: ");
    scanf("%d", &point1.y);

    printf("Enter x coordinate for Point 2: ");
    scanf("%d", &point2.x);
    printf("Enter y coordinate for Point 2: ");
    scanf("%d", &point2.y);

    printf("\nBefore swapping:\n");
    printf("Point 1 - x: %d, y: %d\n", point1.x, point1.y);
    printf("Point 2 - x: %d, y: %d\n", point2.x, point2.y);
    printf("\n");

   
    swapPoints(&point1, &point2);

    printf("After swapping:\n");
    printf("Point 1 - x: %d, y: %d\n", point1.x, point1.y);
    printf("Point 2 - x: %d, y: %d\n", point2.x, point2.y);

    return 0;
}