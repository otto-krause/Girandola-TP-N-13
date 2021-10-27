#include <stdio.h>
#include <stdlib.h>

int main()

{

int resistencia[5]={0};
int i;
int resistotal=0;
    printf("Ingrese 5 resistencias: ");
for(i=0;i<5;i++)

    {

		scanf("%d",&resistencia[i]);

	}

for(i=0;i<5;i++)

	{

            resistencia[5]=resistencia[5]+resistencia[i] ;
    printf("R%d:%d\n",i,resistencia[i]);

	}

	printf("RT:%d",resistencia[5]);

}
