//http://br.spoj.com/problems/ENCOTEL/
#include<stdio.h>
char d[]= "22233344455566677778889999";

int main()
{
    int i;
    char t[31];
        while( scanf( "%s",&t ) != EOF )
          {
          for(i=0;t[i];i++)
          if( t[i]>= 'A' && t[i]<='Z') printf("%c",d[t[i]-'A']);
          else printf("%c",t[i]);
          printf("\n");
        }
return 0;
}



