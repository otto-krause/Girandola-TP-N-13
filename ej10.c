#include <stdio.h>
#include <stdlib.h>

int main()
	
{
	
int numero[7]={0}, i=0;
float total[4]={0,1,0,0};
	printf("Ingrese los numeros :\n");
for(i=1;i<6;i++)
	{
	
		scanf("%d",&numero[i]);
	}

for(i=1;i<6;i++)
		{
	
			total[0]=total[0]+numero[i];
			total[1]=total[1]*numero[i];
		}

			total[2]=total[0]/5;
for(i=1;i<6;i++)
			{
	
	if(numero[i]<total[2])
				{
		
			total[3]+=1;
				}
			}
	printf("La suma es : %.0f\n",total[0]);
	printf("El producto es : %.0f\n",total[1]);
	printf("El promedio es de : %.2f\n",total[2]);
	printf("El que esta bajo del promedio es : %.2f\n",total[3]);

}
