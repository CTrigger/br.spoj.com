//http://br.spoj.com/problems/GUARDCOS/
#include<stdio.h>
#include<math.h>
int main(){
    float R1,R2,distancia=1, VGuarda=1,VFuga=1, limite = 12;
    while(scanf("%f %f %f",&distancia, &VFuga,&VGuarda)!= EOF){
    	R1 = (sqrt(pow(distancia,2)+pow(12,2)))/VGuarda;
    	R2 = (12/VFuga);
  	  if(R1<=R2){
        puts("S");
    		}else{
      		  puts("N");
    	}
    }
    return 0;
}
