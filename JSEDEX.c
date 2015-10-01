//http://br.spoj.com/problems/JSEDEX/
#include<stdio.h>
int main()
{
	int	a,b,c,d;
	scanf("%d %d %d %d",&a,&b,&c,&d);
	if(a<=b && a<=c && a<=d)
	{
		puts("S");
	}
	else
	{
		puts("N");
	}
return 0;
}


