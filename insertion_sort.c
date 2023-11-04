#include <stdio.h>

void insertion_sort(int a[],int lenght);

int main()
{
    a[]={2,4,6,9,19,10};
    insertion_sort();
    for(int i=0;i<lenght;i++);
    {
        printf("a[%d]=%d",i,a[i]);
    }
}

void insertion_sort(int a[],int lenght);
{
    for(int i=1;i<lenght;i++)
    {
        int key=a[i];
        int j=i-1;
        while(j>=0 && a[j]>key)
        {
            a[j+1]=a[j];
            j--;
        }
        key=a[j+1]
    }
    
    
}


