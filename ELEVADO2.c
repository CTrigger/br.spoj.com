//http://br.spoj.com/problems/ELEVADO2/
#include<stdio.h>
int main()
{
  int S,E,i,N,C, Y = 0, X = 0 ;
  scanf("%d %d",&N,&C);
  for(i = 0; i < N; ++i)
  {
    scanf("%d%d", &S, &E);
    Y += E - S;
    if(Y > C) 
      X = 1;
    
  }
  if(X>=1)
  {
    puts("S");
  }else{
    puts("N");
  }
  return 0;
}




