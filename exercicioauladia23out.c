#include <stdio.h>

void main(){

int option = 0, i = 0;

while (i<1)
{
printf("1 - Quadrado\n");
printf("2 - Triangulo\n");
printf("3 - Circulo\n");
printf("4 - Sair\n");
printf("Escolha a opção que deseja:");
scanf("%d", &option);

 switch (option)
    {
    case 1: 
         i = 1;
        
     break;

    case 2:
        i = 1;

        break;

    case 3:
        i = 1;


        break;

    case 4:
        i = 1;

        break;

    default:
        printf("Tente novamente\n");
        i = 0;

        break;
    }

   


}
}