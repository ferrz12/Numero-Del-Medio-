#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1;
    int num2;
    int num3;
    int maximo;
    int minimo;
    int numeroDelMedio;

    printf("Ingrese numero 1: \n");
    scanf("%d", &num1);

    maximo = num1;
    minimo = num1;

    printf("Ingrese numero 2: \n");
    scanf("%d", &num2);

    if(num2 < minimo){
        minimo = num2;
    }else{
        if(num2 > maximo){
            maximo = num2;
        }
    }

    printf("Ingrese numero 3: \n");
    scanf("%d", &num3);

    if(num3 < minimo){
        minimo = num3;
    }else{
        if(num3 > maximo){
            maximo = num3;
        }
    }



    return 0;
}
