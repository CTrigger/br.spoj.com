/*
	Name: Ricardo Kim
	Copyright: Ricardo Kim
	Author: Ricardo Kim
	Date: 18/05/16 10:23
	Description: http://br.spoj.com/problems/BIT/
*/
#include<stdio.h>

int main()
{
	int valor,x;
	x = 0;
	
	int bit50,bit10,bit5,bit1;
	
	scanf ("%d", &valor);
	
	while (valor != 0)
	{
		x++;
		bit50 = 0;
		bit10 = 0;
		bit5 = 0;
		bit1 = 0;
		
		while (valor >= 50)
		{
			bit50++;
			valor -= 50;
		}
		
		while (valor >= 10)
		{
			bit10++;
			valor -= 10;
		}
		
		while (valor >= 5)
		{
			bit5++;
			valor -= 5;
		}
		
		while (valor >= 1)
		{
			bit1++;
			valor -= 1;
		}
		printf ("Teste %d\n", x);
		printf ("%d %d %d %d\n\n", bit50, bit10, bit5, bit1);
		scanf("%d", &valor);
	}
	
	return 0;
}
