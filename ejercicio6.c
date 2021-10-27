#include <stdio.h>
#include <stdlib.h>

int main()

{

int pers[20]={0};
int cta[1]={0};
int i;
for(i=1;i<21;i++)

    {
	printf("Ingrese sueldo correspondiente %d:",i);
	    scanf("%d",&pers[i]);

if(pers[i]>=2000)

        {
            cta[0]=cta[0]+1;
	    }

else

            {
	        cta[1]=cta[1]+1;
            }

    }

    printf("Sueldo mayor a 2000:%d\n",cta[0]);
    printf("Sueldo menor a 2000:%d",cta[1]);

}
