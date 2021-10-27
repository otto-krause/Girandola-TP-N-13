#include <stdio.h>
#include <stdlib.h>

int main()
{
int a,b;
    printf("Agregue 2 numeros por pantalla: ");
        scanf("%d %d", &a, &b);
if(a > b)
    {
int f = a;
            a = b;
            b = f;
    }
int v[b];
for(int i = a+1; i < b; i++)
        {
            v[i-a] = i;
        }
for(int i = a+1; i < b; i++)
            {
    printf("%d \n", v[i-a]);
            }
}
