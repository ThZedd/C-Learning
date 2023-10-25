#include <stdio.h>
#include <stdbool.h>

void mai() {
    // Criar variável, i.e., pedir um bocado de memória, para guardar um número inteiro
    // O SO reserva a memória num endereço
    // O endereço de memória fica representado pelo nome "a"
    // A memória representada por "a" passa a guardar o número 1
    int a = 1;
    a; // compila, consulta a memoria referida por a
    ; // compila, mas não faz nada 
    a+1; // compila, mas o a vai continuar a ser 1
    a = a+1;
    a++;
    a += 1;
    printf("%d\n", a);

    

}

/* int sum(int a, int b){
    return a + b;
 }*/

 int f(int a){
    return a*10;
 }

 int g(int a, int b){
    int c = b+f(a);
    return c-1;
 }

 int main () {
     int a = 10;
     int b = 5;
     printf("%d\n", g(b,a));


    return 0;
 }