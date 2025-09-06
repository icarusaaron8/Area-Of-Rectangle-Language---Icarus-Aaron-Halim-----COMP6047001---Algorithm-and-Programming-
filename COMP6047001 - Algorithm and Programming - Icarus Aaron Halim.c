#include <stdio.h>

int main() {
    int length;
    int width;
    int area;

    scanf("%d", &length);
    scanf("%d", &width);

    area = length * width;

    printf("Length: %d\n", length);
    printf("Width: %d\n", width);
    printf("Area of rectangle: %d\n", area);

    return 0;
}
