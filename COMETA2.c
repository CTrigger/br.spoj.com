//http://br.spoj.com/problems/COMETA2/
#include<stdio.h>
int main(){
    int a=1986,b=0,c=0,d=0,i=1986;
		scanf("%d",&b);
		for(i;i<=b;i+=76){ 		   			   
		d+=1;
		}
        if(b>2009 && b<10001){
		c=a+(d*76);
        printf("%d",c);
    	}
		
return 0;
}

