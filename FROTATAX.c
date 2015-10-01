//http://br.spoj.com/problems/FROTATAX/
#include<stdio.h>
int main()
{
	float a,g,ra,rg,sa=0,sg=0;
	while (sa<=0 && sg<=0)
	{
		scanf("%f %f %f %f",&a,&g,&ra,&rg);
		sa=ra/a;
		sg=rg/g;
	}
	if(sa>sg)
	{
		puts("A");
	}
	else
	{
		if(sa<=sg)
		{
			puts("G");
		}
	}
	return 0;
}


