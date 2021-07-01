#include<stdio.h>
#include<stdlib.h>

void ssort(int arr[],int l)
{
    for(int i=0;i<l;i++)
    { swap_max(arr,l,i);
    }
}

void swap_max(int arr[],int l,int n)
{
    int j,t;
    int temp;

    for(j=t=n;j<l;j++)
    {
        if(arr[j] > arr[t])
        {   t = j;
        }
    }
    temp = arr[n];
    arr[n] = arr[t];
    arr[t] = temp;
}
