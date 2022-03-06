#include <stdio.h>
int noOfSqrElent(int *a,int size)
{
    int i,j,count=0;
    for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
        {
            if(a[i]==a[j]*a[j])
              count++;
        }
    }
    return count;
}


int main(int argc, char *argv[])
{
    int arr[]={1,2,4,5,7,8,16,25,36}; //Input Array
    int count,size;
    size = sizeof(arr)/sizeof (arr[0]);
    count = noOfSqrElent(arr,size);
    printf(" No. element having square is %d\n",count);
    return 0;
}
