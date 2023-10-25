#include <stdio.h>

float perimeter(float length, float width) {
    return 2*length + 2*width;
}
float area(float length, float width) {
    return length * width;
}
int main() {

    float length = 0, width = 0, p = 0;
    printf("Introduza o valor do length: ");
    scanf("%f", &length);

    printf("Introduza o valor do width: ");
    scanf("%f", &width);

    printf("%1.2f\n", perimeter(length,width));

    printf("%1.2f\n", area(length,width));


    return 0;
}