//http://br.spoj.com/problems/TRANSP11/
#include<stdio.h>
//TRANSP11
int main(){
		int i,a,b,c,x,y,z,saida;
		scanf("%d%d%d%d%d%d",&a,&b,&c,&x,&y,&z);
		saida = (x/a)*(y/b)*(z/c);
		if(a>x || b>y || c>z){
			puts("0");
		}else{
			printf("%d",saida);
		}
		
		

return 0;
}



