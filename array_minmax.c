#include<stdio.h>
int main()
{
    int array[10]={2,35,4,33,5,4,6,998,44,11};
    int i;
    int max,min;
    max=array[0];
    
    for(i=0;i<10;i++)
    {
        if(array[i]>max)
        {
            max=array[i];
        }
    }
    printf("Maximum element in array = %d",max);
    min=array[0];
    for(i=0;i<10;i++)
    {
        if(array[i]<min)
        {
            min=array[i];
        }
    }
    printf("\nMinimum element in array = %d",min);
    return 0;
}