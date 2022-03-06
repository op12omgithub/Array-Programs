#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#define arr_size 1000
void swap(int *a,int*b)
{
  int tmp;
  tmp = *a;
  *a = *b;
  *b = tmp;
}

int secndLargstNum(int *res,int size)
{
  int i,j;
  for(i=0;i<2;i++)    //Since second largest number need to find ,therefore i<2
  {   
  for(j=0;j<size-i-1;j++)
  {
    if(res[j]>res[j+1])
    swap(&res[j],&res[j+1]);
  }
  }
  return res[size-2];  // in the array last two element is sorted in icreasing order
}
void passNum(int **a,int size)
{
  int i,j,op[3],result;
  
  for(i=0;i<size;i++)
  {
    for(j=0;j<3;j++)
    {
      op[j]=a[i][j];
     
    }
    result = secndLargstNum(op,3);
    printf("%d \n",result);
  }
}

int main()
{
  int n,i,j,in,**a;
  printf("Enter no. of inputs\n");
  scanf("%d",&n);
  assert(n<=arr_size);
  a = (int*)malloc(sizeof(int)*n); 
  for(i=0;i<n;i++)
  {
    a[i]= malloc(3*sizeof(*a[i]));  //multiply by 3, since no. of coloumn of the matrix is 3;
  }
  
  
  for(j=0;j<n;j++)
  {
  for(i=0;i<3;i++)
  {
  scanf("%d",&a[j][i]);
  assert((1<=a[j][i])<=1000000);
  }
  }
  printf("output is ::\n");
  passNum(a,n);
  
  return 0;
}
