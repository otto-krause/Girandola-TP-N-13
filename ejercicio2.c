#include<stdio.h>
#include<stdlib.h>

int main()
{
    int f,may;
    float numeros[5];
    float suma,promedio;

    for (f=0; f<5; f++)
    {
        printf("Ingrese los cinco numeros:");
        scanf("%f",&numeros[f]);
    }
    suma=0;
    for(f=0; f<5; f++)
    {
        suma=suma+numeros[f];
    }
    for(f=0; f<5; f++)
        {
            if (numeros[f]> may)
            {
    may=numeros[f];
    }
        }
    promedio=suma/5;
    printf("Numero promedio:");
    printf("%0.2f",promedio);
    printf("\n");
    printf("El mayor es %d\n", may);
    printf("\n");

    return 0;
}
