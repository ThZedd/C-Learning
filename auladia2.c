#include <stdio.h>
// atualizar o gcc, gcc auladia2.c -o nome que eu quero
int main() {

/*    int x = 10;

    printf("%ld bits\n", sizeof(int));
    printf("%ld bits\n", sizeof(char));
    printf("%ld bits\n", sizeof(long));
    printf("%ld bits\n", sizeof(short));
    printf("%ld bits\n", sizeof(float));
    printf("%ld bits\n", sizeof(double));
    printf("%ld bits\n", sizeof(void));
*/

    float teste1 = 0, teste2 = 0, nota = 0, proj = 0, part = 0, aut = 0.9;
    
    printf("Introduza o valor do seu primeiro teste: ");
    scanf("%f", &teste1);
    teste1 = teste1 * 0.2;
    
    printf("Introduza o valor do seu segundo teste: ");
    scanf("%f", &teste2);
    teste2 = teste2 * 0.2;
    nota = teste1 + teste2;

    printf("Introduza o valor do seu projeto: ");
    scanf("%f", &proj);
    printf("Introduza o valor da sua autoria: ");
    scanf("%f", &aut);
    proj = (proj * (aut/100)) * 0.5;

    nota = nota + proj;

    printf("Introduza o valor da sua participação: ");
    scanf("%f", &part);
    part = part * 0.1;

    nota = nota + part;

    printf("O valor da sua nota é %1.2f\n", nota);

    
    
    return 0;
}