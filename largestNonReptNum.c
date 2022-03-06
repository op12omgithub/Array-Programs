#include<stdio.h>
int largestNonReptNum(int*a,int size)
{
    int i,j,count,max;
    for(i=0;i<size;i++)
    {
        max = a[i];
        for(j=0;j<size;j++)
        {
            if(i!=j)
            {
                if(a[i]==a[j] && a[i]!=-1)
                    a[i]=-1,a[j]=-1;
                else if(max < a[j])
                    max = a[j];
            }
        }
    }
    return max;
}

int main(int argc, char *argv[])
{
    printf("Largest non Reapiting number is \n");
    int arr[]={1,2,4,5,20,25,25,36,36};  // Input Array
    int count,size;
    size = sizeof(arr)/sizeof (arr[0]);
    count = largestNonReptNum(arr,size);
    printf("%d\n",count);
    return 0;
}
