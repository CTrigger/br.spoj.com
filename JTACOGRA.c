//http://br.spoj.com/problems/JTACOGRA/
#include<stdio.h>
int main(){
	int entradas,i,velocidade, tempo,total=0;
		scanf("%d",&entradas);
		for(i=0;i<entradas;i++){
			scanf("%d%d",&tempo, &velocidade);
			total +=(velocidade*tempo); 
		}
	printf("%d",total);

return 0;
}



