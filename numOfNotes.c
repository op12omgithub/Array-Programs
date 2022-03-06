#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#define arr_size 1000

int main()
{
  int i,j,n,*a,size,count=0,remain=0,rsValue;
  int arr[]={1,2,5,10,50,100}; // number represents the notes
  printf("Enter number of inputs\n");
  scanf("%d",&n);
  if(n<=arr_size)
  a = (int*) malloc(sizeof(int)*n);
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
    assert(1<= a[i]<=1000000);
  }
   size = sizeof(arr)/sizeof(arr[0]);
  printf("Print Result\n");
   for(j=0;j<n;j++)
   {
      count = 0;
      rsValue = a[j];
   for(i=size-1;i>=0;i--)
   {
          
     if(arr[i] <= rsValue)
     {
      count = count + rsValue/arr[i];
      remain = rsValue % arr[i];
      rsValue = remain;
      if(remain == 0)
      {
        printf("%d\n",count);
        break;
      }
      
      }      
     
   }
  }

  
}
