//http://br.spoj.com/problems/PEDAGIO1/
#include <stdio.h>
int main() 
{
	int L,D,K,P,R;
	scanf("%d",&L);
	scanf("%d",&D);
	scanf("%d",&K);
	scanf("%d",&P);
	R=(L*K)+(L/D*P);
	printf("%d",R);
	return 0;
}

