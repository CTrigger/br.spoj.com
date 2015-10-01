//http://br.spoj.com/problems/CONTA1/
#include<stdio.h>

int main()
{
  int c=-1, p=0;
  while(c<0 || c>1000)
    scanf("%d",&c);
  
  if(c<=10)
  {
    p=7;
  }else{
    if(c<=30)
    {
      p=(c-10)+7;
    }else{
        if(c<=100)
        {
          p=((c-30)*2)+27;
        }else{
          p=((c-100)*5)+167;
        }
      }
  }
  printf("%d",p);
  return 0;
}




