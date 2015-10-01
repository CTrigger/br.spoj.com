#include <stdio.h>
/*http://br.spoj.com/problems/ALADES/*/
#define dia 1440


int h2m(int a){
    int conv;
    conv=a* 60;
return conv;
}

int main(){
    int h1=1,m1=1,h2=1,m2=1;
    while(h1>0||h2>0||m1>0||m2>0){
        scanf("%d %d %d %d",&h1,&m1,&h2,&m2);
        if(h1!=0||h2!=0||m1!=0||m2!=0){
            if(h1>0)m1+=h2m(h1);
            if(h2>0)m2+=h2m(h2);
            if(h1==0)m1+=dia;
            if(h2==0)m2+=dia;
            if(m2>m1)printf("%d\n",m2-m1);
            if(m1>m2)printf("%d\n",m2+dia-m1);
        }
    }
return 0;
}


