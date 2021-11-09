#include <stdio.h>
#include <stdlib.h>

int main()
{
int v[3]={0,1,1},i=0;
	printf("1, ");
for(i=0;i<9;i++)
	{
		v[2]=v[0]+v[1];
		v[0]=v[1];
		v[1]=v[2];
	printf("%d, ",v[2]);
	}
			return 0;
}

