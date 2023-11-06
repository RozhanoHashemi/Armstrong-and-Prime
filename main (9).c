#include <stdio.h>
#include <stdlib.h>


int A(int x,int y)
{
 int b=1;
 int i=1;
 for(i;i<=y;i++)
      b*=x;

 return b;

}

//B = armstrong
int B(int x)
{

 int count=0;
 int y=x;
 while(x!=0)
 {
  x/=10;
  count++;
 }
 x=y;
 int t=0;
 while(y!=0)
 {

  t+=A(y%10,count);

  y/=10;
 }

 if(x==t)
    return 1;
 else
   return 0;

}

//C= prime
int C(int x)
{
 if(x==1)
    return 0;
 else if(x==2)
        return 1;
 else if(x%2==0)
        return 0;
 else
 {
  int i=2;

  for(i;i<x;i++)
   {
    if(x%i==0)
       return 0;
   }


    }


 return 1;

}




int main() {


int x;
scanf("%d",&x);

if(C(x))
   printf("prime");
else
 printf("notprime");

printf("\n");
if(B(x))
   printf("armstrong");
else
  printf("notarmstrong");

return 0;
}
