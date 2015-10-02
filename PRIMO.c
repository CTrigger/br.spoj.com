#include<stdio.h>
long long entrada,j=1 ,divisor = 1,checker=2,resto,verdade = 1;
void primos(){
    while (verdade < 3 && j < checker){
        resto = entrada%j;
        checker = entrada/j;
        j++;
        if(resto == 0){
            verdade ++;
        }
    }
        if(verdade == 2){
        puts("sim");
        }else{
        puts("nao");
        }
}

int main (){
    scanf("%lld", &entrada);
    primos();
    return 0;
}
