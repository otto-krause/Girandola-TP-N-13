#include <stdio.h>
#include <stdlib.h>

int main()
{
int lista[7]={0}, i=0, numero[3]={0};

	printf("Ingrese los numeros que entran en la lista mayores a 0 :\n");
	
for (i=1;i<6;i++)
	{
	
		scanf("%d",&lista[i]);
	}

for(i=1;i<6;i++)
		{
	
	if(lista[i]<lista[i+1])
			
			{
		
			numero[0]=numero[0]+1;
			}
	
	else
				{
			
		if(lista[i]>lista[i+1])
					{
				
			numero[1]=numero[1]+1;
					}
		
				}
		}
			numero[3]=lista[1]+lista[5];
	if(numero[0]==4)
						{
	printf("Ascendente\n");

						}
	else
							{
		
		if(numero[1]==5)
		
								{
	printf("Descendente\n");
	
								}
	else
									{
			
			printf("Desordenado\n");
									}
		
							}
	printf("Suma del primero con el ultimo es :%d",numero[3]);
}
