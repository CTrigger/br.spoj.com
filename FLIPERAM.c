//http://br.spoj.com/problems/FLIPERAM/
#include<stdio.h>
#include<stdlib.h>
int comparador(const void * a, const void * b)
{
   return ( *(int*)b - *(int*)a );
}

int main(){
    int entrada1, entrada2;
    scanf("%d %d",&entrada1,&entrada2);
    int pontos[entrada1];
    int  i,j;//contadores//
    for(i=0;i<entrada1;i++){
        scanf("%d",&pontos[i]);
    }
    qsort(pontos, i, sizeof(int), comparador);
    for(j=0;j<entrada2;j++){
        printf("%d\n",pontos[j]);


    }
return 0;
}

