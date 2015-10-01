//http://br.spoj.com/problems/JGARCOM/
#include<stdio.h>
int main(){
	int iBANDEJAS,LATAS,COPOS,X1=0;
		scanf("%d",&iBANDEJAS);
		for(iBANDEJAS;iBANDEJAS>0;iBANDEJAS--){
			scanf("%d %d",&LATAS,&COPOS);
				if(LATAS>COPOS){
					X1+=COPOS;
				
				}
		}
	
	printf("%d",X1);
return 0;
}
