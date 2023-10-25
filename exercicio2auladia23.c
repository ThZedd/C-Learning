#include <stdio.h>

void main() {

    int i = 0, num;
    printf("Introduza um número: ");
    scanf("%d", &num);
    for(i; i<num; i+=2) {
            printf("%d\n", i);
        }
    }

