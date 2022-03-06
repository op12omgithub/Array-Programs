#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#define arr_size 1000

void reverseNumber(int *a,int size)
{
  int i,tmp,remindr,revrs=0;
  for(i=0;i<size;i++)
  {
    tmp = a[i];
    remindr = 0;
    revrs =0;
    while(tmp!=0)
   {
    remindr = tmp%10;
    revrs = revrs * 10 + remindr;
        tmp = tmp/10;
   }
   a[i] = revrs;
  }
}

int main()
{
  int n,i,in,*a;
  printf("Enter no. of Inputs\n");
  scanf("%d",&n);
  if(n<=arr_size)
  a = (int*)malloc(sizeof(int)*n);
  else 
  return -1;
  
  for(i=0;i<n;i++)
  {
  scanf("%d",&a[i]);
  assert(1<= a[i]<=1000000);
  }
  reverseNumber(a,n);
  printf("Print Result\n");
  for(i=0;i<n;i++)
  {
  printf("%d\n",a[i]);
  }
  return 0;
}
