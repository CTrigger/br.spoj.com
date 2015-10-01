//http://br.spoj.com/problems/BAFO/
#include<stdio.h>
int main(){
    int r,a,b,i,t=1,aldo,beto;
    scanf("%d",&r);
    while (r>0){
        aldo=0;
        beto=0;
        for(i=0;i<r;i++){
            scanf("%d %d",&a,&b);
            aldo+=a;
            beto+=b;
        }
        printf("Teste %d\n",t++);
        if(aldo>beto){
            printf("Aldo\n\n");
            ;
            }else{
            printf("Beto\n\n");
            ;}
        scanf("%d",&r);
}
return 0;
}

