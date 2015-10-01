/*http://br.spoj.com/problems/MINADO12/*/
#include<stdio.h>
int main(){
	int i,j;
	scanf("%d",&j);
	j++;
	int coluna[j],saida[j];
	coluna[0]=coluna[j]=0;
	
	for(i = 1; i<j;i++)
	{
		scanf("%d",&coluna[i]);
	}
	
	for(i=1;i<j;i++)
	{
		saida[i]=coluna[i-1] + coluna[i] + coluna[i+1];
		printf("%d\n",saida[i]);
	}
	

/*	for(i=1;i<j;i++)
	{
		printf("%d\n",saida[i]);
	}
*/	
	
return 0;
}

