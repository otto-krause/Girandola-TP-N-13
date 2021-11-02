#include <stdio.h>
#include <stdlib.h>

int main()
	{

int a[15];
	for(int i = 0; i < 15; i++)
		
		{
		
		printf("Ingrese la nota correspondiente del alumno %d", i);
			scanf("%d", a[i]);
			
		}
	
	for(int i = 0; i < 15; i++)
		
			{
		
	if(a[i] > 8)
		printf("El alumno %d tiene mas de 8\n", a[i]);
	
			}
	
		return 0;
	
	}
	
	
