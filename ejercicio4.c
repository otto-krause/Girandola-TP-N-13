#include <stdio.h>
#include <stdlib.h>

int main()
{

int a[31];
for(int i = 1; i <= 30; i++)

    {
    printf("Ingrese la nota del alumno correspondiente: ", "%d");
        scanf("%d", &a[i]);
            a[0] += a[i];
    }

    printf("promedio: %d", a[0]/30);

}

